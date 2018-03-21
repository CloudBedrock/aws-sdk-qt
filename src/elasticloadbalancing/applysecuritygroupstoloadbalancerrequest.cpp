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

#include "applysecuritygroupstoloadbalancerrequest.h"
#include "applysecuritygroupstoloadbalancerrequest_p.h"
#include "applysecuritygroupstoloadbalancerresponse.h"
#include "elasticloadbalancingrequest_p.h"

namespace AWS {
namespace ElasticLoadBalancing {

/**
 * @class  ApplySecurityGroupsToLoadBalancerRequest
 *
 * @brief  Implements ElasticLoadBalancing ApplySecurityGroupsToLoadBalancer requests.
 *
 * @see    ElasticLoadBalancingClient::applySecurityGroupsToLoadBalancer
 */

/**
 * @brief  Constructs a new ApplySecurityGroupsToLoadBalancerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ApplySecurityGroupsToLoadBalancerResponse::ApplySecurityGroupsToLoadBalancerResponse(

/**
 * @brief  Constructs a new ApplySecurityGroupsToLoadBalancerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ApplySecurityGroupsToLoadBalancerRequest::ApplySecurityGroupsToLoadBalancerRequest(const ApplySecurityGroupsToLoadBalancerRequest &other)
    : ElasticLoadBalancingRequest(new ApplySecurityGroupsToLoadBalancerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ApplySecurityGroupsToLoadBalancerRequest object.
 */
ApplySecurityGroupsToLoadBalancerRequest::ApplySecurityGroupsToLoadBalancerRequest()
    : ElasticLoadBalancingRequest(new ApplySecurityGroupsToLoadBalancerRequestPrivate(ElasticLoadBalancingRequest::ApplySecurityGroupsToLoadBalancerAction, this))
{

}

bool ApplySecurityGroupsToLoadBalancerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ApplySecurityGroupsToLoadBalancerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ApplySecurityGroupsToLoadBalancerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingClient::send
 */
AwsAbstractResponse * ApplySecurityGroupsToLoadBalancerRequest::response(QNetworkReply * const reply) const
{
    return new ApplySecurityGroupsToLoadBalancerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ApplySecurityGroupsToLoadBalancerRequestPrivate
 *
 * @brief  Private implementation for ApplySecurityGroupsToLoadBalancerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ApplySecurityGroupsToLoadBalancerRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancing action being performed.
 * @param  q       Pointer to this object's public ApplySecurityGroupsToLoadBalancerRequest instance.
 */
ApplySecurityGroupsToLoadBalancerRequestPrivate::ApplySecurityGroupsToLoadBalancerRequestPrivate(
    const ElasticLoadBalancingRequest::Action action, ApplySecurityGroupsToLoadBalancerRequest * const q)
    : ApplySecurityGroupsToLoadBalancerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ApplySecurityGroupsToLoadBalancerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ApplySecurityGroupsToLoadBalancerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ApplySecurityGroupsToLoadBalancerRequest instance.
 */
ApplySecurityGroupsToLoadBalancerRequestPrivate::ApplySecurityGroupsToLoadBalancerRequestPrivate(
    const ApplySecurityGroupsToLoadBalancerRequestPrivate &other, ApplySecurityGroupsToLoadBalancerRequest * const q)
    : ApplySecurityGroupsToLoadBalancerPrivate(other, q)
{

}
