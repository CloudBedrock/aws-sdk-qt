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

#include "createloadbalancerrequest.h"
#include "createloadbalancerrequest_p.h"
#include "createloadbalancerresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/**
 * @class  CreateLoadBalancerRequest
 *
 * @brief  Implements ElasticLoadBalancingv2 CreateLoadBalancer requests.
 *
 * @see    ElasticLoadBalancingv2Client::createLoadBalancer
 */

/**
 * @brief  Constructs a new CreateLoadBalancerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateLoadBalancerRequest::CreateLoadBalancerRequest(const CreateLoadBalancerRequest &other)
    : ElasticLoadBalancingv2Request(new CreateLoadBalancerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateLoadBalancerRequest object.
 */
CreateLoadBalancerRequest::CreateLoadBalancerRequest()
    : ElasticLoadBalancingv2Request(new CreateLoadBalancerRequestPrivate(ElasticLoadBalancingv2Request::CreateLoadBalancerAction, this))
{

}

bool CreateLoadBalancerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateLoadBalancerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateLoadBalancerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingv2Client::send
 */
AwsAbstractResponse * CreateLoadBalancerRequest::response(QNetworkReply * const reply) const
{
    return new CreateLoadBalancerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateLoadBalancerRequestPrivate
 *
 * @brief  Private implementation for CreateLoadBalancerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLoadBalancerRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancingv2 action being performed.
 * @param  q       Pointer to this object's public CreateLoadBalancerRequest instance.
 */
CreateLoadBalancerRequestPrivate::CreateLoadBalancerRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, CreateLoadBalancerRequest * const q)
    : CreateLoadBalancerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateLoadBalancerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateLoadBalancerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateLoadBalancerRequest instance.
 */
CreateLoadBalancerRequestPrivate::CreateLoadBalancerRequestPrivate(
    const CreateLoadBalancerRequestPrivate &other, CreateLoadBalancerRequest * const q)
    : CreateLoadBalancerPrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
