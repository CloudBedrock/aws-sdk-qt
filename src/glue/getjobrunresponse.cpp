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

#include "getjobrunresponse.h"
#include "getjobrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  GetJobRunResponse
 *
 * @brief  Handles Glue GetJobRun responses.
 *
 * @see    GlueClient::getJobRun
 */

/**
 * @brief  Constructs a new GetJobRunResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetJobRunResponse::GetJobRunResponse(
        const GetJobRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetJobRunResponsePrivate(this), parent)
{
    setRequest(new GetJobRunRequest(request));
    setReply(reply);
}

const GetJobRunRequest * GetJobRunResponse::request() const
{
    Q_D(const GetJobRunResponse);
    return static_cast<const GetJobRunRequest *>(d->request);
}

/**
 * @brief  Parse a Glue GetJobRun response.
 *
 * @param  response  Response to parse.
 */
void GetJobRunResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetJobRunResponsePrivate
 *
 * @brief  Private implementation for GetJobRunResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetJobRunResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetJobRunResponse instance.
 */
GetJobRunResponsePrivate::GetJobRunResponsePrivate(
    GetJobRunQueueResponse * const q) : GetJobRunPrivate(q)
{

}

/**
 * @brief  Parse an Glue GetJobRunResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetJobRunResponsePrivate::GetJobRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJobRunResponse"));
    /// @todo
}

} // namespace Glue
} // namespace AWS
