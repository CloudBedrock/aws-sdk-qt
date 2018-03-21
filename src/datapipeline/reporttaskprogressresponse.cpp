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

#include "reporttaskprogressresponse.h"
#include "reporttaskprogressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DataPipeline {

/**
 * @class  ReportTaskProgressResponse
 *
 * @brief  Handles DataPipeline ReportTaskProgress responses.
 *
 * @see    DataPipelineClient::reportTaskProgress
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ReportTaskProgressResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataPipelineResponse(new ReportTaskProgressResponsePrivate(this), parent)
{
    setRequest(new ReportTaskProgressRequest(request));
    setReply(reply);
}

const ReportTaskProgressRequest * ReportTaskProgressResponse::request() const
{
    Q_D(const ReportTaskProgressResponse);
    return static_cast<const ReportTaskProgressRequest *>(d->request);
}

/**
 * @brief  Parse a DataPipeline ReportTaskProgress response.
 *
 * @param  response  Response to parse.
 */
void ReportTaskProgressResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ReportTaskProgressResponsePrivate
 *
 * @brief  Private implementation for ReportTaskProgressResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReportTaskProgressResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ReportTaskProgressResponse instance.
 */
ReportTaskProgressResponsePrivate::ReportTaskProgressResponsePrivate(
    ReportTaskProgressQueueResponse * const q) : ReportTaskProgressPrivate(q)
{

}

/**
 * @brief  Parse an DataPipeline ReportTaskProgressResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ReportTaskProgressResponsePrivate::ReportTaskProgressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReportTaskProgressResponse"));
    /// @todo
}

} // namespace DataPipeline
} // namespace AWS
