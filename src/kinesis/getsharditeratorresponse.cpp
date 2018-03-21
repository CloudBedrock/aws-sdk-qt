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

#include "getsharditeratorresponse.h"
#include "getsharditeratorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Kinesis {

/**
 * @class  GetShardIteratorResponse
 *
 * @brief  Handles Kinesis GetShardIterator responses.
 *
 * @see    KinesisClient::getShardIterator
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetShardIteratorResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new GetShardIteratorResponsePrivate(this), parent)
{
    setRequest(new GetShardIteratorRequest(request));
    setReply(reply);
}

const GetShardIteratorRequest * GetShardIteratorResponse::request() const
{
    Q_D(const GetShardIteratorResponse);
    return static_cast<const GetShardIteratorRequest *>(d->request);
}

/**
 * @brief  Parse a Kinesis GetShardIterator response.
 *
 * @param  response  Response to parse.
 */
void GetShardIteratorResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetShardIteratorResponsePrivate
 *
 * @brief  Private implementation for GetShardIteratorResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetShardIteratorResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetShardIteratorResponse instance.
 */
GetShardIteratorResponsePrivate::GetShardIteratorResponsePrivate(
    GetShardIteratorQueueResponse * const q) : GetShardIteratorPrivate(q)
{

}

/**
 * @brief  Parse an Kinesis GetShardIteratorResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetShardIteratorResponsePrivate::GetShardIteratorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetShardIteratorResponse"));
    /// @todo
}

} // namespace Kinesis
} // namespace AWS
