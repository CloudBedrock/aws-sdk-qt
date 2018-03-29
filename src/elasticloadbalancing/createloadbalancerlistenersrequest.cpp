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

#include "createloadbalancerlistenersrequest.h"
#include "createloadbalancerlistenersrequest_p.h"
#include "createloadbalancerlistenersresponse.h"
#include "elasticloadbalancingrequest_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

/**
 * @class  CreateLoadBalancerListenersRequest
 *
 * @brief  Implements ElasticLoadBalancing CreateLoadBalancerListeners requests.
 *
 * @see    ElasticLoadBalancingClient::createLoadBalancerListeners
 */

/**
 * @brief  Constructs a new CreateLoadBalancerListenersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateLoadBalancerListenersRequest::CreateLoadBalancerListenersRequest(const CreateLoadBalancerListenersRequest &other)
    : ElasticLoadBalancingRequest(new CreateLoadBalancerListenersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateLoadBalancerListenersRequest object.
 */
CreateLoadBalancerListenersRequest::CreateLoadBalancerListenersRequest()
    : ElasticLoadBalancingRequest(new CreateLoadBalancerListenersRequestPrivate(ElasticLoadBalancingRequest::CreateLoadBalancerListenersAction, this))
{

}

bool CreateLoadBalancerListenersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateLoadBalancerListenersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateLoadBalancerListenersResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticLoadBalancingClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLoadBalancerListenersRequest::response(QNetworkReply * const reply) const
{
    return new CreateLoadBalancerListenersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateLoadBalancerListenersRequestPrivate
 *
 * @brief  Private implementation for CreateLoadBalancerListenersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLoadBalancerListenersRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancing action being performed.
 * @param  q       Pointer to this object's public CreateLoadBalancerListenersRequest instance.
 */
CreateLoadBalancerListenersRequestPrivate::CreateLoadBalancerListenersRequestPrivate(
    const ElasticLoadBalancingRequest::Action action, CreateLoadBalancerListenersRequest * const q)
    : ElasticLoadBalancingRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateLoadBalancerListenersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateLoadBalancerListenersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateLoadBalancerListenersRequest instance.
 */
CreateLoadBalancerListenersRequestPrivate::CreateLoadBalancerListenersRequestPrivate(
    const CreateLoadBalancerListenersRequestPrivate &other, CreateLoadBalancerListenersRequest * const q)
    : ElasticLoadBalancingRequestPrivate(other, q)
{

}

} // namespace ElasticLoadBalancing
} // namespace QtAws
