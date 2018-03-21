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

#include "getrulegroupresponse.h"
#include "getrulegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAFRegional {

/**
 * @class  GetRuleGroupResponse
 *
 * @brief  Handles WAFRegional GetRuleGroup responses.
 *
 * @see    WAFRegionalClient::getRuleGroup
 */

/**
 * @brief  Constructs a new GetRuleGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRuleGroupResponse::GetRuleGroupResponse(
        const GetRuleGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new GetRuleGroupResponsePrivate(this), parent)
{
    setRequest(new GetRuleGroupRequest(request));
    setReply(reply);
}

const GetRuleGroupRequest * GetRuleGroupResponse::request() const
{
    Q_D(const GetRuleGroupResponse);
    return static_cast<const GetRuleGroupRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional GetRuleGroup response.
 *
 * @param  response  Response to parse.
 */
void GetRuleGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetRuleGroupResponsePrivate
 *
 * @brief  Private implementation for GetRuleGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRuleGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetRuleGroupResponse instance.
 */
GetRuleGroupResponsePrivate::GetRuleGroupResponsePrivate(
    GetRuleGroupQueueResponse * const q) : GetRuleGroupPrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional GetRuleGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetRuleGroupResponsePrivate::GetRuleGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRuleGroupResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace AWS
