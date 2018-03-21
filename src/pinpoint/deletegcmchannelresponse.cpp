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

#include "deletegcmchannelresponse.h"
#include "deletegcmchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  DeleteGcmChannelResponse
 *
 * @brief  Handles Pinpoint DeleteGcmChannel responses.
 *
 * @see    PinpointClient::deleteGcmChannel
 */

/**
 * @brief  Constructs a new DeleteGcmChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteGcmChannelResponse::DeleteGcmChannelResponse(
        const DeleteGcmChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteGcmChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteGcmChannelRequest(request));
    setReply(reply);
}

const DeleteGcmChannelRequest * DeleteGcmChannelResponse::request() const
{
    Q_D(const DeleteGcmChannelResponse);
    return static_cast<const DeleteGcmChannelRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint DeleteGcmChannel response.
 *
 * @param  response  Response to parse.
 */
void DeleteGcmChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteGcmChannelResponsePrivate
 *
 * @brief  Private implementation for DeleteGcmChannelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteGcmChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteGcmChannelResponse instance.
 */
DeleteGcmChannelResponsePrivate::DeleteGcmChannelResponsePrivate(
    DeleteGcmChannelQueueResponse * const q) : DeleteGcmChannelPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint DeleteGcmChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteGcmChannelResponsePrivate::DeleteGcmChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteGcmChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace AWS
