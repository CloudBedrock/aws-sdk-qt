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

#include "deleteuserrequest.h"
#include "deleteuserrequest_p.h"
#include "deleteuserresponse.h"
#include "workmailrequest_p.h"

namespace AWS {
namespace WorkMail {

/**
 * @class  DeleteUserRequest
 *
 * @brief  Implements WorkMail DeleteUser requests.
 *
 * @see    WorkMailClient::deleteUser
 */

/**
 * @brief  Constructs a new DeleteUserResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteUserResponse::DeleteUserResponse(

/**
 * @brief  Constructs a new DeleteUserRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteUserRequest::DeleteUserRequest(const DeleteUserRequest &other)
    : WorkMailRequest(new DeleteUserRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteUserRequest object.
 */
DeleteUserRequest::DeleteUserRequest()
    : WorkMailRequest(new DeleteUserRequestPrivate(WorkMailRequest::DeleteUserAction, this))
{

}

bool DeleteUserRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteUserResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteUserResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkMailClient::send
 */
AwsAbstractResponse * DeleteUserRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUserResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteUserRequestPrivate
 *
 * @brief  Private implementation for DeleteUserRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUserRequestPrivate object.
 *
 * @param  action  WorkMail action being performed.
 * @param  q       Pointer to this object's public DeleteUserRequest instance.
 */
DeleteUserRequestPrivate::DeleteUserRequestPrivate(
    const WorkMailRequest::Action action, DeleteUserRequest * const q)
    : DeleteUserPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUserRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteUserRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteUserRequest instance.
 */
DeleteUserRequestPrivate::DeleteUserRequestPrivate(
    const DeleteUserRequestPrivate &other, DeleteUserRequest * const q)
    : DeleteUserPrivate(other, q)
{

}

} // namespace WorkMail
} // namespace AWS
