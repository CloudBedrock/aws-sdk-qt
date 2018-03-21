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

#include "describeaccountlimitsrequest.h"
#include "describeaccountlimitsrequest_p.h"
#include "describeaccountlimitsresponse.h"
#include "cloudformationrequest_p.h"

namespace AWS {
namespace CloudFormation {

/**
 * @class  DescribeAccountLimitsRequest
 *
 * @brief  Implements CloudFormation DescribeAccountLimits requests.
 *
 * @see    CloudFormationClient::describeAccountLimits
 */

/**
 * @brief  Constructs a new DescribeAccountLimitsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAccountLimitsRequest::DescribeAccountLimitsRequest(const DescribeAccountLimitsRequest &other)
    : CloudFormationRequest(new DescribeAccountLimitsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAccountLimitsRequest object.
 */
DescribeAccountLimitsRequest::DescribeAccountLimitsRequest()
    : CloudFormationRequest(new DescribeAccountLimitsRequestPrivate(CloudFormationRequest::DescribeAccountLimitsAction, this))
{

}

bool DescribeAccountLimitsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAccountLimitsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAccountLimitsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
AwsAbstractResponse * DescribeAccountLimitsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAccountLimitsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAccountLimitsRequestPrivate
 *
 * @brief  Private implementation for DescribeAccountLimitsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAccountLimitsRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public DescribeAccountLimitsRequest instance.
 */
DescribeAccountLimitsRequestPrivate::DescribeAccountLimitsRequestPrivate(
    const CloudFormationRequest::Action action, DescribeAccountLimitsRequest * const q)
    : DescribeAccountLimitsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAccountLimitsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAccountLimitsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAccountLimitsRequest instance.
 */
DescribeAccountLimitsRequestPrivate::DescribeAccountLimitsRequestPrivate(
    const DescribeAccountLimitsRequestPrivate &other, DescribeAccountLimitsRequest * const q)
    : DescribeAccountLimitsPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace AWS
