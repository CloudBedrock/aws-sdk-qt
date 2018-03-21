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

#include "liststreamsresponse.h"
#include "liststreamsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DynamoDBStreams {

/**
 * @class  ListStreamsResponse
 *
 * @brief  Handles DynamoDBStreams ListStreams responses.
 *
 * @see    DynamoDBStreamsClient::listStreams
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListStreamsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBStreamsResponse(new ListStreamsResponsePrivate(this), parent)
{
    setRequest(new ListStreamsRequest(request));
    setReply(reply);
}

const ListStreamsRequest * ListStreamsResponse::request() const
{
    Q_D(const ListStreamsResponse);
    return static_cast<const ListStreamsRequest *>(d->request);
}

/**
 * @brief  Parse a DynamoDBStreams ListStreams response.
 *
 * @param  response  Response to parse.
 */
void ListStreamsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListStreamsResponsePrivate
 *
 * @brief  Private implementation for ListStreamsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListStreamsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListStreamsResponse instance.
 */
ListStreamsResponsePrivate::ListStreamsResponsePrivate(
    ListStreamsQueueResponse * const q) : ListStreamsPrivate(q)
{

}

/**
 * @brief  Parse an DynamoDBStreams ListStreamsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListStreamsResponsePrivate::ListStreamsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStreamsResponse"));
    /// @todo
}
