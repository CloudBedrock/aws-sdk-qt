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

#include "associatedevicewithroomrequest.h"
#include "associatedevicewithroomrequest_p.h"
#include "associatedevicewithroomresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  AssociateDeviceWithRoomRequest
 *
 * @brief  Implements AlexaForBusiness AssociateDeviceWithRoom requests.
 *
 * @see    AlexaForBusinessClient::associateDeviceWithRoom
 */

/**
 * @brief  Constructs a new AssociateDeviceWithRoomResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateDeviceWithRoomResponse::AssociateDeviceWithRoomResponse(

/**
 * @brief  Constructs a new AssociateDeviceWithRoomRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateDeviceWithRoomRequest::AssociateDeviceWithRoomRequest(const AssociateDeviceWithRoomRequest &other)
    : AlexaForBusinessRequest(new AssociateDeviceWithRoomRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssociateDeviceWithRoomRequest object.
 */
AssociateDeviceWithRoomRequest::AssociateDeviceWithRoomRequest()
    : AlexaForBusinessRequest(new AssociateDeviceWithRoomRequestPrivate(AlexaForBusinessRequest::AssociateDeviceWithRoomAction, this))
{

}

bool AssociateDeviceWithRoomRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssociateDeviceWithRoomResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateDeviceWithRoomResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
AwsAbstractResponse * AssociateDeviceWithRoomRequest::response(QNetworkReply * const reply) const
{
    return new AssociateDeviceWithRoomResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssociateDeviceWithRoomRequestPrivate
 *
 * @brief  Private implementation for AssociateDeviceWithRoomRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateDeviceWithRoomRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public AssociateDeviceWithRoomRequest instance.
 */
AssociateDeviceWithRoomRequestPrivate::AssociateDeviceWithRoomRequestPrivate(
    const AlexaForBusinessRequest::Action action, AssociateDeviceWithRoomRequest * const q)
    : AssociateDeviceWithRoomPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssociateDeviceWithRoomRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateDeviceWithRoomRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateDeviceWithRoomRequest instance.
 */
AssociateDeviceWithRoomRequestPrivate::AssociateDeviceWithRoomRequestPrivate(
    const AssociateDeviceWithRoomRequestPrivate &other, AssociateDeviceWithRoomRequest * const q)
    : AssociateDeviceWithRoomPrivate(other, q)
{

}
