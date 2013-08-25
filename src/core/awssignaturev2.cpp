#include "awssignaturev2.h"
#include "awssignaturev2_p.h"

#include <QMessageAuthenticationCode>
#include <QNetworkRequest>
#include <QUrl>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  AwsSignatureV2
 *
 * @brief  Implements AWS Signature Version 2.
 *
 * @see    http://docs.aws.amazon.com/general/latest/gr/signature-version-2.html
 */

/**
 * @brief  Constructs a new AwsSignatureV2 object.
 *
 * Use instances of this object to provide Version 2 signatures for AWS services.
 *
 * @param  hashAlgorithm  Hash algorithm for signatures.  Must be either QCryptographicHash::Sha1
 *                        or QCryptographicHash::Sha256 (default, recommended).
 */
AwsSignatureV2::AwsSignatureV2(const QCryptographicHash::Algorithm hashAlgorithm)
        : d_ptr(new AwsSignatureV2Private(this))
{
    Q_ASSERT((hashAlgorithm == QCryptographicHash::Sha1) || (hashAlgorithm == QCryptographicHash::Sha256));
    Q_D(AwsSignatureV2);
    d->hashAlgorithm = hashAlgorithm;
}

void AwsSignatureV2::sign(const AwsAbstractCredentials &credentials, const QNetworkAccessManager::Operation operation,
                          QNetworkRequest &request, const QByteArray &data) const
{
    Q_UNUSED(data) // Not included in V2 signatures.

    // Calculate the signature.
    Q_D(const AwsSignatureV2);
    const QString toSign = d->canonicalRequest(operation, request.url());
    const QString signature = QString::fromUtf8(QUrl::toPercentEncoding(QString::fromUtf8(
        QMessageAuthenticationCode::hash(toSign.toUtf8(), credentials.secretKey().toUtf8(),
                                         d->hashAlgorithm).toBase64())));

    // Append the signature to the request.
    QUrl url = request.url();
    url.setQuery(url.query() + QLatin1String("&Signature=") + signature);
    request.setUrl(url);
}

AwsSignatureV2Private::AwsSignatureV2Private(AwsSignatureV2 * const q) : q_ptr(q) { }

/// @todo Make this return QByteArray?
QString AwsSignatureV2Private::canonicalRequest(
        const QNetworkAccessManager::Operation operation,
        const QUrl &url) const
{
    Q_Q(const AwsSignatureV2);
    return toString(operation) + QLatin1Char('\n') + url.host() + QLatin1Char('\n') +
           q->canonicalPath(url) + QLatin1Char('\n') + QString::fromUtf8(q->canonicalQuery(QUrlQuery(url)));
}

QString AwsSignatureV2Private::toString(const QNetworkAccessManager::Operation operation) const
{
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
