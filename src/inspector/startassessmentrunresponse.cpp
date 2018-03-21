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

#include "startassessmentrunresponse.h"
#include "startassessmentrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Inspector {

/**
 * @class  StartAssessmentRunResponse
 *
 * @brief  Handles Inspector StartAssessmentRun responses.
 *
 * @see    InspectorClient::startAssessmentRun
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartAssessmentRunResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new StartAssessmentRunResponsePrivate(this), parent)
{
    setRequest(new StartAssessmentRunRequest(request));
    setReply(reply);
}

const StartAssessmentRunRequest * StartAssessmentRunResponse::request() const
{
    Q_D(const StartAssessmentRunResponse);
    return static_cast<const StartAssessmentRunRequest *>(d->request);
}

/**
 * @brief  Parse a Inspector StartAssessmentRun response.
 *
 * @param  response  Response to parse.
 */
void StartAssessmentRunResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartAssessmentRunResponsePrivate
 *
 * @brief  Private implementation for StartAssessmentRunResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartAssessmentRunResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartAssessmentRunResponse instance.
 */
StartAssessmentRunResponsePrivate::StartAssessmentRunResponsePrivate(
    StartAssessmentRunQueueResponse * const q) : StartAssessmentRunPrivate(q)
{

}

/**
 * @brief  Parse an Inspector StartAssessmentRunResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartAssessmentRunResponsePrivate::StartAssessmentRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartAssessmentRunResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace AWS
