/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describevpcattributeresponse.h"
#include "describevpcattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeVpcAttributeResponse
 *
 * @brief  Handles EC2 DescribeVpcAttribute responses.
 *
 * @see    EC2Client::describeVpcAttribute
 */

/**
 * @brief  Constructs a new DescribeVpcAttributeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeVpcAttributeResponse::DescribeVpcAttributeResponse(
        const DescribeVpcAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeVpcAttributeResponsePrivate(this), parent)
{
    setRequest(new DescribeVpcAttributeRequest(request));
    setReply(reply);
}

const DescribeVpcAttributeRequest * DescribeVpcAttributeResponse::request() const
{
    Q_D(const DescribeVpcAttributeResponse);
    return static_cast<const DescribeVpcAttributeRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeVpcAttribute response.
 *
 * @param  response  Response to parse.
 */
void DescribeVpcAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeVpcAttributeResponsePrivate
 *
 * @brief  Private implementation for DescribeVpcAttributeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpcAttributeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeVpcAttributeResponse instance.
 */
DescribeVpcAttributeResponsePrivate::DescribeVpcAttributeResponsePrivate(
    DescribeVpcAttributeQueueResponse * const q) : DescribeVpcAttributePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeVpcAttributeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeVpcAttributeResponsePrivate::DescribeVpcAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVpcAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
