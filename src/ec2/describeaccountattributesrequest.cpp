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

#include "describeaccountattributesrequest.h"
#include "describeaccountattributesrequest_p.h"
#include "describeaccountattributesresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeAccountAttributesRequest
 *
 * @brief  Implements EC2 DescribeAccountAttributes requests.
 *
 * @see    EC2Client::describeAccountAttributes
 */

/**
 * @brief  Constructs a new DescribeAccountAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAccountAttributesRequest::DescribeAccountAttributesRequest(const DescribeAccountAttributesRequest &other)
    : EC2Request(new DescribeAccountAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAccountAttributesRequest object.
 */
DescribeAccountAttributesRequest::DescribeAccountAttributesRequest()
    : EC2Request(new DescribeAccountAttributesRequestPrivate(EC2Request::DescribeAccountAttributesAction, this))
{

}

bool DescribeAccountAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAccountAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAccountAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeAccountAttributesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAccountAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAccountAttributesRequestPrivate
 *
 * @brief  Private implementation for DescribeAccountAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAccountAttributesRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeAccountAttributesRequest instance.
 */
DescribeAccountAttributesRequestPrivate::DescribeAccountAttributesRequestPrivate(
    const EC2Request::Action action, DescribeAccountAttributesRequest * const q)
    : DescribeAccountAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAccountAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAccountAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAccountAttributesRequest instance.
 */
DescribeAccountAttributesRequestPrivate::DescribeAccountAttributesRequestPrivate(
    const DescribeAccountAttributesRequestPrivate &other, DescribeAccountAttributesRequest * const q)
    : DescribeAccountAttributesPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
