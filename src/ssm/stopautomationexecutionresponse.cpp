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

#include "stopautomationexecutionresponse.h"
#include "stopautomationexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  StopAutomationExecutionResponse
 *
 * @brief  Handles SSM StopAutomationExecution responses.
 *
 * @see    SSMClient::stopAutomationExecution
 */

/**
 * @brief  Constructs a new StopAutomationExecutionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopAutomationExecutionResponse::StopAutomationExecutionResponse(
        const StopAutomationExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new StopAutomationExecutionResponsePrivate(this), parent)
{
    setRequest(new StopAutomationExecutionRequest(request));
    setReply(reply);
}

const StopAutomationExecutionRequest * StopAutomationExecutionResponse::request() const
{
    Q_D(const StopAutomationExecutionResponse);
    return static_cast<const StopAutomationExecutionRequest *>(d->request);
}

/**
 * @brief  Parse a SSM StopAutomationExecution response.
 *
 * @param  response  Response to parse.
 */
void StopAutomationExecutionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopAutomationExecutionResponsePrivate
 *
 * @brief  Private implementation for StopAutomationExecutionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopAutomationExecutionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopAutomationExecutionResponse instance.
 */
StopAutomationExecutionResponsePrivate::StopAutomationExecutionResponsePrivate(
    StopAutomationExecutionQueueResponse * const q) : StopAutomationExecutionPrivate(q)
{

}

/**
 * @brief  Parse an SSM StopAutomationExecutionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopAutomationExecutionResponsePrivate::StopAutomationExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopAutomationExecutionResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
