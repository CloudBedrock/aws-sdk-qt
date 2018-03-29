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

#include "listnamedqueriesresponse.h"
#include "listnamedqueriesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Athena {

/**
 * @class  ListNamedQueriesResponse
 *
 * @brief  Handles Athena ListNamedQueries responses.
 *
 * @see    AthenaClient::listNamedQueries
 */

/**
 * @brief  Constructs a new ListNamedQueriesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListNamedQueriesResponse::ListNamedQueriesResponse(
        const ListNamedQueriesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AthenaResponse(new ListNamedQueriesResponsePrivate(this), parent)
{
    setRequest(new ListNamedQueriesRequest(request));
    setReply(reply);
}

const ListNamedQueriesRequest * ListNamedQueriesResponse::request() const
{
    Q_D(const ListNamedQueriesResponse);
    return static_cast<const ListNamedQueriesRequest *>(d->request);
}

/**
 * @brief  Parse a Athena ListNamedQueries response.
 *
 * @param  response  Response to parse.
 */
void ListNamedQueriesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListNamedQueriesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListNamedQueriesResponsePrivate
 *
 * @brief  Private implementation for ListNamedQueriesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListNamedQueriesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListNamedQueriesResponse instance.
 */
ListNamedQueriesResponsePrivate::ListNamedQueriesResponsePrivate(
    ListNamedQueriesResponse * const q) : AthenaResponsePrivate(q)
{

}

/**
 * @brief  Parse an Athena ListNamedQueriesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListNamedQueriesResponsePrivate::parseListNamedQueriesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListNamedQueriesResponse"));
    /// @todo
}

} // namespace Athena
} // namespace QtAws
