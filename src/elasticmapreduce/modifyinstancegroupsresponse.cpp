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

#include "modifyinstancegroupsresponse.h"
#include "modifyinstancegroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EMR {

/**
 * @class  ModifyInstanceGroupsResponse
 *
 * @brief  Handles EMR ModifyInstanceGroups responses.
 *
 * @see    EMRClient::modifyInstanceGroups
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyInstanceGroupsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EMRResponse(new ModifyInstanceGroupsResponsePrivate(this), parent)
{
    setRequest(new ModifyInstanceGroupsRequest(request));
    setReply(reply);
}

const ModifyInstanceGroupsRequest * ModifyInstanceGroupsResponse::request() const
{
    Q_D(const ModifyInstanceGroupsResponse);
    return static_cast<const ModifyInstanceGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a EMR ModifyInstanceGroups response.
 *
 * @param  response  Response to parse.
 */
void ModifyInstanceGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyInstanceGroupsResponsePrivate
 *
 * @brief  Private implementation for ModifyInstanceGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyInstanceGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyInstanceGroupsResponse instance.
 */
ModifyInstanceGroupsResponsePrivate::ModifyInstanceGroupsResponsePrivate(
    ModifyInstanceGroupsQueueResponse * const q) : ModifyInstanceGroupsPrivate(q)
{

}

/**
 * @brief  Parse an EMR ModifyInstanceGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyInstanceGroupsResponsePrivate::ModifyInstanceGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyInstanceGroupsResponse"));
    /// @todo
}
