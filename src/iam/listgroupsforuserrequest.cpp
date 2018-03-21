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

#include "listgroupsforuserrequest.h"
#include "listgroupsforuserrequest_p.h"
#include "listgroupsforuserresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  ListGroupsForUserRequest
 *
 * @brief  Implements IAM ListGroupsForUser requests.
 *
 * @see    IAMClient::listGroupsForUser
 */

/**
 * @brief  Constructs a new ListGroupsForUserRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListGroupsForUserRequest::ListGroupsForUserRequest(const ListGroupsForUserRequest &other)
    : IAMRequest(new ListGroupsForUserRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListGroupsForUserRequest object.
 */
ListGroupsForUserRequest::ListGroupsForUserRequest()
    : IAMRequest(new ListGroupsForUserRequestPrivate(IAMRequest::ListGroupsForUserAction, this))
{

}

bool ListGroupsForUserRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListGroupsForUserResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListGroupsForUserResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * ListGroupsForUserRequest::response(QNetworkReply * const reply) const
{
    return new ListGroupsForUserResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListGroupsForUserRequestPrivate
 *
 * @brief  Private implementation for ListGroupsForUserRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListGroupsForUserRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public ListGroupsForUserRequest instance.
 */
ListGroupsForUserRequestPrivate::ListGroupsForUserRequestPrivate(
    const IAMRequest::Action action, ListGroupsForUserRequest * const q)
    : ListGroupsForUserPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListGroupsForUserRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListGroupsForUserRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListGroupsForUserRequest instance.
 */
ListGroupsForUserRequestPrivate::ListGroupsForUserRequestPrivate(
    const ListGroupsForUserRequestPrivate &other, ListGroupsForUserRequest * const q)
    : ListGroupsForUserPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
