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

#include "describeinternetgatewaysresponse.h"
#include "describeinternetgatewaysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeInternetGatewaysResponse
 *
 * @brief  Handles EC2 DescribeInternetGateways responses.
 *
 * @see    EC2Client::describeInternetGateways
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeInternetGatewaysResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeInternetGatewaysResponsePrivate(this), parent)
{
    setRequest(new DescribeInternetGatewaysRequest(request));
    setReply(reply);
}

const DescribeInternetGatewaysRequest * DescribeInternetGatewaysResponse::request() const
{
    Q_D(const DescribeInternetGatewaysResponse);
    return static_cast<const DescribeInternetGatewaysRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeInternetGateways response.
 *
 * @param  response  Response to parse.
 */
void DescribeInternetGatewaysResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeInternetGatewaysResponsePrivate
 *
 * @brief  Private implementation for DescribeInternetGatewaysResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInternetGatewaysResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeInternetGatewaysResponse instance.
 */
DescribeInternetGatewaysResponsePrivate::DescribeInternetGatewaysResponsePrivate(
    DescribeInternetGatewaysQueueResponse * const q) : DescribeInternetGatewaysPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeInternetGatewaysResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeInternetGatewaysResponsePrivate::DescribeInternetGatewaysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInternetGatewaysResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
