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

#include "describetasksrequest.h"
#include "describetasksrequest_p.h"
#include "describetasksresponse.h"
#include "ecsrequest_p.h"

namespace AWS {
namespace ECS {

/**
 * @class  DescribeTasksRequest
 *
 * @brief  Implements ECS DescribeTasks requests.
 *
 * @see    ECSClient::describeTasks
 */

/**
 * @brief  Constructs a new DescribeTasksRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeTasksRequest::DescribeTasksRequest(const DescribeTasksRequest &other)
    : ECSRequest(new DescribeTasksRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeTasksRequest object.
 */
DescribeTasksRequest::DescribeTasksRequest()
    : ECSRequest(new DescribeTasksRequestPrivate(ECSRequest::DescribeTasksAction, this))
{

}

bool DescribeTasksRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeTasksResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeTasksResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECSClient::send
 */
AwsAbstractResponse * DescribeTasksRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTasksResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeTasksRequestPrivate
 *
 * @brief  Private implementation for DescribeTasksRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTasksRequestPrivate object.
 *
 * @param  action  ECS action being performed.
 * @param  q       Pointer to this object's public DescribeTasksRequest instance.
 */
DescribeTasksRequestPrivate::DescribeTasksRequestPrivate(
    const ECSRequest::Action action, DescribeTasksRequest * const q)
    : DescribeTasksPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTasksRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeTasksRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeTasksRequest instance.
 */
DescribeTasksRequestPrivate::DescribeTasksRequestPrivate(
    const DescribeTasksRequestPrivate &other, DescribeTasksRequest * const q)
    : DescribeTasksPrivate(other, q)
{

}

} // namespace ECS
} // namespace AWS
