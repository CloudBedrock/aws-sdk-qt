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

#include "describeresizerequest.h"
#include "describeresizerequest_p.h"
#include "describeresizeresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  DescribeResizeRequest
 *
 * @brief  Implements Redshift DescribeResize requests.
 *
 * @see    RedshiftClient::describeResize
 */

/**
 * @brief  Constructs a new DescribeResizeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeResizeResponse::DescribeResizeResponse(

/**
 * @brief  Constructs a new DescribeResizeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeResizeRequest::DescribeResizeRequest(const DescribeResizeRequest &other)
    : RedshiftRequest(new DescribeResizeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeResizeRequest object.
 */
DescribeResizeRequest::DescribeResizeRequest()
    : RedshiftRequest(new DescribeResizeRequestPrivate(RedshiftRequest::DescribeResizeAction, this))
{

}

bool DescribeResizeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeResizeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeResizeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * DescribeResizeRequest::response(QNetworkReply * const reply) const
{
    return new DescribeResizeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeResizeRequestPrivate
 *
 * @brief  Private implementation for DescribeResizeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeResizeRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public DescribeResizeRequest instance.
 */
DescribeResizeRequestPrivate::DescribeResizeRequestPrivate(
    const RedshiftRequest::Action action, DescribeResizeRequest * const q)
    : DescribeResizePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeResizeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeResizeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeResizeRequest instance.
 */
DescribeResizeRequestPrivate::DescribeResizeRequestPrivate(
    const DescribeResizeRequestPrivate &other, DescribeResizeRequest * const q)
    : DescribeResizePrivate(other, q)
{

}

} // namespace Redshift
} // namespace AWS
