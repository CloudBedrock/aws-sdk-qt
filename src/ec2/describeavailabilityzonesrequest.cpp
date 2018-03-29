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

#include "describeavailabilityzonesrequest.h"
#include "describeavailabilityzonesrequest_p.h"
#include "describeavailabilityzonesresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeAvailabilityZonesRequest
 *
 * @brief  Implements EC2 DescribeAvailabilityZones requests.
 *
 * @see    EC2Client::describeAvailabilityZones
 */

/**
 * @brief  Constructs a new DescribeAvailabilityZonesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAvailabilityZonesRequest::DescribeAvailabilityZonesRequest(const DescribeAvailabilityZonesRequest &other)
    : EC2Request(new DescribeAvailabilityZonesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAvailabilityZonesRequest object.
 */
DescribeAvailabilityZonesRequest::DescribeAvailabilityZonesRequest()
    : EC2Request(new DescribeAvailabilityZonesRequestPrivate(EC2Request::DescribeAvailabilityZonesAction, this))
{

}

bool DescribeAvailabilityZonesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAvailabilityZonesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAvailabilityZonesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeAvailabilityZonesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAvailabilityZonesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAvailabilityZonesRequestPrivate
 *
 * @brief  Private implementation for DescribeAvailabilityZonesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAvailabilityZonesRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeAvailabilityZonesRequest instance.
 */
DescribeAvailabilityZonesRequestPrivate::DescribeAvailabilityZonesRequestPrivate(
    const EC2Request::Action action, DescribeAvailabilityZonesRequest * const q)
    : DescribeAvailabilityZonesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAvailabilityZonesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAvailabilityZonesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAvailabilityZonesRequest instance.
 */
DescribeAvailabilityZonesRequestPrivate::DescribeAvailabilityZonesRequestPrivate(
    const DescribeAvailabilityZonesRequestPrivate &other, DescribeAvailabilityZonesRequest * const q)
    : DescribeAvailabilityZonesPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
