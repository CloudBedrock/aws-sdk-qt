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

#include "describetagsrequest.h"
#include "describetagsrequest_p.h"
#include "describetagsresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/**
 * @class  DescribeTagsRequest
 *
 * @brief  Implements DirectConnect DescribeTags requests.
 *
 * @see    DirectConnectClient::describeTags
 */

/**
 * @brief  Constructs a new DescribeTagsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeTagsRequest::DescribeTagsRequest(const DescribeTagsRequest &other)
    : DirectConnectRequest(new DescribeTagsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeTagsRequest object.
 */
DescribeTagsRequest::DescribeTagsRequest()
    : DirectConnectRequest(new DescribeTagsRequestPrivate(DirectConnectRequest::DescribeTagsAction, this))
{

}

bool DescribeTagsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeTagsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeTagsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTagsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTagsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeTagsRequestPrivate
 *
 * @brief  Private implementation for DescribeTagsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTagsRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public DescribeTagsRequest instance.
 */
DescribeTagsRequestPrivate::DescribeTagsRequestPrivate(
    const DirectConnectRequest::Action action, DescribeTagsRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTagsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeTagsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeTagsRequest instance.
 */
DescribeTagsRequestPrivate::DescribeTagsRequestPrivate(
    const DescribeTagsRequestPrivate &other, DescribeTagsRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
