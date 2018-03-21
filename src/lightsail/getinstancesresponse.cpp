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

#include "getinstancesresponse.h"
#include "getinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  GetInstancesResponse
 *
 * @brief  Handles Lightsail GetInstances responses.
 *
 * @see    LightsailClient::getInstances
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetInstancesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetInstancesResponsePrivate(this), parent)
{
    setRequest(new GetInstancesRequest(request));
    setReply(reply);
}

const GetInstancesRequest * GetInstancesResponse::request() const
{
    Q_D(const GetInstancesResponse);
    return static_cast<const GetInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetInstances response.
 *
 * @param  response  Response to parse.
 */
void GetInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetInstancesResponsePrivate
 *
 * @brief  Private implementation for GetInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetInstancesResponse instance.
 */
GetInstancesResponsePrivate::GetInstancesResponsePrivate(
    GetInstancesQueueResponse * const q) : GetInstancesPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetInstancesResponsePrivate::GetInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInstancesResponse"));
    /// @todo
}
