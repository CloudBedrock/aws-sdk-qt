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

#include "marketplacecommerceanalyticsclient.h"
#include "marketplacecommerceanalyticsclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  MarketplaceCommerceAnalyticsClient
 *
 * Provides AWS Marketplace business intelligence data on-demand.
 */

/**
 * @brief  Constructs a new MarketplaceCommerceAnalyticsClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
MarketplaceCommerceAnalyticsClient::MarketplaceCommerceAnalyticsClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new MarketplaceCommerceAnalyticsClientPrivate(this), parent)
{
    Q_D(MarketplaceCommerceAnalyticsClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new MarketplaceCommerceAnalyticsClient object.
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
MarketplaceCommerceAnalyticsClient::MarketplaceCommerceAnalyticsClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new MarketplaceCommerceAnalyticsClientPrivate(this), parent)
{
    Q_D(MarketplaceCommerceAnalyticsClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  MarketplaceCommerceAnalyticsClientPrivate
 *
 * @brief  Private implementation for MarketplaceCommerceAnalyticsClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MarketplaceCommerceAnalyticsClientPrivate object.
 *
 * @param  q  Pointer to this object's public MarketplaceCommerceAnalyticsClient instance.
 */
MarketplaceCommerceAnalyticsClientPrivate::MarketplaceCommerceAnalyticsClientPrivate(MarketplaceCommerceAnalyticsClient * const q)
    : AwsAbstractClientPrivate(q)
{
    /// @todo Get signature version from API description.
    signature = new AwsSignatureV4();
}

QTAWS_END_NAMESPACE
