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

#include "modifyreplicationgroupresponse.h"
#include "modifyreplicationgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElastiCache {

/**
 * @class  ModifyReplicationGroupResponse
 *
 * @brief  Handles ElastiCache ModifyReplicationGroup responses.
 *
 * @see    ElastiCacheClient::modifyReplicationGroup
 */

/**
 * @brief  Constructs a new ModifyReplicationGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyReplicationGroupResponse::ModifyReplicationGroupResponse(
        const ModifyReplicationGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new ModifyReplicationGroupResponsePrivate(this), parent)
{
    setRequest(new ModifyReplicationGroupRequest(request));
    setReply(reply);
}

const ModifyReplicationGroupRequest * ModifyReplicationGroupResponse::request() const
{
    Q_D(const ModifyReplicationGroupResponse);
    return static_cast<const ModifyReplicationGroupRequest *>(d->request);
}

/**
 * @brief  Parse a ElastiCache ModifyReplicationGroup response.
 *
 * @param  response  Response to parse.
 */
void ModifyReplicationGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyReplicationGroupResponsePrivate
 *
 * @brief  Private implementation for ModifyReplicationGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyReplicationGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyReplicationGroupResponse instance.
 */
ModifyReplicationGroupResponsePrivate::ModifyReplicationGroupResponsePrivate(
    ModifyReplicationGroupQueueResponse * const q) : ModifyReplicationGroupPrivate(q)
{

}

/**
 * @brief  Parse an ElastiCache ModifyReplicationGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyReplicationGroupResponsePrivate::ModifyReplicationGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyReplicationGroupResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace AWS
