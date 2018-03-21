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

#include "describeinstancehealthrequest.h"
#include "describeinstancehealthrequest_p.h"
#include "describeinstancehealthresponse.h"
#include "elasticloadbalancingrequest_p.h"

namespace AWS {
namespace ElasticLoadBalancing {

/**
 * @class  DescribeInstanceHealthRequest
 *
 * @brief  Implements ElasticLoadBalancing DescribeInstanceHealth requests.
 *
 * @see    ElasticLoadBalancingClient::describeInstanceHealth
 */

/**
 * @brief  Constructs a new DescribeInstanceHealthResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeInstanceHealthResponse::DescribeInstanceHealthResponse(

/**
 * @brief  Constructs a new DescribeInstanceHealthRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeInstanceHealthRequest::DescribeInstanceHealthRequest(const DescribeInstanceHealthRequest &other)
    : ElasticLoadBalancingRequest(new DescribeInstanceHealthRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeInstanceHealthRequest object.
 */
DescribeInstanceHealthRequest::DescribeInstanceHealthRequest()
    : ElasticLoadBalancingRequest(new DescribeInstanceHealthRequestPrivate(ElasticLoadBalancingRequest::DescribeInstanceHealthAction, this))
{

}

bool DescribeInstanceHealthRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeInstanceHealthResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeInstanceHealthResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingClient::send
 */
AwsAbstractResponse * DescribeInstanceHealthRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInstanceHealthResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeInstanceHealthRequestPrivate
 *
 * @brief  Private implementation for DescribeInstanceHealthRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstanceHealthRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancing action being performed.
 * @param  q       Pointer to this object's public DescribeInstanceHealthRequest instance.
 */
DescribeInstanceHealthRequestPrivate::DescribeInstanceHealthRequestPrivate(
    const ElasticLoadBalancingRequest::Action action, DescribeInstanceHealthRequest * const q)
    : DescribeInstanceHealthPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstanceHealthRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeInstanceHealthRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeInstanceHealthRequest instance.
 */
DescribeInstanceHealthRequestPrivate::DescribeInstanceHealthRequestPrivate(
    const DescribeInstanceHealthRequestPrivate &other, DescribeInstanceHealthRequest * const q)
    : DescribeInstanceHealthPrivate(other, q)
{

}
