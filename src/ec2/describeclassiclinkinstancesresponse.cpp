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

#include "describeclassiclinkinstancesresponse.h"
#include "describeclassiclinkinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeClassicLinkInstancesResponse
 *
 * @brief  Handles EC2 DescribeClassicLinkInstances responses.
 *
 * @see    EC2Client::describeClassicLinkInstances
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeClassicLinkInstancesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeClassicLinkInstancesResponsePrivate(this), parent)
{
    setRequest(new DescribeClassicLinkInstancesRequest(request));
    setReply(reply);
}

const DescribeClassicLinkInstancesRequest * DescribeClassicLinkInstancesResponse::request() const
{
    Q_D(const DescribeClassicLinkInstancesResponse);
    return static_cast<const DescribeClassicLinkInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeClassicLinkInstances response.
 *
 * @param  response  Response to parse.
 */
void DescribeClassicLinkInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeClassicLinkInstancesResponsePrivate
 *
 * @brief  Private implementation for DescribeClassicLinkInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeClassicLinkInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeClassicLinkInstancesResponse instance.
 */
DescribeClassicLinkInstancesResponsePrivate::DescribeClassicLinkInstancesResponsePrivate(
    DescribeClassicLinkInstancesQueueResponse * const q) : DescribeClassicLinkInstancesPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeClassicLinkInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeClassicLinkInstancesResponsePrivate::DescribeClassicLinkInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeClassicLinkInstancesResponse"));
    /// @todo
}
