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

#include "listsubscribedrulegroupsresponse.h"
#include "listsubscribedrulegroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAFRegional {

/**
 * @class  ListSubscribedRuleGroupsResponse
 *
 * @brief  Handles WAFRegional ListSubscribedRuleGroups responses.
 *
 * @see    WAFRegionalClient::listSubscribedRuleGroups
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListSubscribedRuleGroupsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new ListSubscribedRuleGroupsResponsePrivate(this), parent)
{
    setRequest(new ListSubscribedRuleGroupsRequest(request));
    setReply(reply);
}

const ListSubscribedRuleGroupsRequest * ListSubscribedRuleGroupsResponse::request() const
{
    Q_D(const ListSubscribedRuleGroupsResponse);
    return static_cast<const ListSubscribedRuleGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional ListSubscribedRuleGroups response.
 *
 * @param  response  Response to parse.
 */
void ListSubscribedRuleGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListSubscribedRuleGroupsResponsePrivate
 *
 * @brief  Private implementation for ListSubscribedRuleGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSubscribedRuleGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListSubscribedRuleGroupsResponse instance.
 */
ListSubscribedRuleGroupsResponsePrivate::ListSubscribedRuleGroupsResponsePrivate(
    ListSubscribedRuleGroupsQueueResponse * const q) : ListSubscribedRuleGroupsPrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional ListSubscribedRuleGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListSubscribedRuleGroupsResponsePrivate::ListSubscribedRuleGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSubscribedRuleGroupsResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace AWS
