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

#include "describeimagebuildersrequest.h"
#include "describeimagebuildersrequest_p.h"
#include "describeimagebuildersresponse.h"
#include "appstreamrequest_p.h"

namespace AWS {
namespace AppStream {

/**
 * @class  DescribeImageBuildersRequest
 *
 * @brief  Implements AppStream DescribeImageBuilders requests.
 *
 * @see    AppStreamClient::describeImageBuilders
 */

/**
 * @brief  Constructs a new DescribeImageBuildersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeImageBuildersResponse::DescribeImageBuildersResponse(

/**
 * @brief  Constructs a new DescribeImageBuildersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeImageBuildersRequest::DescribeImageBuildersRequest(const DescribeImageBuildersRequest &other)
    : AppStreamRequest(new DescribeImageBuildersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeImageBuildersRequest object.
 */
DescribeImageBuildersRequest::DescribeImageBuildersRequest()
    : AppStreamRequest(new DescribeImageBuildersRequestPrivate(AppStreamRequest::DescribeImageBuildersAction, this))
{

}

bool DescribeImageBuildersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeImageBuildersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeImageBuildersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AppStreamClient::send
 */
AwsAbstractResponse * DescribeImageBuildersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeImageBuildersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeImageBuildersRequestPrivate
 *
 * @brief  Private implementation for DescribeImageBuildersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeImageBuildersRequestPrivate object.
 *
 * @param  action  AppStream action being performed.
 * @param  q       Pointer to this object's public DescribeImageBuildersRequest instance.
 */
DescribeImageBuildersRequestPrivate::DescribeImageBuildersRequestPrivate(
    const AppStreamRequest::Action action, DescribeImageBuildersRequest * const q)
    : DescribeImageBuildersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeImageBuildersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeImageBuildersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeImageBuildersRequest instance.
 */
DescribeImageBuildersRequestPrivate::DescribeImageBuildersRequestPrivate(
    const DescribeImageBuildersRequestPrivate &other, DescribeImageBuildersRequest * const q)
    : DescribeImageBuildersPrivate(other, q)
{

}
