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

#include "putmetricfilterresponse.h"
#include "putmetricfilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  PutMetricFilterResponse
 *
 * @brief  Handles CloudWatchLogs PutMetricFilter responses.
 *
 * @see    CloudWatchLogsClient::putMetricFilter
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutMetricFilterResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new PutMetricFilterResponsePrivate(this), parent)
{
    setRequest(new PutMetricFilterRequest(request));
    setReply(reply);
}

const PutMetricFilterRequest * PutMetricFilterResponse::request() const
{
    Q_D(const PutMetricFilterResponse);
    return static_cast<const PutMetricFilterRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs PutMetricFilter response.
 *
 * @param  response  Response to parse.
 */
void PutMetricFilterResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutMetricFilterResponsePrivate
 *
 * @brief  Private implementation for PutMetricFilterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutMetricFilterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutMetricFilterResponse instance.
 */
PutMetricFilterResponsePrivate::PutMetricFilterResponsePrivate(
    PutMetricFilterQueueResponse * const q) : PutMetricFilterPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs PutMetricFilterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutMetricFilterResponsePrivate::PutMetricFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutMetricFilterResponse"));
    /// @todo
}

} // namespace CloudWatchLogs
} // namespace AWS
