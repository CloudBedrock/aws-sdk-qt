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

#include "getapnssandboxchannelresponse.h"
#include "getapnssandboxchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetApnsSandboxChannelResponse
 *
 * @brief  Handles Pinpoint GetApnsSandboxChannel responses.
 *
 * @see    PinpointClient::getApnsSandboxChannel
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetApnsSandboxChannelResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetApnsSandboxChannelResponsePrivate(this), parent)
{
    setRequest(new GetApnsSandboxChannelRequest(request));
    setReply(reply);
}

const GetApnsSandboxChannelRequest * GetApnsSandboxChannelResponse::request() const
{
    Q_D(const GetApnsSandboxChannelResponse);
    return static_cast<const GetApnsSandboxChannelRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint GetApnsSandboxChannel response.
 *
 * @param  response  Response to parse.
 */
void GetApnsSandboxChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetApnsSandboxChannelResponsePrivate
 *
 * @brief  Private implementation for GetApnsSandboxChannelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetApnsSandboxChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetApnsSandboxChannelResponse instance.
 */
GetApnsSandboxChannelResponsePrivate::GetApnsSandboxChannelResponsePrivate(
    GetApnsSandboxChannelQueueResponse * const q) : GetApnsSandboxChannelPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint GetApnsSandboxChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetApnsSandboxChannelResponsePrivate::GetApnsSandboxChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApnsSandboxChannelResponse"));
    /// @todo
}
