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

#include "createroomresponse.h"
#include "createroomresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::CreateRoomResponse
 *
 * \brief The CreateRoomResponse class provides an interace for AlexaForBusiness CreateRoom responses.
 *
 * \ingroup AlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need to manage Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice
 *  skills using the Alexa Skills Kit, and the Alexa for Business APIs, and you can make these available as private skills
 *  for your organization. Alexa for Business also makes it easy to voice-enable your products and services, providing
 *  context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::createRoom
 */

/*!
 * @brief  Constructs a new CreateRoomResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateRoomResponse::CreateRoomResponse(
        const CreateRoomRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new CreateRoomResponsePrivate(this), parent)
{
    setRequest(new CreateRoomRequest(request));
    setReply(reply);
}

const CreateRoomRequest * CreateRoomResponse::request() const
{
    Q_D(const CreateRoomResponse);
    return static_cast<const CreateRoomRequest *>(d->request);
}

/*!
 * @brief  Parse a AlexaForBusiness CreateRoom response.
 *
 * @param  response  Response to parse.
 */
void CreateRoomResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateRoomResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateRoomResponsePrivate
 *
 * \brief Private implementation for CreateRoomResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateRoomResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateRoomResponse instance.
 */
CreateRoomResponsePrivate::CreateRoomResponsePrivate(
    CreateRoomResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * @brief  Parse an AlexaForBusiness CreateRoomResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateRoomResponsePrivate::parseCreateRoomResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRoomResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
