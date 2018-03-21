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

#include "describevpcendpointservicesresponse.h"
#include "describevpcendpointservicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeVpcEndpointServicesResponse
 *
 * @brief  Handles EC2 DescribeVpcEndpointServices responses.
 *
 * @see    EC2Client::describeVpcEndpointServices
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeVpcEndpointServicesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeVpcEndpointServicesResponsePrivate(this), parent)
{
    setRequest(new DescribeVpcEndpointServicesRequest(request));
    setReply(reply);
}

const DescribeVpcEndpointServicesRequest * DescribeVpcEndpointServicesResponse::request() const
{
    Q_D(const DescribeVpcEndpointServicesResponse);
    return static_cast<const DescribeVpcEndpointServicesRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeVpcEndpointServices response.
 *
 * @param  response  Response to parse.
 */
void DescribeVpcEndpointServicesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeVpcEndpointServicesResponsePrivate
 *
 * @brief  Private implementation for DescribeVpcEndpointServicesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpcEndpointServicesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeVpcEndpointServicesResponse instance.
 */
DescribeVpcEndpointServicesResponsePrivate::DescribeVpcEndpointServicesResponsePrivate(
    DescribeVpcEndpointServicesQueueResponse * const q) : DescribeVpcEndpointServicesPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeVpcEndpointServicesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeVpcEndpointServicesResponsePrivate::DescribeVpcEndpointServicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVpcEndpointServicesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
