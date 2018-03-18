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

#include "sagemakerclient.h"
#include "sagemakerclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace SageMaker {

/**
 * @class  SageMakerClient
 *
 * @brief  Client for Amazon SageMaker Service
 *
 */

/**
 * @brief  Constructs a new SageMakerClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
SageMakerClient::SageMakerClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new SageMakerClientPrivate(this), parent)
{
    Q_D(SageMakerClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new SageMakerClient object.
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
SageMakerClient::SageMakerClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new SageMakerClientPrivate(this), parent)
{
    Q_D(SageMakerClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  SageMakerClientPrivate
 *
 * @brief  Private implementation for SageMakerClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SageMakerClientPrivate object.
 *
 * @param  q  Pointer to this object's public SageMakerClient instance.
 */
SageMakerClientPrivate::SageMakerClientPrivate(SageMakerClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace SageMaker
} // namespace AWS
