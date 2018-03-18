/*
    Copyright 2013-2018 Paul Colby

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

#include "snowballclient.h"
#include "snowballclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace Snowball {

/**
 * @class  SnowballClient
 *
 * @brief  Client for Amazon Import/Export Snowball
 *
 * AWS Snowball is a petabyte-scale data transport solution that uses secure appliances to transfer large amounts of data
 * between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The Snowball commands described
 * here provide access to the same functionality that is available in the AWS Snowball Management Console, which enables
 * you to create and manage jobs for Snowball. To transfer data locally with a Snowball appliance, you'll need to use the
 * Snowball client or the Amazon S3 API adapter for Snowball. For more information, see the <a
 * href="http://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
 */

/**
 * @brief  Constructs a new SnowballClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
SnowballClient::SnowballClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new SnowballClientPrivate(this), parent)
{
    Q_D(SnowballClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new SnowballClient object.
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
SnowballClient::SnowballClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new SnowballClientPrivate(this), parent)
{
    Q_D(SnowballClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  SnowballClientPrivate
 *
 * @brief  Private implementation for SnowballClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SnowballClientPrivate object.
 *
 * @param  q  Pointer to this object's public SnowballClient instance.
 */
SnowballClientPrivate::SnowballClientPrivate(SnowballClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace Snowball
} // namespace AWS
