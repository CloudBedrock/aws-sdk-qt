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

#include "modifydbsubnetgroupresponse.h"
#include "modifydbsubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  ModifyDBSubnetGroupResponse
 *
 * @brief  Handles RDS ModifyDBSubnetGroup responses.
 *
 * @see    RDSClient::modifyDBSubnetGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyDBSubnetGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new ModifyDBSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new ModifyDBSubnetGroupRequest(request));
    setReply(reply);
}

const ModifyDBSubnetGroupRequest * ModifyDBSubnetGroupResponse::request() const
{
    Q_D(const ModifyDBSubnetGroupResponse);
    return static_cast<const ModifyDBSubnetGroupRequest *>(d->request);
}

/**
 * @brief  Parse a RDS ModifyDBSubnetGroup response.
 *
 * @param  response  Response to parse.
 */
void ModifyDBSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyDBSubnetGroupResponsePrivate
 *
 * @brief  Private implementation for ModifyDBSubnetGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyDBSubnetGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyDBSubnetGroupResponse instance.
 */
ModifyDBSubnetGroupResponsePrivate::ModifyDBSubnetGroupResponsePrivate(
    ModifyDBSubnetGroupQueueResponse * const q) : ModifyDBSubnetGroupPrivate(q)
{

}

/**
 * @brief  Parse an RDS ModifyDBSubnetGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyDBSubnetGroupResponsePrivate::ModifyDBSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyDBSubnetGroupResponse"));
    /// @todo
}
