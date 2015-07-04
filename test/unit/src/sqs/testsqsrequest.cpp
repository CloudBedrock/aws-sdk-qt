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

#include "testsqsrequest.h"

#include "sqs/sqsrequest.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqsrequest_p.h"
#endif

#include <QDebug>

Q_DECLARE_METATYPE(SqsRequest::Action)

#define SQS_API_VERSION QString::fromLatin1("2012-11-05")

namespace TestSqsRequest_Mocks {

class MockSqsRequest : public SqsRequest {
public:
    MockSqsRequest(const Action action) : SqsRequest(action) { }
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
    MockSqsRequest(SqsRequestPrivate *d) : SqsRequest(d) { }
#endif
    virtual bool isValid() const { return false; }
protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const {
        Q_UNUSED(reply);
        return NULL;
    }
};

} using namespace TestSqsRequest_Mocks;

void TestSqsRequest::construct_action_data()
{
    QTest::addColumn<SqsRequest::Action>("action");
    #define NEW_ROW(action) QTest::newRow(#action) << SqsRequest::action##SqsAction
    NEW_ROW(AddPermission);
    NEW_ROW(ChangeMessageVisibility);
    NEW_ROW(ChangeMessageVisibilityBatch);
    NEW_ROW(CreateQueue);
    NEW_ROW(DeleteMessage);
    NEW_ROW(DeleteMessageBatch);
    NEW_ROW(DeleteQueue);
    NEW_ROW(GetQueueAttributes);
    NEW_ROW(GetQueueUrl);
    NEW_ROW(ListDeadLetterSourceQueues);
    NEW_ROW(ListQueues);
    NEW_ROW(PurgeQueue);
    NEW_ROW(ReceiveMessage);
    NEW_ROW(RemovePermission);
    NEW_ROW(SendMessage);
    NEW_ROW(SendMessageBatch);
    NEW_ROW(SetQueueAttributes);
    #undef NEW_ROW
}

void TestSqsRequest::construct_action()
{
    QFETCH(SqsRequest::Action, action);

    MockSqsRequest request(action);
    QCOMPARE(request.apiVersion(), SQS_API_VERSION);
    QCOMPARE(request.action(), action);
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
    QCOMPARE(request.d_func()->parameters, QVariantMap());
#endif
}

void TestSqsRequest::construct_copy_data()
{
    QTest::addColumn<SqsRequest::Action>("action");
    QTest::addColumn<QVariantMap>("parameters");

    #define NEW_ROW(action) QTest::newRow(#action) \
        << SqsRequest::action##SqsAction << QVariantMap();
    NEW_ROW(AddPermission);
    NEW_ROW(ChangeMessageVisibility);
    NEW_ROW(ChangeMessageVisibilityBatch);
    NEW_ROW(CreateQueue);
    NEW_ROW(DeleteMessage);
    NEW_ROW(DeleteMessageBatch);
    NEW_ROW(DeleteQueue);
    NEW_ROW(GetQueueAttributes);
    NEW_ROW(GetQueueUrl);
    NEW_ROW(ListDeadLetterSourceQueues);
    NEW_ROW(ListQueues);
    NEW_ROW(PurgeQueue);
    NEW_ROW(ReceiveMessage);
    NEW_ROW(RemovePermission);
    NEW_ROW(SendMessage);
    NEW_ROW(SendMessageBatch);
    NEW_ROW(SetQueueAttributes);
    #undef NEW_ROW

    QVariantMap parameters;
    parameters.insert(QLatin1String("foo"), 1);
    parameters.insert(QLatin1String("bar"), QLatin1String("2"));
    parameters.insert(QLatin1String("baz"), 3.0);
    QTest::newRow("parameters") << SqsRequest::ListQueuesSqsAction << parameters;
}

void TestSqsRequest::construct_copy()
{
    QFETCH(SqsRequest::Action, action);
    QFETCH(QVariantMap, parameters);

    MockSqsRequest request1(action);
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
    request1.d_func()->parameters = parameters;
#endif
    QCOMPARE(request1.apiVersion(), SQS_API_VERSION);
    QCOMPARE(request1.action(), action);
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
    QCOMPARE(request1.d_func()->parameters, parameters);
#endif

    MockSqsRequest request2(request1);
    QCOMPARE(request2.apiVersion(), SQS_API_VERSION);
    QCOMPARE(request2.action(), action);
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
    QCOMPARE(request2.d_func()->parameters, parameters);
#endif
}

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestSqsRequest::construct_d_ptr()
{
    MockSqsRequest temporaryRequest(SqsRequest::ListQueuesSqsAction);
    SqsRequestPrivate * const requestPrivate =
        new SqsRequestPrivate(temporaryRequest.action(), &temporaryRequest);
    MockSqsRequest request(requestPrivate);
    QCOMPARE(request.d_func(), requestPrivate);
}
#endif

void TestSqsRequest::assignment_data()
{
    construct_copy_data();
}

void TestSqsRequest::assignment()
{
    QFETCH(SqsRequest::Action, action);
    QFETCH(QVariantMap, parameters);

    MockSqsRequest request1(action);
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
    request1.d_func()->parameters = parameters;
#endif
    QCOMPARE(request1.apiVersion(), SQS_API_VERSION);
    QCOMPARE(request1.action(), action);
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
    QCOMPARE(request1.d_func()->parameters, parameters);
#endif

    MockSqsRequest request2(SqsRequest::ListQueuesSqsAction);
    request2 = request1;
    QCOMPARE(request2.apiVersion(), SQS_API_VERSION);
    QCOMPARE(request2.action(), action);
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
    QCOMPARE(request2.d_func()->parameters, parameters);
#endif
}

