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

#include "getdevendpointsresponse.h"
#include "getdevendpointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  GetDevEndpointsResponse
 *
 * @brief  Handles Glue GetDevEndpoints responses.
 *
 * @see    GlueClient::getDevEndpoints
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDevEndpointsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetDevEndpointsResponsePrivate(this), parent)
{
    setRequest(new GetDevEndpointsRequest(request));
    setReply(reply);
}

const GetDevEndpointsRequest * GetDevEndpointsResponse::request() const
{
    Q_D(const GetDevEndpointsResponse);
    return static_cast<const GetDevEndpointsRequest *>(d->request);
}

/**
 * @brief  Parse a Glue GetDevEndpoints response.
 *
 * @param  response  Response to parse.
 */
void GetDevEndpointsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDevEndpointsResponsePrivate
 *
 * @brief  Private implementation for GetDevEndpointsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDevEndpointsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDevEndpointsResponse instance.
 */
GetDevEndpointsResponsePrivate::GetDevEndpointsResponsePrivate(
    GetDevEndpointsQueueResponse * const q) : GetDevEndpointsPrivate(q)
{

}

/**
 * @brief  Parse an Glue GetDevEndpointsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDevEndpointsResponsePrivate::GetDevEndpointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDevEndpointsResponse"));
    /// @todo
}
