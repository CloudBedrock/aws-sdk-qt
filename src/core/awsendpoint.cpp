#include "awsendpoint.h"
#include "awsendpoint_p.h"

#include <QDebug>
#include <QFile>
#include <QMutexLocker>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  AwsEndpoint
 *
 * @brief  @todo
 */

/**
 * @brief  Constructs a new AwsSignatureV4 object.
 *
 * @todo
 */
AwsEndpoint::AwsEndpoint(const QByteArray &hostName)
    : d_ptr(new AwsEndpointPrivate(this))
{
    Q_D(AwsEndpoint);
    d->hostName = QString::fromUtf8(hostName);
    QMutexLocker locker(&AwsEndpointPrivate::mutex);
    if (AwsEndpointPrivate::hosts.contains(d->hostName)) {
        if (!AwsEndpointPrivate::hosts[d->hostName].regionNames.empty()) {
            d->regionName = AwsEndpointPrivate::hosts[d->hostName].regionNames.first();
        }
        d->serviceName = AwsEndpointPrivate::hosts[d->hostName].serviceName;
    }
}

AwsEndpoint::AwsEndpoint(const QString &hostName)
    : d_ptr(new AwsEndpointPrivate(this))
{
    Q_D(AwsEndpoint);
    d->hostName = hostName;
    QMutexLocker locker(&AwsEndpointPrivate::mutex);
    if (AwsEndpointPrivate::hosts.contains(d->hostName)) {
        if (!AwsEndpointPrivate::hosts[d->hostName].regionNames.empty()) {
            d->regionName = AwsEndpointPrivate::hosts[d->hostName].regionNames.first();
        }
        d->serviceName = AwsEndpointPrivate::hosts[d->hostName].serviceName;
    }
}

AwsEndpoint::~AwsEndpoint()
{
    delete d_ptr;
}

QUrl AwsEndpoint::getEndpoint(const QString &regionName, const QString &serviceName,
                              const Transports transport)
{
    AwsEndpointPrivate::loadEndpointData();
    QMutexLocker locker(&AwsEndpointPrivate::mutex);
    if ((!AwsEndpointPrivate::regions.contains(regionName)) ||
        (!AwsEndpointPrivate::regions[regionName].services.contains(serviceName))) {
        return QUrl();
    }
    const AwsEndpointPrivate::RegionEndpointInfo &endpointInfo =
        AwsEndpointPrivate::regions[regionName].services[serviceName];
    if (!(endpointInfo.transports & transport)) {
        return QUrl();
    }

    QUrl url;
    url.setHost(endpointInfo.hostName);
    if ((endpointInfo.transports & HTTPS) && (transport & HTTPS))
        url.setScheme(QLatin1String("https"));
    else if ((endpointInfo.transports & HTTP) && (transport & HTTP))
        url.setScheme(QLatin1String("http"));
    /// @todo  Handle SMTP here?
    return url;
}

QString AwsEndpoint::hostName() const
{
    Q_D(const AwsEndpoint);
    return d->hostName;
}

bool AwsEndpoint::isSupported(const QString &regionName, const QString &serviceName, const Transports transport)
{
    QMutexLocker locker(&AwsEndpointPrivate::mutex);
    return ((AwsEndpointPrivate::regions.contains(regionName)) &&
            (AwsEndpointPrivate::regions[regionName].services.contains(serviceName)) &&
            (AwsEndpointPrivate::regions[regionName].services[serviceName].transports & transport));
}

bool AwsEndpoint::isSupported(const Transport transport) const
{
    return isSupported(regionName(), serviceName(), AwsEndpoint::Transports(transport));
}

bool AwsEndpoint::isValid() const
{
    return ((!hostName().isEmpty()) && (!regionName().isEmpty()) && (!serviceName().isEmpty()));
}

QString AwsEndpoint::regionName() const
{
    Q_D(const AwsEndpoint);
    return d->regionName;
}

QString AwsEndpoint::serviceName() const
{
    Q_D(const AwsEndpoint);
    return d->serviceName;
}

QStringList AwsEndpoint::supportedRegions(const Transports transport) const
{
    return supportedRegions(serviceName(), transport);
}

QStringList AwsEndpoint::supportedRegions(const QString &serviceName, const Transports transport)
{
    AwsEndpointPrivate::loadEndpointData();
    QMutexLocker locker(&AwsEndpointPrivate::mutex);

    if (transport == AnyTransport) {
        return AwsEndpointPrivate::services[serviceName].regionNames;
    }

    QStringList regions;
    foreach (const QString &regionName, AwsEndpointPrivate::services[serviceName].regionNames) {
        if (AwsEndpointPrivate::regions[regionName].services[serviceName].transports & transport)
            regions.append(regionName);
    }
    return regions;
}

QStringList AwsEndpoint::supportedServices(const QString &regionName, const Transports transport)
{
    AwsEndpointPrivate::loadEndpointData();
    QMutexLocker locker(&AwsEndpointPrivate::mutex);

    if (transport == AnyTransport) {
        return AwsEndpointPrivate::regions[regionName].services.keys();
    }

    QStringList serviceNames;
    const AwsEndpointPrivate::RegionServices &services = AwsEndpointPrivate::regions[regionName].services;
    for (AwsEndpointPrivate::RegionServices::const_iterator iter = services.constBegin(); iter != services.constEnd(); ++iter) {
        if (iter.value().transports & transport)
            serviceNames.append(iter.key());
    }
    return serviceNames;
}

/**
 * @class  AwsEndpointPrivate
 *
 * @brief  Private implementation for AwsEndpoint.
 */

