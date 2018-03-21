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

#include "deletereplicationgroupresponse.h"
#include "deletereplicationgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElastiCache {

/**
 * @class  DeleteReplicationGroupResponse
 *
 * @brief  Handles ElastiCache DeleteReplicationGroup responses.
 *
 * @see    ElastiCacheClient::deleteReplicationGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteReplicationGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DeleteReplicationGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteReplicationGroupRequest(request));
    setReply(reply);
}

const DeleteReplicationGroupRequest * DeleteReplicationGroupResponse::request() const
{
    Q_D(const DeleteReplicationGroupResponse);
    return static_cast<const DeleteReplicationGroupRequest *>(d->request);
}

/**
 * @brief  Parse a ElastiCache DeleteReplicationGroup response.
 *
 * @param  response  Response to parse.
 */
void DeleteReplicationGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteReplicationGroupResponsePrivate
 *
 * @brief  Private implementation for DeleteReplicationGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteReplicationGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteReplicationGroupResponse instance.
 */
DeleteReplicationGroupResponsePrivate::DeleteReplicationGroupResponsePrivate(
    DeleteReplicationGroupQueueResponse * const q) : DeleteReplicationGroupPrivate(q)
{

}

/**
 * @brief  Parse an ElastiCache DeleteReplicationGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteReplicationGroupResponsePrivate::DeleteReplicationGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReplicationGroupResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace AWS
