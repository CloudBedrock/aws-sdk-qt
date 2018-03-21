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

#include "listsqlinjectionmatchsetsresponse.h"
#include "listsqlinjectionmatchsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAFRegional {

/**
 * @class  ListSqlInjectionMatchSetsResponse
 *
 * @brief  Handles WAFRegional ListSqlInjectionMatchSets responses.
 *
 * @see    WAFRegionalClient::listSqlInjectionMatchSets
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListSqlInjectionMatchSetsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new ListSqlInjectionMatchSetsResponsePrivate(this), parent)
{
    setRequest(new ListSqlInjectionMatchSetsRequest(request));
    setReply(reply);
}

const ListSqlInjectionMatchSetsRequest * ListSqlInjectionMatchSetsResponse::request() const
{
    Q_D(const ListSqlInjectionMatchSetsResponse);
    return static_cast<const ListSqlInjectionMatchSetsRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional ListSqlInjectionMatchSets response.
 *
 * @param  response  Response to parse.
 */
void ListSqlInjectionMatchSetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListSqlInjectionMatchSetsResponsePrivate
 *
 * @brief  Private implementation for ListSqlInjectionMatchSetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSqlInjectionMatchSetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListSqlInjectionMatchSetsResponse instance.
 */
ListSqlInjectionMatchSetsResponsePrivate::ListSqlInjectionMatchSetsResponsePrivate(
    ListSqlInjectionMatchSetsQueueResponse * const q) : ListSqlInjectionMatchSetsPrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional ListSqlInjectionMatchSetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListSqlInjectionMatchSetsResponsePrivate::ListSqlInjectionMatchSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSqlInjectionMatchSetsResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace AWS
