/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "marketplacecommerceanalyticsclient.h"
#include "marketplacecommerceanalyticsclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace QtAws {
namespace MarketplaceCommerceAnalytics {

/**
 * @class  MarketplaceCommerceAnalyticsClient
 *
 * @brief  Client for AWS Marketplace Commerce Analytics
 *
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
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MarketplaceCommerceAnalyticsClientPrivate(this), parent)
{
    Q_D(MarketplaceCommerceAnalyticsClient);
    d->apiVersion = QStringLiteral("2015-07-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("marketplacecommerceanalytics");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Marketplace Commerce Analytics");
    d->serviceName = QStringLiteral("marketplacecommerceanalytics");
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
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MarketplaceCommerceAnalyticsClientPrivate(this), parent)
{
    Q_D(MarketplaceCommerceAnalyticsClient);
    d->apiVersion = QStringLiteral("2015-07-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("marketplacecommerceanalytics");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Marketplace Commerce Analytics");
    d->serviceName = QStringLiteral("marketplacecommerceanalytics");
}

/**
 * Given a data set type and data set publication date, asynchronously publishes the requested data set to the specified S3
 * bucket and notifies the specified SNS topic once the data is available. Returns a unique request identifier that can be
 * used to correlate requests with notifications from the SNS topic. Data sets will be published in comma-separated values
 * (CSV) format with the file name {data_set_type}_YYYY-MM-DD.csv. If a file with the same name already exists (e.g. if the
 * same data set is requested twice), the original file will be overwritten by the new file. Requires a Role with an
 * attached permissions policy providing Allow permissions for the following actions: s3:PutObject, s3:GetBucketLocation,
 *
 * @param  request Request to send to AWS Marketplace Commerce Analytics.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GenerateDataSetResponse * MarketplaceCommerceAnalyticsClient::generateDataSet(const GenerateDataSetRequest &request)
{
    return qobject_cast<GenerateDataSetResponse *>(send(request));
}

/**
 * Given a data set type and a from date, asynchronously publishes the requested customer support data to the specified S3
 * bucket and notifies the specified SNS topic once the data is available. Returns a unique request identifier that can be
 * used to correlate requests with notifications from the SNS topic. Data sets will be published in comma-separated values
 * (CSV) format with the file name {data_set_type}_YYYY-MM-DD'T'HH-mm-ss'Z'.csv. If a file with the same name already
 * exists (e.g. if the same data set is requested twice), the original file will be overwritten by the new file. Requires a
 * Role with an attached permissions policy providing Allow permissions for the following actions: s3:PutObject,
 *
 * @param  request Request to send to AWS Marketplace Commerce Analytics.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartSupportDataExportResponse * MarketplaceCommerceAnalyticsClient::startSupportDataExport(const StartSupportDataExportRequest &request)
{
    return qobject_cast<StartSupportDataExportResponse *>(send(request));
}

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
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace MarketplaceCommerceAnalytics
} // namespace QtAws
