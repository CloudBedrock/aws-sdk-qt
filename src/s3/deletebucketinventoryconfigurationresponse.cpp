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

#include "deletebucketinventoryconfigurationresponse.h"
#include "deletebucketinventoryconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  DeleteBucketInventoryConfigurationResponse
 *
 * @brief  Handles S3 DeleteBucketInventoryConfiguration responses.
 *
 * @see    S3Client::deleteBucketInventoryConfiguration
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBucketInventoryConfigurationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteBucketInventoryConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketInventoryConfigurationRequest(request));
    setReply(reply);
}

const DeleteBucketInventoryConfigurationRequest * DeleteBucketInventoryConfigurationResponse::request() const
{
    Q_D(const DeleteBucketInventoryConfigurationResponse);
    return static_cast<const DeleteBucketInventoryConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a S3 DeleteBucketInventoryConfiguration response.
 *
 * @param  response  Response to parse.
 */
void DeleteBucketInventoryConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteBucketInventoryConfigurationResponsePrivate
 *
 * @brief  Private implementation for DeleteBucketInventoryConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBucketInventoryConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteBucketInventoryConfigurationResponse instance.
 */
DeleteBucketInventoryConfigurationResponsePrivate::DeleteBucketInventoryConfigurationResponsePrivate(
    DeleteBucketInventoryConfigurationQueueResponse * const q) : DeleteBucketInventoryConfigurationPrivate(q)
{

}

/**
 * @brief  Parse an S3 DeleteBucketInventoryConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteBucketInventoryConfigurationResponsePrivate::DeleteBucketInventoryConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketInventoryConfigurationResponse"));
    /// @todo
}
