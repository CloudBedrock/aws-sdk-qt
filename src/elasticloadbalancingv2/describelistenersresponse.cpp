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

#include "describelistenersresponse.h"
#include "describelistenersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  DescribeListenersResponse
 *
 * @brief  Handles ElasticLoadBalancingv2 DescribeListeners responses.
 *
 * @see    ElasticLoadBalancingv2Client::describeListeners
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeListenersResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingv2Response(new DescribeListenersResponsePrivate(this), parent)
{
    setRequest(new DescribeListenersRequest(request));
    setReply(reply);
}

const DescribeListenersRequest * DescribeListenersResponse::request() const
{
    Q_D(const DescribeListenersResponse);
    return static_cast<const DescribeListenersRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancingv2 DescribeListeners response.
 *
 * @param  response  Response to parse.
 */
void DescribeListenersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeListenersResponsePrivate
 *
 * @brief  Private implementation for DescribeListenersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeListenersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeListenersResponse instance.
 */
DescribeListenersResponsePrivate::DescribeListenersResponsePrivate(
    DescribeListenersQueueResponse * const q) : DescribeListenersPrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancingv2 DescribeListenersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeListenersResponsePrivate::DescribeListenersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeListenersResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancingv2
} // namespace AWS
