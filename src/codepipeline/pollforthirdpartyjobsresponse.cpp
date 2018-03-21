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

#include "pollforthirdpartyjobsresponse.h"
#include "pollforthirdpartyjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodePipeline {

/**
 * @class  PollForThirdPartyJobsResponse
 *
 * @brief  Handles CodePipeline PollForThirdPartyJobs responses.
 *
 * @see    CodePipelineClient::pollForThirdPartyJobs
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PollForThirdPartyJobsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodePipelineResponse(new PollForThirdPartyJobsResponsePrivate(this), parent)
{
    setRequest(new PollForThirdPartyJobsRequest(request));
    setReply(reply);
}

const PollForThirdPartyJobsRequest * PollForThirdPartyJobsResponse::request() const
{
    Q_D(const PollForThirdPartyJobsResponse);
    return static_cast<const PollForThirdPartyJobsRequest *>(d->request);
}

/**
 * @brief  Parse a CodePipeline PollForThirdPartyJobs response.
 *
 * @param  response  Response to parse.
 */
void PollForThirdPartyJobsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PollForThirdPartyJobsResponsePrivate
 *
 * @brief  Private implementation for PollForThirdPartyJobsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PollForThirdPartyJobsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PollForThirdPartyJobsResponse instance.
 */
PollForThirdPartyJobsResponsePrivate::PollForThirdPartyJobsResponsePrivate(
    PollForThirdPartyJobsQueueResponse * const q) : PollForThirdPartyJobsPrivate(q)
{

}

/**
 * @brief  Parse an CodePipeline PollForThirdPartyJobsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PollForThirdPartyJobsResponsePrivate::PollForThirdPartyJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PollForThirdPartyJobsResponse"));
    /// @todo
}

} // namespace CodePipeline
} // namespace AWS
