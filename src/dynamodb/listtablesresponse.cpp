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

#include "listtablesresponse.h"
#include "listtablesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DynamoDB {

/**
 * @class  ListTablesResponse
 *
 * @brief  Handles DynamoDB ListTables responses.
 *
 * @see    DynamoDBClient::listTables
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTablesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new ListTablesResponsePrivate(this), parent)
{
    setRequest(new ListTablesRequest(request));
    setReply(reply);
}

const ListTablesRequest * ListTablesResponse::request() const
{
    Q_D(const ListTablesResponse);
    return static_cast<const ListTablesRequest *>(d->request);
}

/**
 * @brief  Parse a DynamoDB ListTables response.
 *
 * @param  response  Response to parse.
 */
void ListTablesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTablesResponsePrivate
 *
 * @brief  Private implementation for ListTablesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTablesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTablesResponse instance.
 */
ListTablesResponsePrivate::ListTablesResponsePrivate(
    ListTablesQueueResponse * const q) : ListTablesPrivate(q)
{

}

/**
 * @brief  Parse an DynamoDB ListTablesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTablesResponsePrivate::ListTablesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTablesResponse"));
    /// @todo
}
