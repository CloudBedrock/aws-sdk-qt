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

#include "acknowledgejobresponse.h"
#include "acknowledgejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodePipeline {

/**
 * @class  AcknowledgeJobResponse
 *
 * @brief  Handles CodePipeline AcknowledgeJob responses.
 *
 * @see    CodePipelineClient::acknowledgeJob
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AcknowledgeJobResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodePipelineResponse(new AcknowledgeJobResponsePrivate(this), parent)
{
    setRequest(new AcknowledgeJobRequest(request));
    setReply(reply);
}

const AcknowledgeJobRequest * AcknowledgeJobResponse::request() const
{
    Q_D(const AcknowledgeJobResponse);
    return static_cast<const AcknowledgeJobRequest *>(d->request);
}

/**
 * @brief  Parse a CodePipeline AcknowledgeJob response.
 *
 * @param  response  Response to parse.
 */
void AcknowledgeJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AcknowledgeJobResponsePrivate
 *
 * @brief  Private implementation for AcknowledgeJobResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AcknowledgeJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AcknowledgeJobResponse instance.
 */
AcknowledgeJobResponsePrivate::AcknowledgeJobResponsePrivate(
    AcknowledgeJobQueueResponse * const q) : AcknowledgeJobPrivate(q)
{

}

/**
 * @brief  Parse an CodePipeline AcknowledgeJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AcknowledgeJobResponsePrivate::AcknowledgeJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcknowledgeJobResponse"));
    /// @todo
}

} // namespace CodePipeline
} // namespace AWS
