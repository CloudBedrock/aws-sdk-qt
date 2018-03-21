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

#include "cancelexporttaskresponse.h"
#include "cancelexporttaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  CancelExportTaskResponse
 *
 * @brief  Handles CloudWatchLogs CancelExportTask responses.
 *
 * @see    CloudWatchLogsClient::cancelExportTask
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CancelExportTaskResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new CancelExportTaskResponsePrivate(this), parent)
{
    setRequest(new CancelExportTaskRequest(request));
    setReply(reply);
}

const CancelExportTaskRequest * CancelExportTaskResponse::request() const
{
    Q_D(const CancelExportTaskResponse);
    return static_cast<const CancelExportTaskRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs CancelExportTask response.
 *
 * @param  response  Response to parse.
 */
void CancelExportTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CancelExportTaskResponsePrivate
 *
 * @brief  Private implementation for CancelExportTaskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelExportTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CancelExportTaskResponse instance.
 */
CancelExportTaskResponsePrivate::CancelExportTaskResponsePrivate(
    CancelExportTaskQueueResponse * const q) : CancelExportTaskPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs CancelExportTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CancelExportTaskResponsePrivate::CancelExportTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelExportTaskResponse"));
    /// @todo
}

} // namespace CloudWatchLogs
} // namespace AWS
