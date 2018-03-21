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

#include "describejobrequest.h"
#include "describejobrequest_p.h"
#include "describejobresponse.h"
#include "glacierrequest_p.h"

namespace AWS {
namespace Glacier {

/**
 * @class  DescribeJobRequest
 *
 * @brief  Implements Glacier DescribeJob requests.
 *
 * @see    GlacierClient::describeJob
 */

/**
 * @brief  Constructs a new DescribeJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeJobRequest::DescribeJobRequest(const DescribeJobRequest &other)
    : GlacierRequest(new DescribeJobRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeJobRequest object.
 */
DescribeJobRequest::DescribeJobRequest()
    : GlacierRequest(new DescribeJobRequestPrivate(GlacierRequest::DescribeJobAction, this))
{

}

bool DescribeJobRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeJobResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlacierClient::send
 */
AwsAbstractResponse * DescribeJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeJobResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeJobRequestPrivate
 *
 * @brief  Private implementation for DescribeJobRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeJobRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public DescribeJobRequest instance.
 */
DescribeJobRequestPrivate::DescribeJobRequestPrivate(
    const GlacierRequest::Action action, DescribeJobRequest * const q)
    : DescribeJobPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeJobRequest instance.
 */
DescribeJobRequestPrivate::DescribeJobRequestPrivate(
    const DescribeJobRequestPrivate &other, DescribeJobRequest * const q)
    : DescribeJobPrivate(other, q)
{

}

} // namespace Glacier
} // namespace AWS
