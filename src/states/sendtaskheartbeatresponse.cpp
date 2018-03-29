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

#include "sendtaskheartbeatresponse.h"
#include "sendtaskheartbeatresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SFN {

/**
 * @class  SendTaskHeartbeatResponse
 *
 * @brief  Handles SFN SendTaskHeartbeat responses.
 *
 * @see    SFNClient::sendTaskHeartbeat
 */

/**
 * @brief  Constructs a new SendTaskHeartbeatResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SendTaskHeartbeatResponse::SendTaskHeartbeatResponse(
        const SendTaskHeartbeatRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SFNResponse(new SendTaskHeartbeatResponsePrivate(this), parent)
{
    setRequest(new SendTaskHeartbeatRequest(request));
    setReply(reply);
}

const SendTaskHeartbeatRequest * SendTaskHeartbeatResponse::request() const
{
    Q_D(const SendTaskHeartbeatResponse);
    return static_cast<const SendTaskHeartbeatRequest *>(d->request);
}

/**
 * @brief  Parse a SFN SendTaskHeartbeat response.
 *
 * @param  response  Response to parse.
 */
void SendTaskHeartbeatResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SendTaskHeartbeatResponsePrivate
 *
 * @brief  Private implementation for SendTaskHeartbeatResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SendTaskHeartbeatResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SendTaskHeartbeatResponse instance.
 */
SendTaskHeartbeatResponsePrivate::SendTaskHeartbeatResponsePrivate(
    SendTaskHeartbeatResponse * const q) : SFNResponsePrivate(q)
{

}

/**
 * @brief  Parse an SFN SendTaskHeartbeatResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SendTaskHeartbeatResponsePrivate::SendTaskHeartbeatResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendTaskHeartbeatResponse"));
    /// @todo
}

} // namespace SFN
} // namespace QtAws
