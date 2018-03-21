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

#include "batchgetpartitionresponse.h"
#include "batchgetpartitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  BatchGetPartitionResponse
 *
 * @brief  Handles Glue BatchGetPartition responses.
 *
 * @see    GlueClient::batchGetPartition
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchGetPartitionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new BatchGetPartitionResponsePrivate(this), parent)
{
    setRequest(new BatchGetPartitionRequest(request));
    setReply(reply);
}

const BatchGetPartitionRequest * BatchGetPartitionResponse::request() const
{
    Q_D(const BatchGetPartitionResponse);
    return static_cast<const BatchGetPartitionRequest *>(d->request);
}

/**
 * @brief  Parse a Glue BatchGetPartition response.
 *
 * @param  response  Response to parse.
 */
void BatchGetPartitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchGetPartitionResponsePrivate
 *
 * @brief  Private implementation for BatchGetPartitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetPartitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchGetPartitionResponse instance.
 */
BatchGetPartitionResponsePrivate::BatchGetPartitionResponsePrivate(
    BatchGetPartitionQueueResponse * const q) : BatchGetPartitionPrivate(q)
{

}

/**
 * @brief  Parse an Glue BatchGetPartitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchGetPartitionResponsePrivate::BatchGetPartitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetPartitionResponse"));
    /// @todo
}

} // namespace Glue
} // namespace AWS
