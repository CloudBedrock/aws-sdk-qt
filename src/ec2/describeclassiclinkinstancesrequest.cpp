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

#include "describeclassiclinkinstancesrequest.h"
#include "describeclassiclinkinstancesrequest_p.h"
#include "describeclassiclinkinstancesresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeClassicLinkInstancesRequest
 *
 * @brief  Implements EC2 DescribeClassicLinkInstances requests.
 *
 * @see    EC2Client::describeClassicLinkInstances
 */

/**
 * @brief  Constructs a new DescribeClassicLinkInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeClassicLinkInstancesRequest::DescribeClassicLinkInstancesRequest(const DescribeClassicLinkInstancesRequest &other)
    : EC2Request(new DescribeClassicLinkInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeClassicLinkInstancesRequest object.
 */
DescribeClassicLinkInstancesRequest::DescribeClassicLinkInstancesRequest()
    : EC2Request(new DescribeClassicLinkInstancesRequestPrivate(EC2Request::DescribeClassicLinkInstancesAction, this))
{

}

bool DescribeClassicLinkInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeClassicLinkInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeClassicLinkInstancesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * DescribeClassicLinkInstancesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeClassicLinkInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeClassicLinkInstancesRequestPrivate
 *
 * @brief  Private implementation for DescribeClassicLinkInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeClassicLinkInstancesRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeClassicLinkInstancesRequest instance.
 */
DescribeClassicLinkInstancesRequestPrivate::DescribeClassicLinkInstancesRequestPrivate(
    const EC2Request::Action action, DescribeClassicLinkInstancesRequest * const q)
    : DescribeClassicLinkInstancesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeClassicLinkInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeClassicLinkInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeClassicLinkInstancesRequest instance.
 */
DescribeClassicLinkInstancesRequestPrivate::DescribeClassicLinkInstancesRequestPrivate(
    const DescribeClassicLinkInstancesRequestPrivate &other, DescribeClassicLinkInstancesRequest * const q)
    : DescribeClassicLinkInstancesPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
