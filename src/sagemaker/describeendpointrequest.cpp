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

#include "describeendpointrequest.h"
#include "describeendpointrequest_p.h"
#include "describeendpointresponse.h"
#include "sagemakerrequest_p.h"

namespace AWS {
namespace SageMaker {

/**
 * @class  DescribeEndpointRequest
 *
 * @brief  Implements SageMaker DescribeEndpoint requests.
 *
 * @see    SageMakerClient::describeEndpoint
 */

/**
 * @brief  Constructs a new DescribeEndpointRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEndpointRequest::DescribeEndpointRequest(const DescribeEndpointRequest &other)
    : SageMakerRequest(new DescribeEndpointRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeEndpointRequest object.
 */
DescribeEndpointRequest::DescribeEndpointRequest()
    : SageMakerRequest(new DescribeEndpointRequestPrivate(SageMakerRequest::DescribeEndpointAction, this))
{

}

bool DescribeEndpointRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeEndpointResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEndpointResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
AwsAbstractResponse * DescribeEndpointRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEndpointResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeEndpointRequestPrivate
 *
 * @brief  Private implementation for DescribeEndpointRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEndpointRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public DescribeEndpointRequest instance.
 */
DescribeEndpointRequestPrivate::DescribeEndpointRequestPrivate(
    const SageMakerRequest::Action action, DescribeEndpointRequest * const q)
    : DescribeEndpointPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEndpointRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEndpointRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEndpointRequest instance.
 */
DescribeEndpointRequestPrivate::DescribeEndpointRequestPrivate(
    const DescribeEndpointRequestPrivate &other, DescribeEndpointRequest * const q)
    : DescribeEndpointPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace AWS
