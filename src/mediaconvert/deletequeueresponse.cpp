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

#include "deletequeueresponse.h"
#include "deletequeueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MediaConvert {

/**
 * @class  DeleteQueueResponse
 *
 * @brief  Handles MediaConvert DeleteQueue responses.
 *
 * @see    MediaConvertClient::deleteQueue
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteQueueResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new DeleteQueueResponsePrivate(this), parent)
{
    setRequest(new DeleteQueueRequest(request));
    setReply(reply);
}

const DeleteQueueRequest * DeleteQueueResponse::request() const
{
    Q_D(const DeleteQueueResponse);
    return static_cast<const DeleteQueueRequest *>(d->request);
}

/**
 * @brief  Parse a MediaConvert DeleteQueue response.
 *
 * @param  response  Response to parse.
 */
void DeleteQueueResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteQueueResponsePrivate
 *
 * @brief  Private implementation for DeleteQueueResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteQueueResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteQueueResponse instance.
 */
DeleteQueueResponsePrivate::DeleteQueueResponsePrivate(
    DeleteQueueQueueResponse * const q) : DeleteQueuePrivate(q)
{

}

/**
 * @brief  Parse an MediaConvert DeleteQueueResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteQueueResponsePrivate::DeleteQueueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteQueueResponse"));
    /// @todo
}
