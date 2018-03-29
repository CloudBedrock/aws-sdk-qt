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

#include "listgroupsrequest.h"
#include "listgroupsrequest_p.h"
#include "listgroupsresponse.h"
#include "resourcegroupsrequest_p.h"

namespace QtAws {
namespace ResourceGroups {

/**
 * @class  ListGroupsRequest
 *
 * @brief  Implements ResourceGroups ListGroups requests.
 *
 * @see    ResourceGroupsClient::listGroups
 */

/**
 * @brief  Constructs a new ListGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListGroupsRequest::ListGroupsRequest(const ListGroupsRequest &other)
    : ResourceGroupsRequest(new ListGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListGroupsRequest object.
 */
ListGroupsRequest::ListGroupsRequest()
    : ResourceGroupsRequest(new ListGroupsRequestPrivate(ResourceGroupsRequest::ListGroupsAction, this))
{

}

bool ListGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListGroupsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ResourceGroupsClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListGroupsRequestPrivate
 *
 * @brief  Private implementation for ListGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListGroupsRequestPrivate object.
 *
 * @param  action  ResourceGroups action being performed.
 * @param  q       Pointer to this object's public ListGroupsRequest instance.
 */
ListGroupsRequestPrivate::ListGroupsRequestPrivate(
    const ResourceGroupsRequest::Action action, ListGroupsRequest * const q)
    : ListGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListGroupsRequest instance.
 */
ListGroupsRequestPrivate::ListGroupsRequestPrivate(
    const ListGroupsRequestPrivate &other, ListGroupsRequest * const q)
    : ListGroupsPrivate(other, q)
{

}

} // namespace ResourceGroups
} // namespace QtAws
