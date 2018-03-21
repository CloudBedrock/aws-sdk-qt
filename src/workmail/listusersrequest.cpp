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

#include "listusersrequest.h"
#include "listusersrequest_p.h"
#include "listusersresponse.h"
#include "workmailrequest_p.h"

namespace AWS {
namespace WorkMail {

/**
 * @class  ListUsersRequest
 *
 * @brief  Implements WorkMail ListUsers requests.
 *
 * @see    WorkMailClient::listUsers
 */

/**
 * @brief  Constructs a new ListUsersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListUsersResponse::ListUsersResponse(

/**
 * @brief  Constructs a new ListUsersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListUsersRequest::ListUsersRequest(const ListUsersRequest &other)
    : WorkMailRequest(new ListUsersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListUsersRequest object.
 */
ListUsersRequest::ListUsersRequest()
    : WorkMailRequest(new ListUsersRequestPrivate(WorkMailRequest::ListUsersAction, this))
{

}

bool ListUsersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListUsersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListUsersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkMailClient::send
 */
AwsAbstractResponse * ListUsersRequest::response(QNetworkReply * const reply) const
{
    return new ListUsersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListUsersRequestPrivate
 *
 * @brief  Private implementation for ListUsersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListUsersRequestPrivate object.
 *
 * @param  action  WorkMail action being performed.
 * @param  q       Pointer to this object's public ListUsersRequest instance.
 */
ListUsersRequestPrivate::ListUsersRequestPrivate(
    const WorkMailRequest::Action action, ListUsersRequest * const q)
    : ListUsersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListUsersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListUsersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListUsersRequest instance.
 */
ListUsersRequestPrivate::ListUsersRequestPrivate(
    const ListUsersRequestPrivate &other, ListUsersRequest * const q)
    : ListUsersPrivate(other, q)
{

}

} // namespace WorkMail
} // namespace AWS
