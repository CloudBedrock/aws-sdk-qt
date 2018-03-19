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

#include "costexplorerclient.h"
#include "costexplorerclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace CostExplorer {

/**
 * @class  CostExplorerClient
 *
 * @brief  Client for AWS Cost Explorer Service
 *
 * The Cost Explorer API allows you to programmatically query your cost and usage data. You can query for aggregated data
 * such as total monthly costs or total daily usage. You can also query for granular data, such as the number of daily
 * write operations for DynamoDB database tables in your production environment.
 *
 * </p
 *
 * Service
 *
 * Endpoin>
 *
 * The Cost Explorer API provides the following
 *
 * endpoint> <ul> <li>
 */

/**
 * @brief  Constructs a new CostExplorerClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
CostExplorerClient::CostExplorerClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CostExplorerClientPrivate(this), parent)
{
    Q_D(CostExplorerClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QStringLiteral("ce");
}

/**
 * @brief  Constructs a new CostExplorerClient object.
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
CostExplorerClient::CostExplorerClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CostExplorerClientPrivate(this), parent)
{
    Q_D(CostExplorerClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QStringLiteral("ce");
}

/// @todo override getEndpoint() to use ce.

/**
 * Retrieve cost and usage metrics for your account. You can specify which cost and usage-related metric, such as
 * <code>BlendedCosts</code> or <code>UsageQuantity</code>, that you want the request to return. You can also filter and
 * group your data by various dimensions, such as <code>SERVICE</code> or <code>AZ</code>, in a specific time range. See
 * the <code>GetDimensionValues</code> action for a complete list of the valid dimensions. Master accounts in an
 * organization have access to all member
 *
 * @param  request Request to send to AWS Cost Explorer Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCostAndUsageResponse * CostExplorerClient::getCostAndUsage(const GetCostAndUsageRequest &request)
{

}

/**
 * You can use <code>GetDimensionValues</code> to retrieve all available filter values for a specific filter over a period
 * of time. You can search the dimension values for an arbitrary string.
 *
 * @param  request Request to send to AWS Cost Explorer Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDimensionValuesResponse * CostExplorerClient::getDimensionValues(const GetDimensionValuesRequest &request)
{

}

/**
 * Retrieve the reservation coverage for your account. An organization's master account has access to the associated member
 * accounts. For any time period, you can filter data about reservation usage by the following dimensions.
 *
 * </p <ul> <li>
 *
 * A> </li> <li>
 *
 * INSTANCE_TYP> </li> <li>
 *
 * LINKED_ACCOUN> </li> <li>
 *
 * PLATFOR> </li> <li>
 *
 * REGIO> </li> <li>
 *
 * TENANC> </li> </ul>
 *
 * To determine valid values for a dimension, use the <code>GetDimensionValues</code> operation.
 *
 * @param  request Request to send to AWS Cost Explorer Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetReservationCoverageResponse * CostExplorerClient::getReservationCoverage(const GetReservationCoverageRequest &request)
{

}

/**
 * You can retrieve the Reservation utilization for your account. Master accounts in an organization have access to their
 * associated member accounts. You can filter data by dimensions in a time period. You can use
 * <code>GetDimensionValues</code> to determine the possible dimension values. Currently, you can group only by
 * <code>SUBSCRIPTION_ID</code>.
 *
 * @param  request Request to send to AWS Cost Explorer Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetReservationUtilizationResponse * CostExplorerClient::getReservationUtilization(const GetReservationUtilizationRequest &request)
{

}

/**
 * You can query for available tag keys and tag values for a specified period. You can search the tag values for an
 * arbitrary string.
 *
 * @param  request Request to send to AWS Cost Explorer Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetTagsResponse * CostExplorerClient::getTags(const GetTagsRequest &request)
{

}

/**
 * @internal
 *
 * @class  CostExplorerClientPrivate
 *
 * @brief  Private implementation for CostExplorerClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CostExplorerClientPrivate object.
 *
 * @param  q  Pointer to this object's public CostExplorerClient instance.
 */
CostExplorerClientPrivate::CostExplorerClientPrivate(CostExplorerClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace CostExplorer
} // namespace AWS
