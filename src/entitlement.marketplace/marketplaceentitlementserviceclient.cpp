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

#include "marketplaceentitlementserviceclient.h"
#include "marketplaceentitlementserviceclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace MarketplaceEntitlementService {

/**
 * @class  MarketplaceEntitlementServiceClient
 *
 * @brief  Client for AWS Marketplace Entitlement Service
 *
 * <fullname>AWS Marketplace Entitlement Service</fullname>
 *
 * This reference provides descriptions of the AWS Marketplace Entitlement Service
 *
 * API>
 *
 * AWS Marketplace Entitlement Service is used to determine the entitlement of a customer to a given product. An
 * entitlement represents capacity in a product owned by the customer. For example, a customer might own some number of
 * users or seats in an SaaS application or some amount of data capacity in a multi-tenant
 *
 * database>
 *
 * <b>Getting Entitlement Records</b>
 *
 * </p <ul> <li>
 *
 * <i>GetEntitlements</i>- Gets the entitlements for a Marketplace
 */

/**
 * @brief  Constructs a new MarketplaceEntitlementServiceClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
MarketplaceEntitlementServiceClient::MarketplaceEntitlementServiceClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new MarketplaceEntitlementServiceClientPrivate(this), parent)
{
    Q_D(MarketplaceEntitlementServiceClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new MarketplaceEntitlementServiceClient object.
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
MarketplaceEntitlementServiceClient::MarketplaceEntitlementServiceClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new MarketplaceEntitlementServiceClientPrivate(this), parent)
{
    Q_D(MarketplaceEntitlementServiceClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * GetEntitlements retrieves entitlement values for a given product. The results can be filtered based on customer
 * identifier or product
 */
GetEntitlementsResponse * MarketplaceEntitlementServiceClient::getEntitlements(const GetEntitlementsRequest &request)
{

}

/**
 * @internal
 *
 * @class  MarketplaceEntitlementServiceClientPrivate
 *
 * @brief  Private implementation for MarketplaceEntitlementServiceClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MarketplaceEntitlementServiceClientPrivate object.
 *
 * @param  q  Pointer to this object's public MarketplaceEntitlementServiceClient instance.
 */
MarketplaceEntitlementServiceClientPrivate::MarketplaceEntitlementServiceClientPrivate(MarketplaceEntitlementServiceClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace MarketplaceEntitlementService
} // namespace AWS
