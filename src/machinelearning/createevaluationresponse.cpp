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

#include "createevaluationresponse.h"
#include "createevaluationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MachineLearning {

/**
 * @class  CreateEvaluationResponse
 *
 * @brief  Handles MachineLearning CreateEvaluation responses.
 *
 * @see    MachineLearningClient::createEvaluation
 */

/**
 * @brief  Constructs a new CreateEvaluationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateEvaluationResponse::CreateEvaluationResponse(
        const CreateEvaluationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new CreateEvaluationResponsePrivate(this), parent)
{
    setRequest(new CreateEvaluationRequest(request));
    setReply(reply);
}

const CreateEvaluationRequest * CreateEvaluationResponse::request() const
{
    Q_D(const CreateEvaluationResponse);
    return static_cast<const CreateEvaluationRequest *>(d->request);
}

/**
 * @brief  Parse a MachineLearning CreateEvaluation response.
 *
 * @param  response  Response to parse.
 */
void CreateEvaluationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateEvaluationResponsePrivate
 *
 * @brief  Private implementation for CreateEvaluationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateEvaluationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateEvaluationResponse instance.
 */
CreateEvaluationResponsePrivate::CreateEvaluationResponsePrivate(
    CreateEvaluationQueueResponse * const q) : CreateEvaluationPrivate(q)
{

}

/**
 * @brief  Parse an MachineLearning CreateEvaluationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateEvaluationResponsePrivate::CreateEvaluationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEvaluationResponse"));
    /// @todo
}

} // namespace MachineLearning
} // namespace AWS
