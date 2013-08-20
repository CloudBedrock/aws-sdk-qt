#ifndef AWSSIGNATUREV3_H
#define AWSSIGNATUREV3_H

#include "qtawsglobal.h"
#include "awsabstractsignature.h"

QTAWS_BEGIN_NAMESPACE

class AwsSignatureV3Private;

class QTAWS_EXPORT AwsSignatureV3 : public AwsAbstractSignature {
    Q_OBJECT
    Q_DECLARE_PRIVATE(AwsSignatureV3)

public:
    AwsSignatureV3(QObject * const parent = 0);

public slots:
    virtual void sign(const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request, const QIODevice * const data,
                      const AwsAbstractCredentials &credentials) const;

private:
    AwsSignatureV3Private * const d_ptr;

};

QTAWS_END_NAMESPACE

#endif
