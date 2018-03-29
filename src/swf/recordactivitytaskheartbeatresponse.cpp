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

#include "recordactivitytaskheartbeatresponse.h"
#include "recordactivitytaskheartbeatresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/**
 * @class  RecordActivityTaskHeartbeatResponse
 *
 * @brief  Handles SWF RecordActivityTaskHeartbeat responses.
 *
 * @see    SWFClient::recordActivityTaskHeartbeat
 */

/**
 * @brief  Constructs a new RecordActivityTaskHeartbeatResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RecordActivityTaskHeartbeatResponse::RecordActivityTaskHeartbeatResponse(
        const RecordActivityTaskHeartbeatRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new RecordActivityTaskHeartbeatResponsePrivate(this), parent)
{
    setRequest(new RecordActivityTaskHeartbeatRequest(request));
    setReply(reply);
}

const RecordActivityTaskHeartbeatRequest * RecordActivityTaskHeartbeatResponse::request() const
{
    Q_D(const RecordActivityTaskHeartbeatResponse);
    return static_cast<const RecordActivityTaskHeartbeatRequest *>(d->request);
}

/**
 * @brief  Parse a SWF RecordActivityTaskHeartbeat response.
 *
 * @param  response  Response to parse.
 */
void RecordActivityTaskHeartbeatResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RecordActivityTaskHeartbeatResponsePrivate
 *
 * @brief  Private implementation for RecordActivityTaskHeartbeatResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RecordActivityTaskHeartbeatResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RecordActivityTaskHeartbeatResponse instance.
 */
RecordActivityTaskHeartbeatResponsePrivate::RecordActivityTaskHeartbeatResponsePrivate(
    RecordActivityTaskHeartbeatResponse * const q) : SWFResponsePrivate(q)
{

}

/**
 * @brief  Parse an SWF RecordActivityTaskHeartbeatResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RecordActivityTaskHeartbeatResponsePrivate::RecordActivityTaskHeartbeatResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RecordActivityTaskHeartbeatResponse"));
    /// @todo
}

} // namespace SWF
} // namespace QtAws
