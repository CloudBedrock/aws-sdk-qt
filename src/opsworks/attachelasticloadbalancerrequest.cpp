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

#include "attachelasticloadbalancerrequest.h"
#include "attachelasticloadbalancerrequest_p.h"
#include "attachelasticloadbalancerresponse.h"
#include "opsworksrequest_p.h"

namespace QtAws {
namespace OpsWorks {

/**
 * @class  AttachElasticLoadBalancerRequest
 *
 * @brief  Implements OpsWorks AttachElasticLoadBalancer requests.
 *
 * @see    OpsWorksClient::attachElasticLoadBalancer
 */

/**
 * @brief  Constructs a new AttachElasticLoadBalancerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AttachElasticLoadBalancerRequest::AttachElasticLoadBalancerRequest(const AttachElasticLoadBalancerRequest &other)
    : OpsWorksRequest(new AttachElasticLoadBalancerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AttachElasticLoadBalancerRequest object.
 */
AttachElasticLoadBalancerRequest::AttachElasticLoadBalancerRequest()
    : OpsWorksRequest(new AttachElasticLoadBalancerRequestPrivate(OpsWorksRequest::AttachElasticLoadBalancerAction, this))
{

}

bool AttachElasticLoadBalancerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AttachElasticLoadBalancerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AttachElasticLoadBalancerResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
QtAws::Core::AwsAbstractResponse * AttachElasticLoadBalancerRequest::response(QNetworkReply * const reply) const
{
    return new AttachElasticLoadBalancerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AttachElasticLoadBalancerRequestPrivate
 *
 * @brief  Private implementation for AttachElasticLoadBalancerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachElasticLoadBalancerRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public AttachElasticLoadBalancerRequest instance.
 */
AttachElasticLoadBalancerRequestPrivate::AttachElasticLoadBalancerRequestPrivate(
    const OpsWorksRequest::Action action, AttachElasticLoadBalancerRequest * const q)
    : AttachElasticLoadBalancerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AttachElasticLoadBalancerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AttachElasticLoadBalancerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AttachElasticLoadBalancerRequest instance.
 */
AttachElasticLoadBalancerRequestPrivate::AttachElasticLoadBalancerRequestPrivate(
    const AttachElasticLoadBalancerRequestPrivate &other, AttachElasticLoadBalancerRequest * const q)
    : AttachElasticLoadBalancerPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace QtAws
