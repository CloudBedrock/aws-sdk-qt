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

#include "listdevicepoolsresponse.h"
#include "listdevicepoolsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DeviceFarm {

/**
 * @class  ListDevicePoolsResponse
 *
 * @brief  Handles DeviceFarm ListDevicePools responses.
 *
 * @see    DeviceFarmClient::listDevicePools
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDevicePoolsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListDevicePoolsResponsePrivate(this), parent)
{
    setRequest(new ListDevicePoolsRequest(request));
    setReply(reply);
}

const ListDevicePoolsRequest * ListDevicePoolsResponse::request() const
{
    Q_D(const ListDevicePoolsResponse);
    return static_cast<const ListDevicePoolsRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm ListDevicePools response.
 *
 * @param  response  Response to parse.
 */
void ListDevicePoolsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListDevicePoolsResponsePrivate
 *
 * @brief  Private implementation for ListDevicePoolsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDevicePoolsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListDevicePoolsResponse instance.
 */
ListDevicePoolsResponsePrivate::ListDevicePoolsResponsePrivate(
    ListDevicePoolsQueueResponse * const q) : ListDevicePoolsPrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm ListDevicePoolsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListDevicePoolsResponsePrivate::ListDevicePoolsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDevicePoolsResponse"));
    /// @todo
}
