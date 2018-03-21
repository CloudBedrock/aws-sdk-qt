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

#include "getimportjobsresponse.h"
#include "getimportjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetImportJobsResponse
 *
 * @brief  Handles Pinpoint GetImportJobs responses.
 *
 * @see    PinpointClient::getImportJobs
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetImportJobsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetImportJobsResponsePrivate(this), parent)
{
    setRequest(new GetImportJobsRequest(request));
    setReply(reply);
}

const GetImportJobsRequest * GetImportJobsResponse::request() const
{
    Q_D(const GetImportJobsResponse);
    return static_cast<const GetImportJobsRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint GetImportJobs response.
 *
 * @param  response  Response to parse.
 */
void GetImportJobsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetImportJobsResponsePrivate
 *
 * @brief  Private implementation for GetImportJobsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetImportJobsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetImportJobsResponse instance.
 */
GetImportJobsResponsePrivate::GetImportJobsResponsePrivate(
    GetImportJobsQueueResponse * const q) : GetImportJobsPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint GetImportJobsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetImportJobsResponsePrivate::GetImportJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetImportJobsResponse"));
    /// @todo
}