void TestSqsRequest::action_data()
{
    construct_action_data();
}

void TestSqsRequest::action()
{
    QFETCH(SqsRequest::Action, action);

    // Setup a mock request that has an action other than the test data action.
    MockSqsRequest request((action == SqsRequest::ListQueuesSqsAction)
        ? SqsRequest::CreateQueueSqsAction : SqsRequest::ListQueuesSqsAction);
    QVERIFY(request.action() != action);

    request.setAction(action);
    QCOMPARE(request.action(), action);
}

void TestSqsRequest::actionString_data()
{
    QTest::addColumn<SqsRequest::Action>("action");
    QTest::addColumn<QString>("actionString");

    #define NEW_ROW(action) QTest::newRow(#action) \
        << SqsRequest::action##SqsAction << QString::fromLatin1(#action)
    NEW_ROW(AddPermission);
    NEW_ROW(ChangeMessageVisibility);
    NEW_ROW(ChangeMessageVisibilityBatch);
    NEW_ROW(CreateQueue);
    NEW_ROW(DeleteMessage);
    NEW_ROW(DeleteMessageBatch);
    NEW_ROW(DeleteQueue);
    NEW_ROW(GetQueueAttributes);
    NEW_ROW(GetQueueUrl);
    NEW_ROW(ListDeadLetterSourceQueues);
    NEW_ROW(ListQueues);
    NEW_ROW(PurgeQueue);
    NEW_ROW(ReceiveMessage);
    NEW_ROW(RemovePermission);
    NEW_ROW(SendMessage);
    NEW_ROW(SendMessageBatch);
    NEW_ROW(SetQueueAttributes);
    #undef NEW_ROW
}

void TestSqsRequest::actionString()
{
    QFETCH(SqsRequest::Action, action);
    QFETCH(QString, actionString);

    MockSqsRequest request(action);
    QCOMPARE(request.action(), action);
    QCOMPARE(request.actionString(), actionString);
}

void TestSqsRequest::apiVersion_data()
{
    QTest::addColumn<QString>("apiVersion");
    QTest::newRow("null") << QString();
    QTest::newRow("empty") << QString::fromLatin1("");
    QTest::newRow(SQS_API_VERSION.toLocal8Bit()) << SQS_API_VERSION;
    QTest::newRow("foo") << QString::fromLatin1("foo");
    QTest::newRow("bar") << QString::fromLatin1("bar");
    QTest::newRow("baz") << QString::fromLatin1("baz");
}

void TestSqsRequest::apiVersion()
{
    QFETCH(QString, apiVersion);
    MockSqsRequest request(SqsRequest::ListQueuesSqsAction);
    QCOMPARE(request.apiVersion(), SQS_API_VERSION);
    request.setApiVersion(apiVersion);
    QCOMPARE(request.apiVersion(), apiVersion);
}

void TestSqsRequest::clearParameter_data()
{
    QTest::addColumn<QString>("name");
    QTest::addColumn<QVariant>("value");

    QTest::newRow("null") << QString() << QVariant();
    QTest::newRow("empty") << QString::fromLatin1("") << QVariant(QString::fromLatin1(""));
    QTest::newRow("1") << QString::fromLatin1("") << QVariant(QString::fromLatin1("1"));
    QTest::newRow("'2'") << QString::fromLatin1("") << QVariant(QLatin1Char('2'));
    QTest::newRow("3.0") << QString::fromLatin1("") << QVariant(3.0);
}

void TestSqsRequest::clearParameter()
{
    QFETCH(QString, name);
    QFETCH(QVariant, value);

    MockSqsRequest request(SqsRequest::ListQueuesSqsAction);
    request.setParameter(name, value);
    QCOMPARE(request.parameter(name), value);      ///< parameter was set.
    QCOMPARE(request.clearParameter(name), 1);     ///< parameter was cleared.
    QCOMPARE(request.clearParameter(name), 0);     ///< parameter didn't exist.
    QCOMPARE(request.parameter(name), QVariant()); ///< parameter doesn't exist.
}

void TestSqsRequest::parameter_data()
{
    clearParameter_data();
}

// This test is also completely clearParameter above.  Do we need both?
void TestSqsRequest::parameter()
{
    QFETCH(QString, name);
    QFETCH(QVariant, value);

    MockSqsRequest request(SqsRequest::ListQueuesSqsAction);
    QCOMPARE(request.parameter(name), QVariant());
    request.setParameter(name, value);
    QCOMPARE(request.parameter(name), value);
}

void TestSqsRequest::setParameter_data()
{
    clearParameter_data();
}

// This test is also completely clearParameter above.  Do we need both?
void TestSqsRequest::setParameter()
{
    QFETCH(QString, name);
    QFETCH(QVariant, value);

    MockSqsRequest request(SqsRequest::ListQueuesSqsAction);
    QCOMPARE(request.parameter(name), QVariant());
    request.setParameter(name, value);
    QCOMPARE(request.parameter(name), value);
}

void TestSqsRequest::unsignedRequest_data()
{
    /// @todo
}

void TestSqsRequest::unsignedRequest()
{
    /// @todo
}
