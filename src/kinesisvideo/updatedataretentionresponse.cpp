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

#include "updatedataretentionresponse.h"
#include "updatedataretentionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace KinesisVideo {

/**
 * @class  UpdateDataRetentionResponse
 *
 * @brief  Handles KinesisVideo UpdateDataRetention responses.
 *
 * @see    KinesisVideoClient::updateDataRetention
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDataRetentionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoResponse(new UpdateDataRetentionResponsePrivate(this), parent)
{
    setRequest(new UpdateDataRetentionRequest(request));
    setReply(reply);
}

const UpdateDataRetentionRequest * UpdateDataRetentionResponse::request() const
{
    Q_D(const UpdateDataRetentionResponse);
    return static_cast<const UpdateDataRetentionRequest *>(d->request);
}

/**
 * @brief  Parse a KinesisVideo UpdateDataRetention response.
 *
 * @param  response  Response to parse.
 */
void UpdateDataRetentionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateDataRetentionResponsePrivate
 *
 * @brief  Private implementation for UpdateDataRetentionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDataRetentionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateDataRetentionResponse instance.
 */
UpdateDataRetentionResponsePrivate::UpdateDataRetentionResponsePrivate(
    UpdateDataRetentionQueueResponse * const q) : UpdateDataRetentionPrivate(q)
{

}

/**
 * @brief  Parse an KinesisVideo UpdateDataRetentionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateDataRetentionResponsePrivate::UpdateDataRetentionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDataRetentionResponse"));
    /// @todo
}
