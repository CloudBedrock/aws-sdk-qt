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

#include "batchstopjobrunresponse.h"
#include "batchstopjobrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  BatchStopJobRunResponse
 *
 * @brief  Handles Glue BatchStopJobRun responses.
 *
 * @see    GlueClient::batchStopJobRun
 */

/**
 * @brief  Constructs a new BatchStopJobRunResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchStopJobRunResponse::BatchStopJobRunResponse(
        const BatchStopJobRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new BatchStopJobRunResponsePrivate(this), parent)
{
    setRequest(new BatchStopJobRunRequest(request));
    setReply(reply);
}

const BatchStopJobRunRequest * BatchStopJobRunResponse::request() const
{
    Q_D(const BatchStopJobRunResponse);
    return static_cast<const BatchStopJobRunRequest *>(d->request);
}

/**
 * @brief  Parse a Glue BatchStopJobRun response.
 *
 * @param  response  Response to parse.
 */
void BatchStopJobRunResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchStopJobRunResponsePrivate
 *
 * @brief  Private implementation for BatchStopJobRunResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchStopJobRunResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchStopJobRunResponse instance.
 */
BatchStopJobRunResponsePrivate::BatchStopJobRunResponsePrivate(
    BatchStopJobRunQueueResponse * const q) : BatchStopJobRunPrivate(q)
{

}

/**
 * @brief  Parse an Glue BatchStopJobRunResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchStopJobRunResponsePrivate::BatchStopJobRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchStopJobRunResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
