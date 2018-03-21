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

#include "updategroupresponse.h"
#include "updategroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ResourceGroups {

/**
 * @class  UpdateGroupResponse
 *
 * @brief  Handles ResourceGroups UpdateGroup responses.
 *
 * @see    ResourceGroupsClient::updateGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsResponse(new UpdateGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateGroupRequest(request));
    setReply(reply);
}

const UpdateGroupRequest * UpdateGroupResponse::request() const
{
    Q_D(const UpdateGroupResponse);
    return static_cast<const UpdateGroupRequest *>(d->request);
}

/**
 * @brief  Parse a ResourceGroups UpdateGroup response.
 *
 * @param  response  Response to parse.
 */
void UpdateGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateGroupResponsePrivate
 *
 * @brief  Private implementation for UpdateGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateGroupResponse instance.
 */
UpdateGroupResponsePrivate::UpdateGroupResponsePrivate(
    UpdateGroupQueueResponse * const q) : UpdateGroupPrivate(q)
{

}

/**
 * @brief  Parse an ResourceGroups UpdateGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateGroupResponsePrivate::UpdateGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGroupResponse"));
    /// @todo
}
