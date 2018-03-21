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

#include "deletemlmodelresponse.h"
#include "deletemlmodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MachineLearning {

/**
 * @class  DeleteMLModelResponse
 *
 * @brief  Handles MachineLearning DeleteMLModel responses.
 *
 * @see    MachineLearningClient::deleteMLModel
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteMLModelResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new DeleteMLModelResponsePrivate(this), parent)
{
    setRequest(new DeleteMLModelRequest(request));
    setReply(reply);
}

const DeleteMLModelRequest * DeleteMLModelResponse::request() const
{
    Q_D(const DeleteMLModelResponse);
    return static_cast<const DeleteMLModelRequest *>(d->request);
}

/**
 * @brief  Parse a MachineLearning DeleteMLModel response.
 *
 * @param  response  Response to parse.
 */
void DeleteMLModelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteMLModelResponsePrivate
 *
 * @brief  Private implementation for DeleteMLModelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteMLModelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteMLModelResponse instance.
 */
DeleteMLModelResponsePrivate::DeleteMLModelResponsePrivate(
    DeleteMLModelQueueResponse * const q) : DeleteMLModelPrivate(q)
{

}

/**
 * @brief  Parse an MachineLearning DeleteMLModelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteMLModelResponsePrivate::DeleteMLModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMLModelResponse"));
    /// @todo
}

} // namespace MachineLearning
} // namespace AWS
