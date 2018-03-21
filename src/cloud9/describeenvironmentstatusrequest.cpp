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

#include "describeenvironmentstatusrequest.h"
#include "describeenvironmentstatusrequest_p.h"
#include "describeenvironmentstatusresponse.h"
#include "cloud9request_p.h"

namespace AWS {
namespace Cloud9 {

/**
 * @class  DescribeEnvironmentStatusRequest
 *
 * @brief  Implements Cloud9 DescribeEnvironmentStatus requests.
 *
 * @see    Cloud9Client::describeEnvironmentStatus
 */

/**
 * @brief  Constructs a new DescribeEnvironmentStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEnvironmentStatusResponse::DescribeEnvironmentStatusResponse(

/**
 * @brief  Constructs a new DescribeEnvironmentStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEnvironmentStatusRequest::DescribeEnvironmentStatusRequest(const DescribeEnvironmentStatusRequest &other)
    : Cloud9Request(new DescribeEnvironmentStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeEnvironmentStatusRequest object.
 */
DescribeEnvironmentStatusRequest::DescribeEnvironmentStatusRequest()
    : Cloud9Request(new DescribeEnvironmentStatusRequestPrivate(Cloud9Request::DescribeEnvironmentStatusAction, this))
{

}

bool DescribeEnvironmentStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeEnvironmentStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEnvironmentStatusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Cloud9Client::send
 */
AwsAbstractResponse * DescribeEnvironmentStatusRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEnvironmentStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeEnvironmentStatusRequestPrivate
 *
 * @brief  Private implementation for DescribeEnvironmentStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEnvironmentStatusRequestPrivate object.
 *
 * @param  action  Cloud9 action being performed.
 * @param  q       Pointer to this object's public DescribeEnvironmentStatusRequest instance.
 */
DescribeEnvironmentStatusRequestPrivate::DescribeEnvironmentStatusRequestPrivate(
    const Cloud9Request::Action action, DescribeEnvironmentStatusRequest * const q)
    : DescribeEnvironmentStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEnvironmentStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEnvironmentStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEnvironmentStatusRequest instance.
 */
DescribeEnvironmentStatusRequestPrivate::DescribeEnvironmentStatusRequestPrivate(
    const DescribeEnvironmentStatusRequestPrivate &other, DescribeEnvironmentStatusRequest * const q)
    : DescribeEnvironmentStatusPrivate(other, q)
{

}
