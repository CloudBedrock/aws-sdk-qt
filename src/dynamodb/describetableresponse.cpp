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

#include "describetableresponse.h"
#include "describetableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DynamoDB {

/**
 * @class  DescribeTableResponse
 *
 * @brief  Handles DynamoDB DescribeTable responses.
 *
 * @see    DynamoDBClient::describeTable
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTableResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new DescribeTableResponsePrivate(this), parent)
{
    setRequest(new DescribeTableRequest(request));
    setReply(reply);
}

const DescribeTableRequest * DescribeTableResponse::request() const
{
    Q_D(const DescribeTableResponse);
    return static_cast<const DescribeTableRequest *>(d->request);
}

/**
 * @brief  Parse a DynamoDB DescribeTable response.
 *
 * @param  response  Response to parse.
 */
void DescribeTableResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeTableResponsePrivate
 *
 * @brief  Private implementation for DescribeTableResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTableResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeTableResponse instance.
 */
DescribeTableResponsePrivate::DescribeTableResponsePrivate(
    DescribeTableQueueResponse * const q) : DescribeTablePrivate(q)
{

}

/**
 * @brief  Parse an DynamoDB DescribeTableResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeTableResponsePrivate::DescribeTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTableResponse"));
    /// @todo
}
