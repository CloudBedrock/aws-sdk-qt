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

#include "deleteloadbalancerlistenersrequest.h"
#include "deleteloadbalancerlistenersrequest_p.h"
#include "deleteloadbalancerlistenersresponse.h"
#include "elasticloadbalancingrequest_p.h"

namespace AWS {
namespace ElasticLoadBalancing {

/**
 * @class  DeleteLoadBalancerListenersRequest
 *
 * @brief  Implements ElasticLoadBalancing DeleteLoadBalancerListeners requests.
 *
 * @see    ElasticLoadBalancingClient::deleteLoadBalancerListeners
 */

/**
 * @brief  Constructs a new DeleteLoadBalancerListenersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteLoadBalancerListenersRequest::DeleteLoadBalancerListenersRequest(const DeleteLoadBalancerListenersRequest &other)
    : ElasticLoadBalancingRequest(new DeleteLoadBalancerListenersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteLoadBalancerListenersRequest object.
 */
DeleteLoadBalancerListenersRequest::DeleteLoadBalancerListenersRequest()
    : ElasticLoadBalancingRequest(new DeleteLoadBalancerListenersRequestPrivate(ElasticLoadBalancingRequest::DeleteLoadBalancerListenersAction, this))
{

}

bool DeleteLoadBalancerListenersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteLoadBalancerListenersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteLoadBalancerListenersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingClient::send
 */
AwsAbstractResponse * DeleteLoadBalancerListenersRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLoadBalancerListenersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteLoadBalancerListenersRequestPrivate
 *
 * @brief  Private implementation for DeleteLoadBalancerListenersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLoadBalancerListenersRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancing action being performed.
 * @param  q       Pointer to this object's public DeleteLoadBalancerListenersRequest instance.
 */
DeleteLoadBalancerListenersRequestPrivate::DeleteLoadBalancerListenersRequestPrivate(
    const ElasticLoadBalancingRequest::Action action, DeleteLoadBalancerListenersRequest * const q)
    : DeleteLoadBalancerListenersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLoadBalancerListenersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteLoadBalancerListenersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteLoadBalancerListenersRequest instance.
 */
DeleteLoadBalancerListenersRequestPrivate::DeleteLoadBalancerListenersRequestPrivate(
    const DeleteLoadBalancerListenersRequestPrivate &other, DeleteLoadBalancerListenersRequest * const q)
    : DeleteLoadBalancerListenersPrivate(other, q)
{

}

} // namespace ElasticLoadBalancing
} // namespace AWS
