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

#include "deleteroomresponse.h"
#include "deleteroomresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DeleteRoomResponse
 *
 * \brief The DeleteRoomResponse class provides an interace for AlexaForBusiness DeleteRoom responses.
 *
 * \ingroup AlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need to manage Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice
 *  skills using the Alexa Skills Kit, and the Alexa for Business APIs, and you can make these available as private skills
 *  for your organization. Alexa for Business also makes it easy to voice-enable your products and services, providing
 *  context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::deleteRoom
 */

/*!
 * @brief  Constructs a new DeleteRoomResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRoomResponse::DeleteRoomResponse(
        const DeleteRoomRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new DeleteRoomResponsePrivate(this), parent)
{
    setRequest(new DeleteRoomRequest(request));
    setReply(reply);
}

const DeleteRoomRequest * DeleteRoomResponse::request() const
{
    Q_D(const DeleteRoomResponse);
    return static_cast<const DeleteRoomRequest *>(d->request);
}

/*!
 * @brief  Parse a AlexaForBusiness DeleteRoom response.
 *
 * @param  response  Response to parse.
 */
void DeleteRoomResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteRoomResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteRoomResponsePrivate
 *
 * \brief Private implementation for DeleteRoomResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteRoomResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteRoomResponse instance.
 */
DeleteRoomResponsePrivate::DeleteRoomResponsePrivate(
    DeleteRoomResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * @brief  Parse an AlexaForBusiness DeleteRoomResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteRoomResponsePrivate::parseDeleteRoomResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRoomResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
