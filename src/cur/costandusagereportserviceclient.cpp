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

#include "costandusagereportserviceclient.h"
#include "costandusagereportserviceclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace CostandUsageReportService {

/**
 * @class  CostandUsageReportServiceClient
 *
 * @brief  Client for AWS Cost and Usage Report Service
 *
 */

/**
 * @brief  Constructs a new CostandUsageReportServiceClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
CostandUsageReportServiceClient::CostandUsageReportServiceClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CostandUsageReportServiceClientPrivate(this), parent)
{
    Q_D(CostandUsageReportServiceClient);
    d->apiVersion = QStringLiteral("2017-01-06");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("cur");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Cost and Usage Report Service");
    d->serviceName = QStringLiteral("cur");
}

/**
 * @brief  Constructs a new CostandUsageReportServiceClient object.
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
CostandUsageReportServiceClient::CostandUsageReportServiceClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CostandUsageReportServiceClientPrivate(this), parent)
{
    Q_D(CostandUsageReportServiceClient);
    d->apiVersion = QStringLiteral("2017-01-06");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("cur");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Cost and Usage Report Service");
    d->serviceName = QStringLiteral("cur");
}

/**
 *
 * @param  request Request to send to AWS Cost and Usage Report Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteReportDefinitionResponse * CostandUsageReportServiceClient::deleteReportDefinition(const DeleteReportDefinitionRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to AWS Cost and Usage Report Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeReportDefinitionsResponse * CostandUsageReportServiceClient::describeReportDefinitions(const DescribeReportDefinitionsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to AWS Cost and Usage Report Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutReportDefinitionResponse * CostandUsageReportServiceClient::putReportDefinition(const PutReportDefinitionRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * @internal
 *
 * @class  CostandUsageReportServiceClientPrivate
 *
 * @brief  Private implementation for CostandUsageReportServiceClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CostandUsageReportServiceClientPrivate object.
 *
 * @param  q  Pointer to this object's public CostandUsageReportServiceClient instance.
 */
CostandUsageReportServiceClientPrivate::CostandUsageReportServiceClientPrivate(CostandUsageReportServiceClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace CostandUsageReportService
} // namespace AWS
