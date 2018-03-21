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

#include "listrulesresponse.h"
#include "listrulesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAFRegional {

/**
 * @class  ListRulesResponse
 *
 * @brief  Handles WAFRegional ListRules responses.
 *
 * @see    WAFRegionalClient::listRules
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListRulesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new ListRulesResponsePrivate(this), parent)
{
    setRequest(new ListRulesRequest(request));
    setReply(reply);
}

const ListRulesRequest * ListRulesResponse::request() const
{
    Q_D(const ListRulesResponse);
    return static_cast<const ListRulesRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional ListRules response.
 *
 * @param  response  Response to parse.
 */
void ListRulesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListRulesResponsePrivate
 *
 * @brief  Private implementation for ListRulesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRulesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListRulesResponse instance.
 */
ListRulesResponsePrivate::ListRulesResponsePrivate(
    ListRulesQueueResponse * const q) : ListRulesPrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional ListRulesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListRulesResponsePrivate::ListRulesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRulesResponse"));
    /// @todo
}
