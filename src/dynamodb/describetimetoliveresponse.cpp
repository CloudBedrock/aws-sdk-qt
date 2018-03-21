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

#include "describetimetoliveresponse.h"
#include "describetimetoliveresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DynamoDB {

/**
 * @class  DescribeTimeToLiveResponse
 *
 * @brief  Handles DynamoDB DescribeTimeToLive responses.
 *
 * @see    DynamoDBClient::describeTimeToLive
 */

/**
 * @brief  Constructs a new DescribeTimeToLiveResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTimeToLiveResponse::DescribeTimeToLiveResponse(
        const DescribeTimeToLiveRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new DescribeTimeToLiveResponsePrivate(this), parent)
{
    setRequest(new DescribeTimeToLiveRequest(request));
    setReply(reply);
}

const DescribeTimeToLiveRequest * DescribeTimeToLiveResponse::request() const
{
    Q_D(const DescribeTimeToLiveResponse);
    return static_cast<const DescribeTimeToLiveRequest *>(d->request);
}

/**
 * @brief  Parse a DynamoDB DescribeTimeToLive response.
 *
 * @param  response  Response to parse.
 */
void DescribeTimeToLiveResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeTimeToLiveResponsePrivate
 *
 * @brief  Private implementation for DescribeTimeToLiveResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTimeToLiveResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeTimeToLiveResponse instance.
 */
DescribeTimeToLiveResponsePrivate::DescribeTimeToLiveResponsePrivate(
    DescribeTimeToLiveQueueResponse * const q) : DescribeTimeToLivePrivate(q)
{

}

/**
 * @brief  Parse an DynamoDB DescribeTimeToLiveResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeTimeToLiveResponsePrivate::DescribeTimeToLiveResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTimeToLiveResponse"));
    /// @todo
}

} // namespace DynamoDB
} // namespace AWS
