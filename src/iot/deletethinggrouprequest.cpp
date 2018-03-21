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

#include "deletethinggrouprequest.h"
#include "deletethinggrouprequest_p.h"
#include "deletethinggroupresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  DeleteThingGroupRequest
 *
 * @brief  Implements IoT DeleteThingGroup requests.
 *
 * @see    IoTClient::deleteThingGroup
 */

/**
 * @brief  Constructs a new DeleteThingGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteThingGroupResponse::DeleteThingGroupResponse(

/**
 * @brief  Constructs a new DeleteThingGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteThingGroupRequest::DeleteThingGroupRequest(const DeleteThingGroupRequest &other)
    : IoTRequest(new DeleteThingGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteThingGroupRequest object.
 */
DeleteThingGroupRequest::DeleteThingGroupRequest()
    : IoTRequest(new DeleteThingGroupRequestPrivate(IoTRequest::DeleteThingGroupAction, this))
{

}

bool DeleteThingGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteThingGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteThingGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * DeleteThingGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteThingGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteThingGroupRequestPrivate
 *
 * @brief  Private implementation for DeleteThingGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteThingGroupRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public DeleteThingGroupRequest instance.
 */
DeleteThingGroupRequestPrivate::DeleteThingGroupRequestPrivate(
    const IoTRequest::Action action, DeleteThingGroupRequest * const q)
    : DeleteThingGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteThingGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteThingGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteThingGroupRequest instance.
 */
DeleteThingGroupRequestPrivate::DeleteThingGroupRequestPrivate(
    const DeleteThingGroupRequestPrivate &other, DeleteThingGroupRequest * const q)
    : DeleteThingGroupPrivate(other, q)
{

}
