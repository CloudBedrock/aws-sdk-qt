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

#include "deletecacheparametergroupresponse.h"
#include "deletecacheparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/**
 * @class  DeleteCacheParameterGroupResponse
 *
 * @brief  Handles ElastiCache DeleteCacheParameterGroup responses.
 *
 * @see    ElastiCacheClient::deleteCacheParameterGroup
 */

/**
 * @brief  Constructs a new DeleteCacheParameterGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteCacheParameterGroupResponse::DeleteCacheParameterGroupResponse(
        const DeleteCacheParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DeleteCacheParameterGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteCacheParameterGroupRequest(request));
    setReply(reply);
}

const DeleteCacheParameterGroupRequest * DeleteCacheParameterGroupResponse::request() const
{
    Q_D(const DeleteCacheParameterGroupResponse);
    return static_cast<const DeleteCacheParameterGroupRequest *>(d->request);
}

/**
 * @brief  Parse a ElastiCache DeleteCacheParameterGroup response.
 *
 * @param  response  Response to parse.
 */
void DeleteCacheParameterGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteCacheParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteCacheParameterGroupResponsePrivate
 *
 * @brief  Private implementation for DeleteCacheParameterGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCacheParameterGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteCacheParameterGroupResponse instance.
 */
DeleteCacheParameterGroupResponsePrivate::DeleteCacheParameterGroupResponsePrivate(
    DeleteCacheParameterGroupResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElastiCache DeleteCacheParameterGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteCacheParameterGroupResponsePrivate::parseDeleteCacheParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCacheParameterGroupResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace QtAws
