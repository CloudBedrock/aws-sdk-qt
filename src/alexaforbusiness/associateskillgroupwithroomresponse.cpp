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

#include "associateskillgroupwithroomresponse.h"
#include "associateskillgroupwithroomresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  AssociateSkillGroupWithRoomResponse
 *
 * @brief  Handles AlexaForBusiness AssociateSkillGroupWithRoom responses.
 *
 * @see    AlexaForBusinessClient::associateSkillGroupWithRoom
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateSkillGroupWithRoomResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new AssociateSkillGroupWithRoomResponsePrivate(this), parent)
{
    setRequest(new AssociateSkillGroupWithRoomRequest(request));
    setReply(reply);
}

const AssociateSkillGroupWithRoomRequest * AssociateSkillGroupWithRoomResponse::request() const
{
    Q_D(const AssociateSkillGroupWithRoomResponse);
    return static_cast<const AssociateSkillGroupWithRoomRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness AssociateSkillGroupWithRoom response.
 *
 * @param  response  Response to parse.
 */
void AssociateSkillGroupWithRoomResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssociateSkillGroupWithRoomResponsePrivate
 *
 * @brief  Private implementation for AssociateSkillGroupWithRoomResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateSkillGroupWithRoomResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssociateSkillGroupWithRoomResponse instance.
 */
AssociateSkillGroupWithRoomResponsePrivate::AssociateSkillGroupWithRoomResponsePrivate(
    AssociateSkillGroupWithRoomQueueResponse * const q) : AssociateSkillGroupWithRoomPrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness AssociateSkillGroupWithRoomResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssociateSkillGroupWithRoomResponsePrivate::AssociateSkillGroupWithRoomResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateSkillGroupWithRoomResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace AWS
