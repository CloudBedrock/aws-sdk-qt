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

#include "disassociatedevicefromroomresponse.h"
#include "disassociatedevicefromroomresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/**
 * @class  DisassociateDeviceFromRoomResponse
 *
 * @brief  Handles AlexaForBusiness DisassociateDeviceFromRoom responses.
 *
 * @see    AlexaForBusinessClient::disassociateDeviceFromRoom
 */

/**
 * @brief  Constructs a new DisassociateDeviceFromRoomResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateDeviceFromRoomResponse::DisassociateDeviceFromRoomResponse(
        const DisassociateDeviceFromRoomRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DisassociateDeviceFromRoomResponse(new DisassociateDeviceFromRoomResponsePrivate(this), parent)
{
    setRequest(new DisassociateDeviceFromRoomRequest(request));
    setReply(reply);
}

const DisassociateDeviceFromRoomRequest * DisassociateDeviceFromRoomResponse::request() const
{
    Q_D(const DisassociateDeviceFromRoomResponse);
    return static_cast<const DisassociateDeviceFromRoomRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness DisassociateDeviceFromRoom response.
 *
 * @param  response  Response to parse.
 */
void DisassociateDeviceFromRoomResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisassociateDeviceFromRoomResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisassociateDeviceFromRoomResponsePrivate
 *
 * @brief  Private implementation for DisassociateDeviceFromRoomResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateDeviceFromRoomResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisassociateDeviceFromRoomResponse instance.
 */
DisassociateDeviceFromRoomResponsePrivate::DisassociateDeviceFromRoomResponsePrivate(
    DisassociateDeviceFromRoomResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness DisassociateDeviceFromRoomResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisassociateDeviceFromRoomResponsePrivate::parseDisassociateDeviceFromRoomResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateDeviceFromRoomResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
