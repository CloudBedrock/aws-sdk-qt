#ifndef AWSSENDPOINT_H
#define AWSSENDPOINT_H

#include "qtawsglobal.h"

#include <QFlag>
#include <QStringList>
#include <QUrl>

QTAWS_BEGIN_NAMESPACE

class AwsEndpointPrivate;

class QTAWS_EXPORT AwsEndpoint {
    Q_DECLARE_PRIVATE(AwsEndpoint)

public:
    enum Transport {
        HTTP  = 0x01,
        HTTPS = 0x02,
        SMTP  = 0x04,
        AnyTransport = HTTP|HTTPS|SMTP
    };
    Q_DECLARE_FLAGS(Transports, Transport)

    AwsEndpoint(const QByteArray &hostName);
    AwsEndpoint(const QString &hostName);

    AwsEndpoint(const QString &regionName, const QString &serviceName);

    static QUrl getEndpoint(const QString &regionName, const QString &serviceName,
                            const Transports transport = AnyTransport);

    bool isSupported(const QString &serviceName, const Transports transport = AnyTransport) const;

    bool isValid() const;

    QString hostName() const;

    QString regionName() const;

    QString serviceName() const;

    static QStringList supportedRegions(const QString &serviceName,
                                        const Transports transport = AnyTransport);

    static QStringList supportedServices(const QString &regionName,
                                         const Transports transport = AnyTransport);

    QStringList supportedServices(const Transports transport = AnyTransport) const;

private:
    AwsEndpointPrivate * const d_ptr;
    friend class TestAwsEndpoint;
};

Q_DECLARE_OPERATORS_FOR_FLAGS(AwsEndpoint::Transports)

QTAWS_END_NAMESPACE

#endif
