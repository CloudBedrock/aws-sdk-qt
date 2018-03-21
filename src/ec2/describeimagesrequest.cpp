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

#include "describeimagesrequest.h"
#include "describeimagesrequest_p.h"
#include "describeimagesresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeImagesRequest
 *
 * @brief  Implements EC2 DescribeImages requests.
 *
 * @see    EC2Client::describeImages
 */

/**
 * @brief  Constructs a new DescribeImagesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeImagesRequest::DescribeImagesRequest(const DescribeImagesRequest &other)
    : EC2Request(new DescribeImagesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeImagesRequest object.
 */
DescribeImagesRequest::DescribeImagesRequest()
    : EC2Request(new DescribeImagesRequestPrivate(EC2Request::DescribeImagesAction, this))
{

}

bool DescribeImagesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeImagesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeImagesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeImagesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeImagesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeImagesRequestPrivate
 *
 * @brief  Private implementation for DescribeImagesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeImagesRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeImagesRequest instance.
 */
DescribeImagesRequestPrivate::DescribeImagesRequestPrivate(
    const EC2Request::Action action, DescribeImagesRequest * const q)
    : DescribeImagesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeImagesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeImagesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeImagesRequest instance.
 */
DescribeImagesRequestPrivate::DescribeImagesRequestPrivate(
    const DescribeImagesRequestPrivate &other, DescribeImagesRequest * const q)
    : DescribeImagesPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
