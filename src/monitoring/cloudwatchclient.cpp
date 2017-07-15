/*
    Copyright 2013-2016 Paul Colby

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

#include "cloudwatchclient.h"
#include "cloudwatchclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace CloudWatch {

/**
 * @class  CloudWatchClient
 *
 * @brief  Client for Amazon CloudWatch
 *
 * Amazon CloudWatch monitors your Amazon Web Services (AWS) resources and the applications you run on AWS in real-time. You can use CloudWatch to collect and track metrics, which are the variables you want to measure for your resources and applications.
 *
 + CloudWatch alarms send notifications or automatically make changes to the resources you are monitoring based on rules that you define. For example, you can monitor the CPU usage and disk reads and writes of your Amazon Elastic Compute Cloud (Amazon EC2) instances and then use this data to determine whether you should launch additional instances to handle increased load. You can also use this data to stop under-used instances to save money.
 *
 + In addition to monitoring the built-in metrics that come with AWS, you can monitor your own custom metrics. With CloudWatch, you gain system-wide visibility into resource utilization, application performance, and operational health.
 */

/**
 * @brief  Constructs a new CloudWatchClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
CloudWatchClient::CloudWatchClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CloudWatchClientPrivate(this), parent)
{
    Q_D(CloudWatchClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new CloudWatchClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
CloudWatchClient::CloudWatchClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CloudWatchClientPrivate(this), parent)
{
    Q_D(CloudWatchClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  CloudWatchClientPrivate
 *
 * @brief  Private implementation for CloudWatchClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloudWatchClientPrivate object.
 *
 * @param  q  Pointer to this object's public CloudWatchClient instance.
 */
CloudWatchClientPrivate::CloudWatchClientPrivate(CloudWatchClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace CloudWatch
} // namespace AWS
