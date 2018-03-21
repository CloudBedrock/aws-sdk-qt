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

#include "listremoteaccesssessionsresponse.h"
#include "listremoteaccesssessionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DeviceFarm {

/**
 * @class  ListRemoteAccessSessionsResponse
 *
 * @brief  Handles DeviceFarm ListRemoteAccessSessions responses.
 *
 * @see    DeviceFarmClient::listRemoteAccessSessions
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListRemoteAccessSessionsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListRemoteAccessSessionsResponsePrivate(this), parent)
{
    setRequest(new ListRemoteAccessSessionsRequest(request));
    setReply(reply);
}

const ListRemoteAccessSessionsRequest * ListRemoteAccessSessionsResponse::request() const
{
    Q_D(const ListRemoteAccessSessionsResponse);
    return static_cast<const ListRemoteAccessSessionsRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm ListRemoteAccessSessions response.
 *
 * @param  response  Response to parse.
 */
void ListRemoteAccessSessionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListRemoteAccessSessionsResponsePrivate
 *
 * @brief  Private implementation for ListRemoteAccessSessionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRemoteAccessSessionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListRemoteAccessSessionsResponse instance.
 */
ListRemoteAccessSessionsResponsePrivate::ListRemoteAccessSessionsResponsePrivate(
    ListRemoteAccessSessionsQueueResponse * const q) : ListRemoteAccessSessionsPrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm ListRemoteAccessSessionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListRemoteAccessSessionsResponsePrivate::ListRemoteAccessSessionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRemoteAccessSessionsResponse"));
    /// @todo
}
