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

#include "describevpnconnectionsresponse.h"
#include "describevpnconnectionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeVpnConnectionsResponse
 *
 * @brief  Handles EC2 DescribeVpnConnections responses.
 *
 * @see    EC2Client::describeVpnConnections
 */

/**
 * @brief  Constructs a new DescribeVpnConnectionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeVpnConnectionsResponse::DescribeVpnConnectionsResponse(
        const DescribeVpnConnectionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeVpnConnectionsResponse(new DescribeVpnConnectionsResponsePrivate(this), parent)
{
    setRequest(new DescribeVpnConnectionsRequest(request));
    setReply(reply);
}

const DescribeVpnConnectionsRequest * DescribeVpnConnectionsResponse::request() const
{
    Q_D(const DescribeVpnConnectionsResponse);
    return static_cast<const DescribeVpnConnectionsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeVpnConnections response.
 *
 * @param  response  Response to parse.
 */
void DescribeVpnConnectionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeVpnConnectionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeVpnConnectionsResponsePrivate
 *
 * @brief  Private implementation for DescribeVpnConnectionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpnConnectionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeVpnConnectionsResponse instance.
 */
DescribeVpnConnectionsResponsePrivate::DescribeVpnConnectionsResponsePrivate(
    DescribeVpnConnectionsResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeVpnConnectionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeVpnConnectionsResponsePrivate::parseDescribeVpnConnectionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVpnConnectionsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
