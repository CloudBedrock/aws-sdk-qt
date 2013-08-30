#ifndef AWSSENDPOINT_H
#define AWSSENDPOINT_H

#include "qtawsglobal.h"
#include "awsregion.h"

#include <QFlag>
#include <QStringList>
#include <QUrl>

QTAWS_BEGIN_NAMESPACE

class AwsEndpointPrivate;

class QTAWS_EXPORT AwsEndpoint {
    Q_DECLARE_PRIVATE(AwsEndpoint)

public:
    enum Transport {
        AnyTransport = 0x00,
        HTTP  = 0x01,
        HTTPS = 0x02,
        SMTP  = 0x04,
        AllTransports = HTTP|HTTPS|SMTP
    };
    Q_DECLARE_FLAGS(Transports, Transport)

    AwsEndpoint(const QByteArray &hostName);
    AwsEndpoint(const QString &hostName);

    AwsEndpoint(const AwsRegion::Region region, const QString &serviceName);
    AwsEndpoint(const QString &regionName, const QString &serviceName);

    bool isValid() const;
    bool isSupported(const QString &serviceName, Transports transport = AnyTransport) const;

    QString hostName() const;
    AwsRegion::Region region() const;
    QString serviceName() const;
    QStringList supportedServices(Transports transport = AnyTransport) const;

    static QStringList supportedServices(const AwsRegion::Region region,
                                         Transports transport = AnyTransport);

    static AwsRegion::Regions supportedRegions(const QString &serviceName,
                                                Transports transport = AnyTransport);

    static QUrl getEndpoint(const QString &serviceName, const AwsRegion::Region region,
                            Transports transport = AnyTransport);

private:
    AwsEndpointPrivate * const d_ptr;
    friend class TestAwsEndpoint;
};

Q_DECLARE_OPERATORS_FOR_FLAGS(AwsEndpoint::Transports)

QTAWS_END_NAMESPACE

#endif
