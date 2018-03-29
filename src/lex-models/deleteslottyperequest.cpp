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

#include "deleteslottyperequest.h"
#include "deleteslottyperequest_p.h"
#include "deleteslottyperesponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/**
 * @class  DeleteSlotTypeRequest
 *
 * @brief  Implements LexModelBuildingService DeleteSlotType requests.
 *
 * @see    LexModelBuildingServiceClient::deleteSlotType
 */

/**
 * @brief  Constructs a new DeleteSlotTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteSlotTypeRequest::DeleteSlotTypeRequest(const DeleteSlotTypeRequest &other)
    : LexModelBuildingServiceRequest(new DeleteSlotTypeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteSlotTypeRequest object.
 */
DeleteSlotTypeRequest::DeleteSlotTypeRequest()
    : LexModelBuildingServiceRequest(new DeleteSlotTypeRequestPrivate(LexModelBuildingServiceRequest::DeleteSlotTypeAction, this))
{

}

bool DeleteSlotTypeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteSlotTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteSlotTypeResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSlotTypeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSlotTypeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteSlotTypeRequestPrivate
 *
 * @brief  Private implementation for DeleteSlotTypeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSlotTypeRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public DeleteSlotTypeRequest instance.
 */
DeleteSlotTypeRequestPrivate::DeleteSlotTypeRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, DeleteSlotTypeRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSlotTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteSlotTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteSlotTypeRequest instance.
 */
DeleteSlotTypeRequestPrivate::DeleteSlotTypeRequestPrivate(
    const DeleteSlotTypeRequestPrivate &other, DeleteSlotTypeRequest * const q)
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
