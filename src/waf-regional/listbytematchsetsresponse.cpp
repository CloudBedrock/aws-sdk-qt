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

#include "listbytematchsetsresponse.h"
#include "listbytematchsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAFRegional {

/**
 * @class  ListByteMatchSetsResponse
 *
 * @brief  Handles WAFRegional ListByteMatchSets responses.
 *
 * @see    WAFRegionalClient::listByteMatchSets
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListByteMatchSetsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new ListByteMatchSetsResponsePrivate(this), parent)
{
    setRequest(new ListByteMatchSetsRequest(request));
    setReply(reply);
}

const ListByteMatchSetsRequest * ListByteMatchSetsResponse::request() const
{
    Q_D(const ListByteMatchSetsResponse);
    return static_cast<const ListByteMatchSetsRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional ListByteMatchSets response.
 *
 * @param  response  Response to parse.
 */
void ListByteMatchSetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListByteMatchSetsResponsePrivate
 *
 * @brief  Private implementation for ListByteMatchSetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListByteMatchSetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListByteMatchSetsResponse instance.
 */
ListByteMatchSetsResponsePrivate::ListByteMatchSetsResponsePrivate(
    ListByteMatchSetsQueueResponse * const q) : ListByteMatchSetsPrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional ListByteMatchSetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListByteMatchSetsResponsePrivate::ListByteMatchSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListByteMatchSetsResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace AWS
