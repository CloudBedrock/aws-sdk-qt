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

#include "getloadbalancerrequest.h"
#include "getloadbalancerrequest_p.h"
#include "getloadbalancerresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  GetLoadBalancerRequest
 *
 * @brief  Implements Lightsail GetLoadBalancer requests.
 *
 * @see    LightsailClient::getLoadBalancer
 */

/**
 * @brief  Constructs a new GetLoadBalancerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetLoadBalancerRequest::GetLoadBalancerRequest(const GetLoadBalancerRequest &other)
    : LightsailRequest(new GetLoadBalancerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetLoadBalancerRequest object.
 */
GetLoadBalancerRequest::GetLoadBalancerRequest()
    : LightsailRequest(new GetLoadBalancerRequestPrivate(LightsailRequest::GetLoadBalancerAction, this))
{

}

bool GetLoadBalancerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetLoadBalancerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetLoadBalancerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * GetLoadBalancerRequest::response(QNetworkReply * const reply) const
{
    return new GetLoadBalancerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetLoadBalancerRequestPrivate
 *
 * @brief  Private implementation for GetLoadBalancerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetLoadBalancerRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public GetLoadBalancerRequest instance.
 */
GetLoadBalancerRequestPrivate::GetLoadBalancerRequestPrivate(
    const LightsailRequest::Action action, GetLoadBalancerRequest * const q)
    : GetLoadBalancerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetLoadBalancerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetLoadBalancerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetLoadBalancerRequest instance.
 */
GetLoadBalancerRequestPrivate::GetLoadBalancerRequestPrivate(
    const GetLoadBalancerRequestPrivate &other, GetLoadBalancerRequest * const q)
    : GetLoadBalancerPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
