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

#include "getbucketanalyticsconfigurationresponse.h"
#include "getbucketanalyticsconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  GetBucketAnalyticsConfigurationResponse
 *
 * @brief  Handles S3 GetBucketAnalyticsConfiguration responses.
 *
 * @see    S3Client::getBucketAnalyticsConfiguration
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBucketAnalyticsConfigurationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketAnalyticsConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetBucketAnalyticsConfigurationRequest(request));
    setReply(reply);
}

const GetBucketAnalyticsConfigurationRequest * GetBucketAnalyticsConfigurationResponse::request() const
{
    Q_D(const GetBucketAnalyticsConfigurationResponse);
    return static_cast<const GetBucketAnalyticsConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a S3 GetBucketAnalyticsConfiguration response.
 *
 * @param  response  Response to parse.
 */
void GetBucketAnalyticsConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBucketAnalyticsConfigurationResponsePrivate
 *
 * @brief  Private implementation for GetBucketAnalyticsConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketAnalyticsConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBucketAnalyticsConfigurationResponse instance.
 */
GetBucketAnalyticsConfigurationResponsePrivate::GetBucketAnalyticsConfigurationResponsePrivate(
    GetBucketAnalyticsConfigurationQueueResponse * const q) : GetBucketAnalyticsConfigurationPrivate(q)
{

}

/**
 * @brief  Parse an S3 GetBucketAnalyticsConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBucketAnalyticsConfigurationResponsePrivate::GetBucketAnalyticsConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketAnalyticsConfigurationResponse"));
    /// @todo
}
