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

#include "listassociatedstacksrequest.h"
#include "listassociatedstacksrequest_p.h"
#include "listassociatedstacksresponse.h"
#include "appstreamrequest_p.h"

namespace AWS {
namespace AppStream {

/**
 * @class  ListAssociatedStacksRequest
 *
 * @brief  Implements AppStream ListAssociatedStacks requests.
 *
 * @see    AppStreamClient::listAssociatedStacks
 */

/**
 * @brief  Constructs a new ListAssociatedStacksRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListAssociatedStacksRequest::ListAssociatedStacksRequest(const ListAssociatedStacksRequest &other)
    : AppStreamRequest(new ListAssociatedStacksRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListAssociatedStacksRequest object.
 */
ListAssociatedStacksRequest::ListAssociatedStacksRequest()
    : AppStreamRequest(new ListAssociatedStacksRequestPrivate(AppStreamRequest::ListAssociatedStacksAction, this))
{

}

bool ListAssociatedStacksRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListAssociatedStacksResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListAssociatedStacksResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AppStreamClient::send
 */
AwsAbstractResponse * ListAssociatedStacksRequest::response(QNetworkReply * const reply) const
{
    return new ListAssociatedStacksResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListAssociatedStacksRequestPrivate
 *
 * @brief  Private implementation for ListAssociatedStacksRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAssociatedStacksRequestPrivate object.
 *
 * @param  action  AppStream action being performed.
 * @param  q       Pointer to this object's public ListAssociatedStacksRequest instance.
 */
ListAssociatedStacksRequestPrivate::ListAssociatedStacksRequestPrivate(
    const AppStreamRequest::Action action, ListAssociatedStacksRequest * const q)
    : ListAssociatedStacksPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListAssociatedStacksRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListAssociatedStacksRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListAssociatedStacksRequest instance.
 */
ListAssociatedStacksRequestPrivate::ListAssociatedStacksRequestPrivate(
    const ListAssociatedStacksRequestPrivate &other, ListAssociatedStacksRequest * const q)
    : ListAssociatedStacksPrivate(other, q)
{

}

} // namespace AppStream
} // namespace AWS
