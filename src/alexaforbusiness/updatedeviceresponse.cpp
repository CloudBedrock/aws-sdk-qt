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

#include "updatedeviceresponse.h"
#include "updatedeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  UpdateDeviceResponse
 *
 * @brief  Handles AlexaForBusiness UpdateDevice responses.
 *
 * @see    AlexaForBusinessClient::updateDevice
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDeviceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new UpdateDeviceResponsePrivate(this), parent)
{
    setRequest(new UpdateDeviceRequest(request));
    setReply(reply);
}

const UpdateDeviceRequest * UpdateDeviceResponse::request() const
{
    Q_D(const UpdateDeviceResponse);
    return static_cast<const UpdateDeviceRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness UpdateDevice response.
 *
 * @param  response  Response to parse.
 */
void UpdateDeviceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateDeviceResponsePrivate
 *
 * @brief  Private implementation for UpdateDeviceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDeviceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateDeviceResponse instance.
 */
UpdateDeviceResponsePrivate::UpdateDeviceResponsePrivate(
    UpdateDeviceQueueResponse * const q) : UpdateDevicePrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness UpdateDeviceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateDeviceResponsePrivate::UpdateDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDeviceResponse"));
    /// @todo
}
