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

#include "updatethinggroupresponse.h"
#include "updatethinggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  UpdateThingGroupResponse
 *
 * @brief  Handles IoT UpdateThingGroup responses.
 *
 * @see    IoTClient::updateThingGroup
 */

/**
 * @brief  Constructs a new UpdateThingGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateThingGroupResponse::UpdateThingGroupResponse(
        const UpdateThingGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new UpdateThingGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateThingGroupRequest(request));
    setReply(reply);
}

const UpdateThingGroupRequest * UpdateThingGroupResponse::request() const
{
    Q_D(const UpdateThingGroupResponse);
    return static_cast<const UpdateThingGroupRequest *>(d->request);
}

/**
 * @brief  Parse a IoT UpdateThingGroup response.
 *
 * @param  response  Response to parse.
 */
void UpdateThingGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateThingGroupResponsePrivate
 *
 * @brief  Private implementation for UpdateThingGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateThingGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateThingGroupResponse instance.
 */
UpdateThingGroupResponsePrivate::UpdateThingGroupResponsePrivate(
    UpdateThingGroupQueueResponse * const q) : UpdateThingGroupPrivate(q)
{

}

/**
 * @brief  Parse an IoT UpdateThingGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateThingGroupResponsePrivate::UpdateThingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateThingGroupResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS
