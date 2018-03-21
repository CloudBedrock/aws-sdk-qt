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

#include "startnextpendingjobexecutionresponse.h"
#include "startnextpendingjobexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoTJobsDataPlane {

/**
 * @class  StartNextPendingJobExecutionResponse
 *
 * @brief  Handles IoTJobsDataPlane StartNextPendingJobExecution responses.
 *
 * @see    IoTJobsDataPlaneClient::startNextPendingJobExecution
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartNextPendingJobExecutionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTJobsDataPlaneResponse(new StartNextPendingJobExecutionResponsePrivate(this), parent)
{
    setRequest(new StartNextPendingJobExecutionRequest(request));
    setReply(reply);
}

const StartNextPendingJobExecutionRequest * StartNextPendingJobExecutionResponse::request() const
{
    Q_D(const StartNextPendingJobExecutionResponse);
    return static_cast<const StartNextPendingJobExecutionRequest *>(d->request);
}

/**
 * @brief  Parse a IoTJobsDataPlane StartNextPendingJobExecution response.
 *
 * @param  response  Response to parse.
 */
void StartNextPendingJobExecutionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartNextPendingJobExecutionResponsePrivate
 *
 * @brief  Private implementation for StartNextPendingJobExecutionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartNextPendingJobExecutionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartNextPendingJobExecutionResponse instance.
 */
StartNextPendingJobExecutionResponsePrivate::StartNextPendingJobExecutionResponsePrivate(
    StartNextPendingJobExecutionQueueResponse * const q) : StartNextPendingJobExecutionPrivate(q)
{

}

/**
 * @brief  Parse an IoTJobsDataPlane StartNextPendingJobExecutionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartNextPendingJobExecutionResponsePrivate::StartNextPendingJobExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartNextPendingJobExecutionResponse"));
    /// @todo
}
