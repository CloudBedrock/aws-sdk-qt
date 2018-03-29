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

#include "detachvpngatewayrequest.h"
#include "detachvpngatewayrequest_p.h"
#include "detachvpngatewayresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DetachVpnGatewayRequest
 *
 * @brief  Implements EC2 DetachVpnGateway requests.
 *
 * @see    EC2Client::detachVpnGateway
 */

/**
 * @brief  Constructs a new DetachVpnGatewayRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DetachVpnGatewayRequest::DetachVpnGatewayRequest(const DetachVpnGatewayRequest &other)
    : EC2Request(new DetachVpnGatewayRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DetachVpnGatewayRequest object.
 */
DetachVpnGatewayRequest::DetachVpnGatewayRequest()
    : EC2Request(new DetachVpnGatewayRequestPrivate(EC2Request::DetachVpnGatewayAction, this))
{

}

bool DetachVpnGatewayRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DetachVpnGatewayResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DetachVpnGatewayResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DetachVpnGatewayRequest::response(QNetworkReply * const reply) const
{
    return new DetachVpnGatewayResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DetachVpnGatewayRequestPrivate
 *
 * @brief  Private implementation for DetachVpnGatewayRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachVpnGatewayRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DetachVpnGatewayRequest instance.
 */
DetachVpnGatewayRequestPrivate::DetachVpnGatewayRequestPrivate(
    const EC2Request::Action action, DetachVpnGatewayRequest * const q)
    : DetachVpnGatewayPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DetachVpnGatewayRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DetachVpnGatewayRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DetachVpnGatewayRequest instance.
 */
DetachVpnGatewayRequestPrivate::DetachVpnGatewayRequestPrivate(
    const DetachVpnGatewayRequestPrivate &other, DetachVpnGatewayRequest * const q)
    : DetachVpnGatewayPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