QHash<QString, AwsEndpointPrivate::HostInfo> AwsEndpointPrivate::hosts;
QHash<QString, AwsEndpointPrivate::RegionInfo> AwsEndpointPrivate::regions;
QHash<QString, AwsEndpointPrivate::ServiceInfo> AwsEndpointPrivate::services;

QMutex AwsEndpointPrivate::mutex(QMutex::Recursive);

AwsEndpointPrivate::AwsEndpointPrivate(AwsEndpoint * const q)
    : q_ptr(q)
{
    loadEndpointData();
}

void AwsEndpointPrivate::loadEndpointData(const QString &fileName)
{
    QMutexLocker locker(&mutex);
    if (!hosts.empty()) {
        return; // Already loaded.
    }

    // Open the data file.
    QFile file(fileName);
    loadEndpointData(file);
}

void AwsEndpointPrivate::loadEndpointData(QIODevice &device)
{
    QMutexLocker locker(&mutex);
    if (!hosts.empty()) {
        return; // Already loaded.
    }

    // Open the device, if not already open.
    if ((!device.isOpen()) && (!device.open(QIODevice::ReadOnly))) {
        qWarning() << device.errorString();
        return;
    }

    // Parse the data.
    QXmlStreamReader xml(&device);
    loadEndpointData(xml);
}

void AwsEndpointPrivate::loadEndpointData(QXmlStreamReader &xml)
{
    QMutexLocker locker(&mutex);
    if (!hosts.empty()) {
        return; // Already loaded.
    }

    // Parse the XML data.
    while (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("Regions")) {
            parseRegions(xml);
        } else if (xml.name() == QLatin1String("Services")) {
            parseServices(xml);
        } else if (xml.name() != QLatin1String("XML")) {
            qDebug() << "ignoring " << xml.name();
        }
    }
    if (xml.hasError()) {
        qWarning() << xml.errorString();
    }
    Q_ASSERT(!xml.hasError());
    Q_ASSERT(!hosts.isEmpty());
    Q_ASSERT(!regions.hasError());
    Q_ASSERT(!services.hasError());
}

void AwsEndpointPrivate::parseRegion(QXmlStreamReader &xml)
{
    QString regionName;
    while ((!xml.atEnd()) && (xml.readNextStartElement())) {
        if (xml.name() == QLatin1String("Name")) {
            regionName = xml.readElementText();
        } else if (xml.name() == QLatin1String("Endpoint")) {
            Q_ASSERT(!regionName.isEmpty());
            RegionEndpointInfo endpoint;
            QString serviceName;
            while ((!xml.atEnd()) && (xml.readNextStartElement())) {
                if (xml.name() == QLatin1String("ServiceName")) {
                    serviceName = xml.readElementText();
                } else if (xml.name() == QLatin1String("Http")) {
                    if (xml.readElementText() == QLatin1String("true")) {
                        endpoint.transports |= AwsEndpoint::HTTP;
                    }
                } else if (xml.name() == QLatin1String("Https")) {
                    if (xml.readElementText() == QLatin1String("true")) {
                        endpoint.transports |= AwsEndpoint::HTTPS;
                    }
                } else if (xml.name() == QLatin1String("Hostname")) {
                    endpoint.hostName = xml.readElementText();
                } else {
                    qDebug() << Q_FUNC_INFO << "ignoring " << xml.name();
                    xml.skipCurrentElement();
                }
            }
            Q_ASSERT(!serviceName.isEmpty());

            if (serviceName == QLatin1String("email")) {
                endpoint.transports |= AwsEndpoint::SMTP;
            }

            Q_ASSERT((!hosts.contains(endpoint.hostName)) || (hosts.value(endpoint.hostName).serviceName == serviceName));
            hosts[endpoint.hostName].regionNames.append(regionName);
            hosts[endpoint.hostName].serviceName  = serviceName;
            regions[regionName].services[serviceName] = endpoint;
            //qDebug() << regionName << serviceName << (int)endpoint.transports << endpoint.hostName;
        } else {
            qDebug() << Q_FUNC_INFO << "ignoring " << xml.name();
            xml.skipCurrentElement();
        }
    }
}

void AwsEndpointPrivate::parseRegions(QXmlStreamReader &xml)
{
    while ((!xml.atEnd()) && (xml.readNextStartElement())) {
        if (xml.name() == QLatin1String("Region")) {
            parseRegion(xml);
        } else {
            qDebug() << Q_FUNC_INFO << "ignoring " << xml.name();
            xml.skipCurrentElement();
        }
    }
}

void AwsEndpointPrivate::parseService(QXmlStreamReader &xml)
{
    QString serviceName;
    while ((!xml.atEnd()) && (xml.readNextStartElement())) {
        if (xml.name() == QLatin1String("Name")) {
            serviceName = xml.readElementText();
        } else if (xml.name() == QLatin1String("FullName")) {
            Q_ASSERT(!serviceName.isEmpty());
            services[serviceName].fullName = xml.readElementText();
        } else if (xml.name() == QLatin1String("RegionName")) {
            Q_ASSERT(!serviceName.isEmpty());
            const QString &regionName = xml.readElementText();
            services[serviceName].regionNames.append(regionName);
            //qDebug() << serviceName << services[serviceName].fullName << regionName;
        } else {
            qDebug() << Q_FUNC_INFO << "ignoring " << xml.name();
            xml.skipCurrentElement();
        }
    }
}

void AwsEndpointPrivate::parseServices(QXmlStreamReader &xml)
{
    while ((!xml.atEnd()) && (xml.readNextStartElement())) {
        if (xml.name() == QLatin1String("Service")) {
            parseService(xml);
        } else {
            qDebug() << Q_FUNC_INFO << "ignoring " << xml.name();
            xml.skipCurrentElement();
        }
    }
}

QTAWS_END_NAMESPACE
