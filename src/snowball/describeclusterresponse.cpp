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

#include "describeclusterresponse.h"
#include "describeclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Snowball {

/**
 * @class  DescribeClusterResponse
 *
 * @brief  Handles Snowball DescribeCluster responses.
 *
 * @see    SnowballClient::describeCluster
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeClusterResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new DescribeClusterResponsePrivate(this), parent)
{
    setRequest(new DescribeClusterRequest(request));
    setReply(reply);
}

const DescribeClusterRequest * DescribeClusterResponse::request() const
{
    Q_D(const DescribeClusterResponse);
    return static_cast<const DescribeClusterRequest *>(d->request);
}

/**
 * @brief  Parse a Snowball DescribeCluster response.
 *
 * @param  response  Response to parse.
 */
void DescribeClusterResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeClusterResponsePrivate
 *
 * @brief  Private implementation for DescribeClusterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeClusterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeClusterResponse instance.
 */
DescribeClusterResponsePrivate::DescribeClusterResponsePrivate(
    DescribeClusterQueueResponse * const q) : DescribeClusterPrivate(q)
{

}

/**
 * @brief  Parse an Snowball DescribeClusterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeClusterResponsePrivate::DescribeClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeClusterResponse"));
    /// @todo
}

} // namespace Snowball
} // namespace AWS
