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

#include "describejobexecutionresponse.h"
#include "describejobexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoTJobsDataPlane {

/**
 * @class  DescribeJobExecutionResponse
 *
 * @brief  Handles IoTJobsDataPlane DescribeJobExecution responses.
 *
 * @see    IoTJobsDataPlaneClient::describeJobExecution
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeJobExecutionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTJobsDataPlaneResponse(new DescribeJobExecutionResponsePrivate(this), parent)
{
    setRequest(new DescribeJobExecutionRequest(request));
    setReply(reply);
}

const DescribeJobExecutionRequest * DescribeJobExecutionResponse::request() const
{
    Q_D(const DescribeJobExecutionResponse);
    return static_cast<const DescribeJobExecutionRequest *>(d->request);
}

/**
 * @brief  Parse a IoTJobsDataPlane DescribeJobExecution response.
 *
 * @param  response  Response to parse.
 */
void DescribeJobExecutionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeJobExecutionResponsePrivate
 *
 * @brief  Private implementation for DescribeJobExecutionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeJobExecutionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeJobExecutionResponse instance.
 */
DescribeJobExecutionResponsePrivate::DescribeJobExecutionResponsePrivate(
    DescribeJobExecutionQueueResponse * const q) : DescribeJobExecutionPrivate(q)
{

}

/**
 * @brief  Parse an IoTJobsDataPlane DescribeJobExecutionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeJobExecutionResponsePrivate::DescribeJobExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeJobExecutionResponse"));
    /// @todo
}

} // namespace IoTJobsDataPlane
} // namespace AWS
