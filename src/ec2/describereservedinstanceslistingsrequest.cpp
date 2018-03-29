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

#include "describereservedinstanceslistingsrequest.h"
#include "describereservedinstanceslistingsrequest_p.h"
#include "describereservedinstanceslistingsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeReservedInstancesListingsRequest
 *
 * @brief  Implements EC2 DescribeReservedInstancesListings requests.
 *
 * @see    EC2Client::describeReservedInstancesListings
 */

/**
 * @brief  Constructs a new DescribeReservedInstancesListingsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeReservedInstancesListingsRequest::DescribeReservedInstancesListingsRequest(const DescribeReservedInstancesListingsRequest &other)
    : EC2Request(new DescribeReservedInstancesListingsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeReservedInstancesListingsRequest object.
 */
DescribeReservedInstancesListingsRequest::DescribeReservedInstancesListingsRequest()
    : EC2Request(new DescribeReservedInstancesListingsRequestPrivate(EC2Request::DescribeReservedInstancesListingsAction, this))
{

}

bool DescribeReservedInstancesListingsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeReservedInstancesListingsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeReservedInstancesListingsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReservedInstancesListingsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReservedInstancesListingsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeReservedInstancesListingsRequestPrivate
 *
 * @brief  Private implementation for DescribeReservedInstancesListingsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReservedInstancesListingsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeReservedInstancesListingsRequest instance.
 */
DescribeReservedInstancesListingsRequestPrivate::DescribeReservedInstancesListingsRequestPrivate(
    const EC2Request::Action action, DescribeReservedInstancesListingsRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReservedInstancesListingsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeReservedInstancesListingsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeReservedInstancesListingsRequest instance.
 */
DescribeReservedInstancesListingsRequestPrivate::DescribeReservedInstancesListingsRequestPrivate(
    const DescribeReservedInstancesListingsRequestPrivate &other, DescribeReservedInstancesListingsRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
