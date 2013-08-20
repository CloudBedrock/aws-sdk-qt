#include "awssignaturev2.h"
#include "awssignaturev2_p.h"

#include <QMessageAuthenticationCode>
#include <QNetworkRequest>
#include <QUrl>

QTAWS_BEGIN_NAMESPACE

AwsSignatureV2::AwsSignatureV2() : d_ptr(new AwsSignatureV2Private(this)) {

}

void AwsSignatureV2::sign(const QNetworkAccessManager::Operation operation,
                          QNetworkRequest &request,
                          const AwsAbstractCredentials &credentials,
                          const QByteArray &data
) const {
    Q_UNUSED(operation)
    Q_UNUSED(request)
    Q_UNUSED(data)
    Q_UNUSED(credentials)

    Q_D(const AwsSignatureV2);
    const QString toSign = d->canonicalRequest(operation, request.url());
    const QString signature = QString::fromUtf8(QUrl::toPercentEncoding(QString::fromUtf8(
        QMessageAuthenticationCode::hash(toSign.toUtf8(), credentials.secretKey().toUtf8(),
                                         QCryptographicHash::Sha256).toBase64())));
    QUrl url = request.url();
    url.setQuery(url.query() + QLatin1String("&Signature=") + signature);
    request.setUrl(url);
}

AwsSignatureV2Private::AwsSignatureV2Private(AwsSignatureV2 * const q) : q_ptr(q) { }

QString AwsSignatureV2Private::canonicalPath(const QUrl &url) const {
    QString path = url.path(QUrl::FullyEncoded);
    if (path.isEmpty()) {
        path = QLatin1Char('/');
    }
    return path;
}

QString AwsSignatureV2Private::canonicalRequest(
        const QNetworkAccessManager::Operation operation,
        const QUrl &url
) const {
    return toString(operation) + QLatin1Char('\n') + url.host() + QLatin1Char('\n') +
           canonicalPath(url) + QLatin1Char('\n') + canonicalQuery(QUrlQuery(url));
}

QString AwsSignatureV2Private::canonicalQuery(const QUrlQuery &query) const {
    typedef QPair<QString, QString> QStringPair;
    QList<QStringPair> list = query.queryItems(QUrl::FullyEncoded);
    qSort(list);
    QString result;
    foreach (const QStringPair &pair, list) {
        if (!result.isEmpty()) result += QLatin1Char('&');
        result += QString::fromUtf8(QUrl::toPercentEncoding(pair.first)) + QLatin1Char('=') +
                  QString::fromUtf8(QUrl::toPercentEncoding(pair.second));
    }
    return result;
}

QString AwsSignatureV2Private::toString(const QNetworkAccessManager::Operation operation) const {
    switch (operation) {
        case QNetworkAccessManager::DeleteOperation: return QLatin1String("DELETE");
        case QNetworkAccessManager::HeadOperation:   return QLatin1String("HEAD");
        case QNetworkAccessManager::GetOperation:    return QLatin1String("GET");
        case QNetworkAccessManager::PostOperation:   return QLatin1String("POST");
        case QNetworkAccessManager::PutOperation:    return QLatin1String("PUT");
        case QNetworkAccessManager::CustomOperation: // Fall through.
        default:
            Q_ASSERT_X(false, "AwsSignatureV2Private::toString", "invalid operation");
    }
    return QString();
}

QTAWS_END_NAMESPACE
