#include "awssignaturev3.h"
#include "awssignaturev3_p.h"

QTAWS_BEGIN_NAMESPACE

/**
 * @class  AwsSignatureV3
 *
 * @brief  Implements AWS Signature Version 3.
 *
 * Signature Version 3 has been discontinued by Amazon, but is included here
 * for posterity.
 */

AwsSignatureV3::AwsSignatureV3() : d_ptr(new AwsSignatureV3Private(this)) {

}

void AwsSignatureV3::sign(const AwsAbstractCredentials &credentials, const QNetworkAccessManager::Operation operation,
                          QNetworkRequest &request, const QByteArray &data) const
{
    Q_UNUSED(operation)
    Q_UNUSED(request)
    Q_UNUSED(data)
    Q_UNUSED(credentials)

    Q_ASSERT_X(false, "AwsSignatureV3::sign", "Not implemented");

    //Q_D(AwsBasicCredentials);
    //return d->accessKeyId;
}

/**
 * @class  AwsSignatureV3Private
 *
 * @brief  Private implementation for AwsSignatureV3.
 *
 * @see    http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html
 */

AwsSignatureV3Private::AwsSignatureV3Private(AwsSignatureV3 * const q) : q_ptr(q) { }

QTAWS_END_NAMESPACE
