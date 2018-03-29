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

#include "updateuserrequest.h"
#include "updateuserrequest_p.h"
#include "updateuserresponse.h"
#include "workdocsrequest_p.h"

namespace QtAws {
namespace WorkDocs {

/**
 * @class  UpdateUserRequest
 *
 * @brief  Implements WorkDocs UpdateUser requests.
 *
 * @see    WorkDocsClient::updateUser
 */

/**
 * @brief  Constructs a new UpdateUserRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateUserRequest::UpdateUserRequest(const UpdateUserRequest &other)
    : WorkDocsRequest(new UpdateUserRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateUserRequest object.
 */
UpdateUserRequest::UpdateUserRequest()
    : WorkDocsRequest(new UpdateUserRequestPrivate(WorkDocsRequest::UpdateUserAction, this))
{

}

bool UpdateUserRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateUserResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateUserResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
AwsAbstractResponse * UpdateUserRequest::response(QNetworkReply * const reply) const
{
    return new UpdateUserResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateUserRequestPrivate
 *
 * @brief  Private implementation for UpdateUserRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateUserRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public UpdateUserRequest instance.
 */
UpdateUserRequestPrivate::UpdateUserRequestPrivate(
    const WorkDocsRequest::Action action, UpdateUserRequest * const q)
    : UpdateUserPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateUserRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateUserRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateUserRequest instance.
 */
UpdateUserRequestPrivate::UpdateUserRequestPrivate(
    const UpdateUserRequestPrivate &other, UpdateUserRequest * const q)
    : UpdateUserPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace QtAws
