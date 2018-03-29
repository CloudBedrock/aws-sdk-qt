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

#include "addthingtothinggrouprequest.h"
#include "addthingtothinggrouprequest_p.h"
#include "addthingtothinggroupresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  AddThingToThingGroupRequest
 *
 * @brief  Implements IoT AddThingToThingGroup requests.
 *
 * @see    IoTClient::addThingToThingGroup
 */

/**
 * @brief  Constructs a new AddThingToThingGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddThingToThingGroupRequest::AddThingToThingGroupRequest(const AddThingToThingGroupRequest &other)
    : IoTRequest(new AddThingToThingGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddThingToThingGroupRequest object.
 */
AddThingToThingGroupRequest::AddThingToThingGroupRequest()
    : IoTRequest(new AddThingToThingGroupRequestPrivate(IoTRequest::AddThingToThingGroupAction, this))
{

}

bool AddThingToThingGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddThingToThingGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddThingToThingGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * AddThingToThingGroupRequest::response(QNetworkReply * const reply) const
{
    return new AddThingToThingGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddThingToThingGroupRequestPrivate
 *
 * @brief  Private implementation for AddThingToThingGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddThingToThingGroupRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public AddThingToThingGroupRequest instance.
 */
AddThingToThingGroupRequestPrivate::AddThingToThingGroupRequestPrivate(
    const IoTRequest::Action action, AddThingToThingGroupRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddThingToThingGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddThingToThingGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddThingToThingGroupRequest instance.
 */
AddThingToThingGroupRequestPrivate::AddThingToThingGroupRequestPrivate(
    const AddThingToThingGroupRequestPrivate &other, AddThingToThingGroupRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
