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

#include "getexportjobsresponse.h"
#include "getexportjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetExportJobsResponse
 *
 * @brief  Handles Pinpoint GetExportJobs responses.
 *
 * @see    PinpointClient::getExportJobs
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetExportJobsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetExportJobsResponsePrivate(this), parent)
{
    setRequest(new GetExportJobsRequest(request));
    setReply(reply);
}

const GetExportJobsRequest * GetExportJobsResponse::request() const
{
    Q_D(const GetExportJobsResponse);
    return static_cast<const GetExportJobsRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint GetExportJobs response.
 *
 * @param  response  Response to parse.
 */
void GetExportJobsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetExportJobsResponsePrivate
 *
 * @brief  Private implementation for GetExportJobsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetExportJobsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetExportJobsResponse instance.
 */
GetExportJobsResponsePrivate::GetExportJobsResponsePrivate(
    GetExportJobsQueueResponse * const q) : GetExportJobsPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint GetExportJobsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetExportJobsResponsePrivate::GetExportJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetExportJobsResponse"));
    /// @todo
}
