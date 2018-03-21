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

#include "updatesubnetgroupresponse.h"
#include "updatesubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DAX {

/**
 * @class  UpdateSubnetGroupResponse
 *
 * @brief  Handles DAX UpdateSubnetGroup responses.
 *
 * @see    DAXClient::updateSubnetGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateSubnetGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DAXResponse(new UpdateSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateSubnetGroupRequest(request));
    setReply(reply);
}

const UpdateSubnetGroupRequest * UpdateSubnetGroupResponse::request() const
{
    Q_D(const UpdateSubnetGroupResponse);
    return static_cast<const UpdateSubnetGroupRequest *>(d->request);
}

/**
 * @brief  Parse a DAX UpdateSubnetGroup response.
 *
 * @param  response  Response to parse.
 */
void UpdateSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateSubnetGroupResponsePrivate
 *
 * @brief  Private implementation for UpdateSubnetGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSubnetGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateSubnetGroupResponse instance.
 */
UpdateSubnetGroupResponsePrivate::UpdateSubnetGroupResponsePrivate(
    UpdateSubnetGroupQueueResponse * const q) : UpdateSubnetGroupPrivate(q)
{

}

/**
 * @brief  Parse an DAX UpdateSubnetGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateSubnetGroupResponsePrivate::UpdateSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSubnetGroupResponse"));
    /// @todo
}
