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

#include "updategrouprequest.h"
#include "updategrouprequest_p.h"
#include "updategroupresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  UpdateGroupRequest
 *
 * @brief  Implements Greengrass UpdateGroup requests.
 *
 * @see    GreengrassClient::updateGroup
 */

/**
 * @brief  Constructs a new UpdateGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateGroupRequest::UpdateGroupRequest(const UpdateGroupRequest &other)
    : GreengrassRequest(new UpdateGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateGroupRequest object.
 */
UpdateGroupRequest::UpdateGroupRequest()
    : GreengrassRequest(new UpdateGroupRequestPrivate(GreengrassRequest::UpdateGroupAction, this))
{

}

bool UpdateGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * UpdateGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateGroupRequestPrivate
 *
 * @brief  Private implementation for UpdateGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGroupRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public UpdateGroupRequest instance.
 */
UpdateGroupRequestPrivate::UpdateGroupRequestPrivate(
    const GreengrassRequest::Action action, UpdateGroupRequest * const q)
    : UpdateGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateGroupRequest instance.
 */
UpdateGroupRequestPrivate::UpdateGroupRequestPrivate(
    const UpdateGroupRequestPrivate &other, UpdateGroupRequest * const q)
    : UpdateGroupPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
