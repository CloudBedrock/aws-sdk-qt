/*
    Copyright 2013-2015 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "testawsabstractrequest.h"

#include "core/awsabstractcredentials.h"
#include "core/awsabstractrequest.h"
#include "core/awsabstractresponse.h"
#include "core/awsabstractsignature.h"
#include "core/awsbasiccredentials.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "core/awsabstractrequest_p.h"
#include "core/awsabstractresponse_p.h"
#endif

#include <QNetworkAccessManager>
#include <QNetworkRequest>

Q_DECLARE_METATYPE(QNetworkAccessManager::Operation)

namespace TestAwsAbstractRequest_Mocks {

class MockResponse : public AwsAbstractResponse {
public:
    MockResponse(QNetworkReply * const reply) { setReply(reply); }
    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    QNetworkReply * reply() { return d_ptr->reply; }
    #endif
protected:
    virtual void parseFailure(QIODevice &response) { Q_UNUSED(response); }
    virtual void parseSuccess(QIODevice &response) { Q_UNUSED(response); }
};

// Bare minimum concrete mock class.
class MockRequest : public AwsAbstractRequest {
public:
    MockRequest() : AwsAbstractRequest() { }
    MockRequest(QObject * const parent) : AwsAbstractRequest(parent) { }
    MockRequest(AwsAbstractRequestPrivate * const d, QObject * const parent)
        : AwsAbstractRequest(d, parent) { }
    virtual bool isValid() const { return false; }
protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const {
        return new MockResponse(reply);
    }
    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const {
        return QNetworkRequest(endpoint);
    }
};

class MockSignature : public AwsAbstractSignature {
public:
    MockSignature() { }
    virtual void sign(const AwsAbstractCredentials &credentials,
                      const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request,
                      const QByteArray &data = QByteArray()) const
    {
        request.setRawHeader("Authorization",    QByteArray("MockSignature"));
        request.setRawHeader("test-accessKeyId", credentials.accessKeyId().toLocal8Bit());
        request.setRawHeader("test-secretKey",   credentials.secretKey().toLocal8Bit());
        request.setRawHeader("test-token",       credentials.token().toLocal8Bit());
        request.setRawHeader("test-operation",   QByteArray(1, (char)operation));
        if (!data.isNull()) request.setRawHeader("test-data", data);
    }
    virtual int version() const { return -1; }
};

class MockNetworkReply : public QNetworkReply {
public:
    MockNetworkReply(const QNetworkRequest &request, QObject * const parent = 0)
        : QNetworkReply(parent) { setRequest(request); }
protected:
    virtual void abort() { }
    virtual qint64 readData(char * data, qint64 maxSize) {
        Q_UNUSED(data)
        Q_UNUSED(maxSize)
        return -1;
    }
};

class MockNetworkAccessManager : public QNetworkAccessManager {
public:
    Operation operation;
    QNetworkRequest request;
protected:
    QNetworkReply * createRequest(Operation op, const QNetworkRequest &req, QIODevice *outgoingData)
    {
        Q_UNUSED(outgoingData)
        operation = op;
        request = req;
        return new MockNetworkReply(req);
    }
};

} using namespace TestAwsAbstractRequest_Mocks;

void TestAwsAbstractRequest::construct()
{
    {   // Verify the default parent argument is NULL.
        MockRequest request;
        QCOMPARE(request.parent(), reinterpret_cast<QObject *>(NULL));
    }

    {   // Verify the handling of an explicit parent argument.
        MockRequest request(this);
        QCOMPARE(request.parent(), qobject_cast<QObject *>(this));
    }
}

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsAbstractRequest::construct_d_ptr()
{
    MockRequest temporaryRequest;
    AwsAbstractRequestPrivate * const requestPrivate =
        new AwsAbstractRequestPrivate(&temporaryRequest);
    MockRequest request(requestPrivate, this);
    QCOMPARE(request.d_func(), requestPrivate);
    QCOMPARE(request.parent(), qobject_cast<QObject *>(this));
}
#endif

void TestAwsAbstractRequest::data_data()
{
    QTest::addColumn<QByteArray>("data");
    QTest::newRow("null")   << QByteArray();
    QTest::newRow("abc123") << QByteArray("abc123");
}

void TestAwsAbstractRequest::data()
{
    QFETCH(QByteArray, data);
    MockRequest request;
    QCOMPARE(request.data(), QByteArray());
    request.setData(data);
    QCOMPARE(request.data(), data);
}

void TestAwsAbstractRequest::networkRequest_data()
{
    QTest::addColumn<QUrl>("endpoint");
    QTest::addColumn<QString>("accessKeyId");
    QTest::addColumn<QString>("secretKey");
    QTest::addColumn<QString>("token");
    QTest::addColumn<QNetworkAccessManager::Operation>("operation");
    QTest::addColumn<QByteArray>("data");

    QTest::newRow("null")
        << QUrl() << QString() << QString() << QString()
        << QNetworkAccessManager::UnknownOperation << QByteArray();

    QTest::newRow("null-with-url")
        << QUrl(QLatin1String("http://example.com")) << QString() << QString()
        << QString() << QNetworkAccessManager::UnknownOperation << QByteArray();

    QTest::newRow("empty")
        << QUrl(QLatin1String("")) << QString::fromLatin1("")
        << QString::fromLatin1("") << QString::fromLatin1("")
        << QNetworkAccessManager::UnknownOperation << QByteArray("");

    QTest::newRow("delete")
        << QUrl(QLatin1String("http://example.com/something/to/delete"))
        << QString::fromLatin1("my-awseome-key")
        << QString::fromLatin1("my-awsome-secret")
        << QString::fromLatin1("some-sample-token")
        << QNetworkAccessManager::DeleteOperation
        << QByteArray("ignored");

    QTest::newRow("head")
        << QUrl(QLatin1String("https://example.com"))
        << QString::fromLatin1("key")
        << QString::fromLatin1("secret")
        << QString::fromLatin1("token")
        << QNetworkAccessManager::HeadOperation
        << QByteArray("ignored");

    QTest::newRow("get")
        << QUrl(QLatin1String("http://example.com"))
        << QString::fromLatin1("key")
        << QString::fromLatin1("secret")
        << QString::fromLatin1("token")
        << QNetworkAccessManager::GetOperation
        << QByteArray("ignored");

    QTest::newRow("post")
        << QUrl(QLatin1String("http://example.com/some/path"))
        << QString::fromLatin1("foo")
        << QString::fromLatin1("bar")
        << QString::fromLatin1("baz")
        << QNetworkAccessManager::PostOperation
        << QByteArray("abc123");

    QTest::newRow("put")
        << QUrl(QLatin1String("http://example.com/some/other/path"))
        << QString::fromLatin1("123")
        << QString::fromLatin1("456")
        << QString()
        << QNetworkAccessManager::PutOperation
        << QByteArray("the quick brown fox jumps over the lazy dog");

    QTest::newRow("custom")
        << QUrl(QLatin1String("http://example.com/doesn't/really/matter"))
        << QString::fromLatin1("unused")
        << QString::fromLatin1("not applicable")
        << QString::fromLatin1("irrelevant")
        << QNetworkAccessManager::CustomOperation
        << QByteArray("ignored");
}

void TestAwsAbstractRequest::networkRequest()
{
    QFETCH(QUrl,    endpoint);
    QFETCH(QString, accessKeyId);
    QFETCH(QString, secretKey);
    QFETCH(QString, token);
    QFETCH(QNetworkAccessManager::Operation, operation);
    QFETCH(QByteArray, data);

    const MockSignature signature;
    const AwsBasicCredentials credentials(accessKeyId, secretKey, token);
    MockRequest mockRequest;
    mockRequest.setOperation(operation);
    mockRequest.setData(data);
    const QNetworkRequest request =
        mockRequest.networkRequest(endpoint, signature, credentials);
    QCOMPARE(request.url(), endpoint);
    QCOMPARE(request.rawHeader("test-accessKeyId"), accessKeyId.toLocal8Bit());
    QCOMPARE(request.rawHeader("test-secretKey"),   secretKey.toLocal8Bit());
    QCOMPARE(request.rawHeader("test-token"),       token.toLocal8Bit());
    QCOMPARE(request.rawHeader("test-operation"),   QByteArray(1, (int)operation));
    QCOMPARE(request.rawHeader("test-data"),        data);
}

void TestAwsAbstractRequest::operation_data()
{
    QTest::addColumn<QNetworkAccessManager::Operation>("operation");
    #define NEW_ROW(op) QTest::newRow(#op) << QNetworkAccessManager::op##Operation
    NEW_ROW(Head);
    NEW_ROW(Get);
    NEW_ROW(Put);
    NEW_ROW(Post);
    NEW_ROW(Delete);
    NEW_ROW(Custom);
    NEW_ROW(Unknown);
    #undef NEW_ROW
}

void TestAwsAbstractRequest::operation()
{
    QFETCH(QNetworkAccessManager::Operation, operation);
    MockRequest request;
    QCOMPARE(request.operation(), QNetworkAccessManager::GetOperation);
    request.setOperation(operation);
    QCOMPARE(request.operation(), operation);
}

void TestAwsAbstractRequest::send_data()
{
    networkRequest_data();
}

void TestAwsAbstractRequest::send()
{
    QFETCH(QUrl,    endpoint);
    QFETCH(QString, accessKeyId);
    QFETCH(QString, secretKey);
    QFETCH(QString, token);
    QFETCH(QNetworkAccessManager::Operation, operation);
    QFETCH(QByteArray, data);

    MockNetworkAccessManager manager;
    const MockSignature signature;
    const AwsBasicCredentials credentials(accessKeyId, secretKey, token);
    MockRequest request;
    request.setOperation(operation);
    request.setData(data);
    QCOMPARE(request.operation(), operation);
    QCOMPARE(request.data(), data);
    AwsAbstractResponse * const response =
        request.send(manager, endpoint, signature, credentials);

    // If the operation is Custom or Unknown, send should simply return NULL.
    if ((operation == QNetworkAccessManager::CustomOperation) ||
        (operation == QNetworkAccessManager::UnknownOperation)) {
        QCOMPARE(response, reinterpret_cast<AwsAbstractResponse *>(NULL));
        QCOMPARE(manager.request.url(), QUrl());
        QVERIFY(!manager.request.hasRawHeader("test-accessKeyId"));
        QVERIFY(!manager.request.hasRawHeader("test-secretKey"));
        QVERIFY(!manager.request.hasRawHeader("test-token"));
        QVERIFY(!manager.request.hasRawHeader("test-operation"));
        QVERIFY(!manager.request.hasRawHeader("test-data"));
        return;
    }

    QVERIFY(response);
    QCOMPARE((int)manager.operation, (int)operation);
    QCOMPARE(manager.request.url(), endpoint);
    QCOMPARE(manager.request.rawHeader("test-accessKeyId"), accessKeyId.toLocal8Bit());
    QCOMPARE(manager.request.rawHeader("test-secretKey"),   secretKey.toLocal8Bit());
    QCOMPARE(manager.request.rawHeader("test-token"),       token.toLocal8Bit());
    QCOMPARE(manager.request.rawHeader("test-operation"),   QByteArray(1, (int)operation));
    QCOMPARE(manager.request.rawHeader("test-data"),        data);

    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    MockResponse * const mockResponse = reinterpret_cast<MockResponse *>(response);
    QCOMPARE(mockResponse->reply()->request().url(), endpoint);
    QCOMPARE(mockResponse->reply()->request().rawHeader("test-accessKeyId"), accessKeyId.toLocal8Bit());
    QCOMPARE(mockResponse->reply()->request().rawHeader("test-secretKey"),   secretKey.toLocal8Bit());
    QCOMPARE(mockResponse->reply()->request().rawHeader("test-token"),       token.toLocal8Bit());
    QCOMPARE(mockResponse->reply()->request().rawHeader("test-operation"),   QByteArray(1, (int)operation));
    QCOMPARE(mockResponse->reply()->request().rawHeader("test-data"),        data);
    #endif
}

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsAbstractRequest::post()
{

}

void TestAwsAbstractRequest::put()
{

}
#endif
