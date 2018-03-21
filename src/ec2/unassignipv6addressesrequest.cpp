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

#include "unassignipv6addressesrequest.h"
#include "unassignipv6addressesrequest_p.h"
#include "unassignipv6addressesresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  UnassignIpv6AddressesRequest
 *
 * @brief  Implements EC2 UnassignIpv6Addresses requests.
 *
 * @see    EC2Client::unassignIpv6Addresses
 */

/**
 * @brief  Constructs a new UnassignIpv6AddressesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UnassignIpv6AddressesResponse::UnassignIpv6AddressesResponse(

/**
 * @brief  Constructs a new UnassignIpv6AddressesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UnassignIpv6AddressesRequest::UnassignIpv6AddressesRequest(const UnassignIpv6AddressesRequest &other)
    : EC2Request(new UnassignIpv6AddressesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UnassignIpv6AddressesRequest object.
 */
UnassignIpv6AddressesRequest::UnassignIpv6AddressesRequest()
    : EC2Request(new UnassignIpv6AddressesRequestPrivate(EC2Request::UnassignIpv6AddressesAction, this))
{

}

bool UnassignIpv6AddressesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UnassignIpv6AddressesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UnassignIpv6AddressesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * UnassignIpv6AddressesRequest::response(QNetworkReply * const reply) const
{
    return new UnassignIpv6AddressesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UnassignIpv6AddressesRequestPrivate
 *
 * @brief  Private implementation for UnassignIpv6AddressesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UnassignIpv6AddressesRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public UnassignIpv6AddressesRequest instance.
 */
UnassignIpv6AddressesRequestPrivate::UnassignIpv6AddressesRequestPrivate(
    const EC2Request::Action action, UnassignIpv6AddressesRequest * const q)
    : UnassignIpv6AddressesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UnassignIpv6AddressesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UnassignIpv6AddressesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UnassignIpv6AddressesRequest instance.
 */
UnassignIpv6AddressesRequestPrivate::UnassignIpv6AddressesRequestPrivate(
    const UnassignIpv6AddressesRequestPrivate &other, UnassignIpv6AddressesRequest * const q)
    : UnassignIpv6AddressesPrivate(other, q)
{

}
