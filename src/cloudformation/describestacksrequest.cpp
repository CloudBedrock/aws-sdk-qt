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

#include "describestacksrequest.h"
#include "describestacksrequest_p.h"
#include "describestacksresponse.h"
#include "cloudformationrequest_p.h"

namespace AWS {
namespace CloudFormation {

/**
 * @class  DescribeStacksRequest
 *
 * @brief  Implements CloudFormation DescribeStacks requests.
 *
 * @see    CloudFormationClient::describeStacks
 */

/**
 * @brief  Constructs a new DescribeStacksRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeStacksRequest::DescribeStacksRequest(const DescribeStacksRequest &other)
    : CloudFormationRequest(new DescribeStacksRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeStacksRequest object.
 */
DescribeStacksRequest::DescribeStacksRequest()
    : CloudFormationRequest(new DescribeStacksRequestPrivate(CloudFormationRequest::DescribeStacksAction, this))
{

}

bool DescribeStacksRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeStacksResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeStacksResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
AwsAbstractResponse * DescribeStacksRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStacksResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeStacksRequestPrivate
 *
 * @brief  Private implementation for DescribeStacksRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStacksRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public DescribeStacksRequest instance.
 */
DescribeStacksRequestPrivate::DescribeStacksRequestPrivate(
    const CloudFormationRequest::Action action, DescribeStacksRequest * const q)
    : DescribeStacksPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStacksRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeStacksRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeStacksRequest instance.
 */
DescribeStacksRequestPrivate::DescribeStacksRequestPrivate(
    const DescribeStacksRequestPrivate &other, DescribeStacksRequest * const q)
    : DescribeStacksPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace AWS
