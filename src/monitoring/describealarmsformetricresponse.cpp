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

#include "describealarmsformetricresponse.h"
#include "describealarmsformetricresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatch {

/**
 * @class  DescribeAlarmsForMetricResponse
 *
 * @brief  Handles CloudWatch DescribeAlarmsForMetric responses.
 *
 * @see    CloudWatchClient::describeAlarmsForMetric
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAlarmsForMetricResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new DescribeAlarmsForMetricResponsePrivate(this), parent)
{
    setRequest(new DescribeAlarmsForMetricRequest(request));
    setReply(reply);
}

const DescribeAlarmsForMetricRequest * DescribeAlarmsForMetricResponse::request() const
{
    Q_D(const DescribeAlarmsForMetricResponse);
    return static_cast<const DescribeAlarmsForMetricRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatch DescribeAlarmsForMetric response.
 *
 * @param  response  Response to parse.
 */
void DescribeAlarmsForMetricResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAlarmsForMetricResponsePrivate
 *
 * @brief  Private implementation for DescribeAlarmsForMetricResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAlarmsForMetricResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAlarmsForMetricResponse instance.
 */
DescribeAlarmsForMetricResponsePrivate::DescribeAlarmsForMetricResponsePrivate(
    DescribeAlarmsForMetricQueueResponse * const q) : DescribeAlarmsForMetricPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatch DescribeAlarmsForMetricResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAlarmsForMetricResponsePrivate::DescribeAlarmsForMetricResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAlarmsForMetricResponse"));
    /// @todo
}
