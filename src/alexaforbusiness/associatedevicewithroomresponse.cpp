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

#include "associatedevicewithroomresponse.h"
#include "associatedevicewithroomresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/**
 * @class  AssociateDeviceWithRoomResponse
 *
 * @brief  Handles AlexaForBusiness AssociateDeviceWithRoom responses.
 *
 * @see    AlexaForBusinessClient::associateDeviceWithRoom
 */

/**
 * @brief  Constructs a new AssociateDeviceWithRoomResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateDeviceWithRoomResponse::AssociateDeviceWithRoomResponse(
        const AssociateDeviceWithRoomRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new AssociateDeviceWithRoomResponsePrivate(this), parent)
{
    setRequest(new AssociateDeviceWithRoomRequest(request));
    setReply(reply);
}

const AssociateDeviceWithRoomRequest * AssociateDeviceWithRoomResponse::request() const
{
    Q_D(const AssociateDeviceWithRoomResponse);
    return static_cast<const AssociateDeviceWithRoomRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness AssociateDeviceWithRoom response.
 *
 * @param  response  Response to parse.
 */
void AssociateDeviceWithRoomResponse::parseSuccess(QIODevice &response)
{
    Q_D(AssociateDeviceWithRoomResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssociateDeviceWithRoomResponsePrivate
 *
 * @brief  Private implementation for AssociateDeviceWithRoomResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateDeviceWithRoomResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssociateDeviceWithRoomResponse instance.
 */
AssociateDeviceWithRoomResponsePrivate::AssociateDeviceWithRoomResponsePrivate(
    AssociateDeviceWithRoomResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness AssociateDeviceWithRoomResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssociateDeviceWithRoomResponsePrivate::AssociateDeviceWithRoomResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateDeviceWithRoomResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
