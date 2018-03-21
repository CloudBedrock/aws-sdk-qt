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

#include "updateadmchannelresponse.h"
#include "updateadmchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  UpdateAdmChannelResponse
 *
 * @brief  Handles Pinpoint UpdateAdmChannel responses.
 *
 * @see    PinpointClient::updateAdmChannel
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateAdmChannelResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateAdmChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateAdmChannelRequest(request));
    setReply(reply);
}

const UpdateAdmChannelRequest * UpdateAdmChannelResponse::request() const
{
    Q_D(const UpdateAdmChannelResponse);
    return static_cast<const UpdateAdmChannelRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint UpdateAdmChannel response.
 *
 * @param  response  Response to parse.
 */
void UpdateAdmChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateAdmChannelResponsePrivate
 *
 * @brief  Private implementation for UpdateAdmChannelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAdmChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateAdmChannelResponse instance.
 */
UpdateAdmChannelResponsePrivate::UpdateAdmChannelResponsePrivate(
    UpdateAdmChannelQueueResponse * const q) : UpdateAdmChannelPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint UpdateAdmChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateAdmChannelResponsePrivate::UpdateAdmChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAdmChannelResponse"));
    /// @todo
}
