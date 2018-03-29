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

#include "startloggingresponse.h"
#include "startloggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudTrail {

/**
 * @class  StartLoggingResponse
 *
 * @brief  Handles CloudTrail StartLogging responses.
 *
 * @see    CloudTrailClient::startLogging
 */

/**
 * @brief  Constructs a new StartLoggingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartLoggingResponse::StartLoggingResponse(
        const StartLoggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudTrailResponse(new StartLoggingResponsePrivate(this), parent)
{
    setRequest(new StartLoggingRequest(request));
    setReply(reply);
}

const StartLoggingRequest * StartLoggingResponse::request() const
{
    Q_D(const StartLoggingResponse);
    return static_cast<const StartLoggingRequest *>(d->request);
}

/**
 * @brief  Parse a CloudTrail StartLogging response.
 *
 * @param  response  Response to parse.
 */
void StartLoggingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartLoggingResponsePrivate
 *
 * @brief  Private implementation for StartLoggingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartLoggingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartLoggingResponse instance.
 */
StartLoggingResponsePrivate::StartLoggingResponsePrivate(
    StartLoggingQueueResponse * const q) : StartLoggingPrivate(q)
{

}

/**
 * @brief  Parse an CloudTrail StartLoggingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartLoggingResponsePrivate::StartLoggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartLoggingResponse"));
    /// @todo
}

} // namespace CloudTrail
} // namespace QtAws
