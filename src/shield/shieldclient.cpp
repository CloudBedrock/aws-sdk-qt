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

#include "shieldclient.h"
#include "shieldclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace Shield {

/**
 * @class  ShieldClient
 *
 * @brief  Client for AWS Shield
 *
 * <fullname>AWS Shield Advanced</fullname>
 *
 * This is the <i>AWS Shield Advanced API Reference</i>. This guide is for developers who need detailed information about
 * the AWS Shield Advanced API actions, data types, and errors. For detailed information about AWS WAF and AWS Shield
 * Advanced features and an overview of how to use the AWS WAF and AWS Shield Advanced APIs, see the <a
 * href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and AWS Shield Developer
 */

/**
 * @brief  Constructs a new ShieldClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
ShieldClient::ShieldClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ShieldClientPrivate(this), parent)
{
    Q_D(ShieldClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new ShieldClient object.
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
ShieldClient::ShieldClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ShieldClientPrivate(this), parent)
{
    Q_D(ShieldClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * Enables AWS Shield Advanced for a specific AWS resource. The resource can be an Amazon CloudFront distribution, Elastic
 * Load Balancing load balancer, Elastic IP Address, or an Amazon Route 53 hosted
 */
CreateProtectionResponse * ShieldClient::createProtection(const CreateProtectionRequest &request)
{

}

/**
 * Activates AWS Shield Advanced for an
 */
CreateSubscriptionResponse * ShieldClient::createSubscription(const CreateSubscriptionRequest &request)
{

}

/**
 * Deletes an AWS Shield Advanced
 */
DeleteProtectionResponse * ShieldClient::deleteProtection(const DeleteProtectionRequest &request)
{

}

/**
 * Removes AWS Shield Advanced from an account. AWS Shield Advanced requires a 1-year subscription commitment. You cannot
 * delete a subscription prior to the completion of that commitment.
 */
DeleteSubscriptionResponse * ShieldClient::deleteSubscription(const DeleteSubscriptionRequest &request)
{

}

/**
 * Describes the details of a DDoS attack.
 */
DescribeAttackResponse * ShieldClient::describeAttack(const DescribeAttackRequest &request)
{

}

/**
 * Lists the details of a <a>Protection</a>
 */
DescribeProtectionResponse * ShieldClient::describeProtection(const DescribeProtectionRequest &request)
{

}

/**
 * Provides details about the AWS Shield Advanced subscription for an
 */
DescribeSubscriptionResponse * ShieldClient::describeSubscription(const DescribeSubscriptionRequest &request)
{

}

/**
 * Returns the <code>SubscriptionState</code>, either <code>Active</code> or
 */
GetSubscriptionStateResponse * ShieldClient::getSubscriptionState(const GetSubscriptionStateRequest &request)
{

}

/**
 * Returns all ongoing DDoS attacks or all DDoS attacks during a specified time
 */
ListAttacksResponse * ShieldClient::listAttacks(const ListAttacksRequest &request)
{

}

/**
 * Lists all <a>Protection</a> objects for the
 */
ListProtectionsResponse * ShieldClient::listProtections(const ListProtectionsRequest &request)
{

}

/**
 * @internal
 *
 * @class  ShieldClientPrivate
 *
 * @brief  Private implementation for ShieldClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ShieldClientPrivate object.
 *
 * @param  q  Pointer to this object's public ShieldClient instance.
 */
ShieldClientPrivate::ShieldClientPrivate(ShieldClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace Shield
} // namespace AWS
