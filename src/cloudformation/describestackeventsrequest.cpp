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

#include "describestackeventsrequest.h"
#include "describestackeventsrequest_p.h"
#include "describestackeventsresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/**
 * @class  DescribeStackEventsRequest
 *
 * @brief  Implements CloudFormation DescribeStackEvents requests.
 *
 * @see    CloudFormationClient::describeStackEvents
 */

/**
 * @brief  Constructs a new DescribeStackEventsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeStackEventsRequest::DescribeStackEventsRequest(const DescribeStackEventsRequest &other)
    : CloudFormationRequest(new DescribeStackEventsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeStackEventsRequest object.
 */
DescribeStackEventsRequest::DescribeStackEventsRequest()
    : CloudFormationRequest(new DescribeStackEventsRequestPrivate(CloudFormationRequest::DescribeStackEventsAction, this))
{

}

bool DescribeStackEventsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeStackEventsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeStackEventsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeStackEventsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStackEventsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeStackEventsRequestPrivate
 *
 * @brief  Private implementation for DescribeStackEventsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStackEventsRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public DescribeStackEventsRequest instance.
 */
DescribeStackEventsRequestPrivate::DescribeStackEventsRequestPrivate(
    const CloudFormationRequest::Action action, DescribeStackEventsRequest * const q)
    : CloudFormationRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStackEventsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeStackEventsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeStackEventsRequest instance.
 */
DescribeStackEventsRequestPrivate::DescribeStackEventsRequestPrivate(
    const DescribeStackEventsRequestPrivate &other, DescribeStackEventsRequest * const q)
    : CloudFormationRequestPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
