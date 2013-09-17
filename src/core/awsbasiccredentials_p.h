#ifndef AWSBASICCREDENTIALS_P_H
#define AWSBASICCREDENTIALS_P_H

#include "qtawsglobal.h"

#include <QString>

QTAWS_BEGIN_NAMESPACE

class AwsBasicCredentials;

class QTAWS_EXPORT AwsBasicCredentialsPrivate {
    Q_DECLARE_PUBLIC(AwsBasicCredentials)

public:
    QString accessKeyId;
    QString secretKey;
    QString token;

    AwsBasicCredentialsPrivate(AwsBasicCredentials * const q);

private:
    AwsBasicCredentials * const q_ptr;

};

QTAWS_END_NAMESPACE

#endif
