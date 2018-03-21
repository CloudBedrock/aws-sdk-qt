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

#include "acceptvpcpeeringconnectionresponse.h"
#include "acceptvpcpeeringconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  AcceptVpcPeeringConnectionResponse
 *
 * @brief  Handles EC2 AcceptVpcPeeringConnection responses.
 *
 * @see    EC2Client::acceptVpcPeeringConnection
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AcceptVpcPeeringConnectionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new AcceptVpcPeeringConnectionResponsePrivate(this), parent)
{
    setRequest(new AcceptVpcPeeringConnectionRequest(request));
    setReply(reply);
}

const AcceptVpcPeeringConnectionRequest * AcceptVpcPeeringConnectionResponse::request() const
{
    Q_D(const AcceptVpcPeeringConnectionResponse);
    return static_cast<const AcceptVpcPeeringConnectionRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 AcceptVpcPeeringConnection response.
 *
 * @param  response  Response to parse.
 */
void AcceptVpcPeeringConnectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AcceptVpcPeeringConnectionResponsePrivate
 *
 * @brief  Private implementation for AcceptVpcPeeringConnectionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AcceptVpcPeeringConnectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AcceptVpcPeeringConnectionResponse instance.
 */
AcceptVpcPeeringConnectionResponsePrivate::AcceptVpcPeeringConnectionResponsePrivate(
    AcceptVpcPeeringConnectionQueueResponse * const q) : AcceptVpcPeeringConnectionPrivate(q)
{

}

/**
 * @brief  Parse an EC2 AcceptVpcPeeringConnectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AcceptVpcPeeringConnectionResponsePrivate::AcceptVpcPeeringConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptVpcPeeringConnectionResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
