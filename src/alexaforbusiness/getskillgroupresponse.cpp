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

#include "getskillgroupresponse.h"
#include "getskillgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/**
 * @class  GetSkillGroupResponse
 *
 * @brief  Handles AlexaForBusiness GetSkillGroup responses.
 *
 * @see    AlexaForBusinessClient::getSkillGroup
 */

/**
 * @brief  Constructs a new GetSkillGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSkillGroupResponse::GetSkillGroupResponse(
        const GetSkillGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new GetSkillGroupResponsePrivate(this), parent)
{
    setRequest(new GetSkillGroupRequest(request));
    setReply(reply);
}

const GetSkillGroupRequest * GetSkillGroupResponse::request() const
{
    Q_D(const GetSkillGroupResponse);
    return static_cast<const GetSkillGroupRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness GetSkillGroup response.
 *
 * @param  response  Response to parse.
 */
void GetSkillGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetSkillGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetSkillGroupResponsePrivate
 *
 * @brief  Private implementation for GetSkillGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSkillGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSkillGroupResponse instance.
 */
GetSkillGroupResponsePrivate::GetSkillGroupResponsePrivate(
    GetSkillGroupResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness GetSkillGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSkillGroupResponsePrivate::GetSkillGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSkillGroupResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
