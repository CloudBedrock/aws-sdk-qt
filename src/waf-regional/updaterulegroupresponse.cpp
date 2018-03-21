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

#include "updaterulegroupresponse.h"
#include "updaterulegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAFRegional {

/**
 * @class  UpdateRuleGroupResponse
 *
 * @brief  Handles WAFRegional UpdateRuleGroup responses.
 *
 * @see    WAFRegionalClient::updateRuleGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateRuleGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new UpdateRuleGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateRuleGroupRequest(request));
    setReply(reply);
}

const UpdateRuleGroupRequest * UpdateRuleGroupResponse::request() const
{
    Q_D(const UpdateRuleGroupResponse);
    return static_cast<const UpdateRuleGroupRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional UpdateRuleGroup response.
 *
 * @param  response  Response to parse.
 */
void UpdateRuleGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateRuleGroupResponsePrivate
 *
 * @brief  Private implementation for UpdateRuleGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRuleGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateRuleGroupResponse instance.
 */
UpdateRuleGroupResponsePrivate::UpdateRuleGroupResponsePrivate(
    UpdateRuleGroupQueueResponse * const q) : UpdateRuleGroupPrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional UpdateRuleGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateRuleGroupResponsePrivate::UpdateRuleGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRuleGroupResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace AWS
