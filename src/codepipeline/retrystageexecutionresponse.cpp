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

#include "retrystageexecutionresponse.h"
#include "retrystageexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodePipeline {

/**
 * @class  RetryStageExecutionResponse
 *
 * @brief  Handles CodePipeline RetryStageExecution responses.
 *
 * @see    CodePipelineClient::retryStageExecution
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RetryStageExecutionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodePipelineResponse(new RetryStageExecutionResponsePrivate(this), parent)
{
    setRequest(new RetryStageExecutionRequest(request));
    setReply(reply);
}

const RetryStageExecutionRequest * RetryStageExecutionResponse::request() const
{
    Q_D(const RetryStageExecutionResponse);
    return static_cast<const RetryStageExecutionRequest *>(d->request);
}

/**
 * @brief  Parse a CodePipeline RetryStageExecution response.
 *
 * @param  response  Response to parse.
 */
void RetryStageExecutionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RetryStageExecutionResponsePrivate
 *
 * @brief  Private implementation for RetryStageExecutionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RetryStageExecutionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RetryStageExecutionResponse instance.
 */
RetryStageExecutionResponsePrivate::RetryStageExecutionResponsePrivate(
    RetryStageExecutionQueueResponse * const q) : RetryStageExecutionPrivate(q)
{

}

/**
 * @brief  Parse an CodePipeline RetryStageExecutionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RetryStageExecutionResponsePrivate::RetryStageExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RetryStageExecutionResponse"));
    /// @todo
}

} // namespace CodePipeline
} // namespace AWS
