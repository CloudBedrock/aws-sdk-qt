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

#include "getslottyperequest.h"
#include "getslottyperequest_p.h"
#include "getslottyperesponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  GetSlotTypeRequest
 *
 * @brief  Implements LexModelBuildingService GetSlotType requests.
 *
 * @see    LexModelBuildingServiceClient::getSlotType
 */

/**
 * @brief  Constructs a new GetSlotTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSlotTypeRequest::GetSlotTypeRequest(const GetSlotTypeRequest &other)
    : LexModelBuildingServiceRequest(new GetSlotTypeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetSlotTypeRequest object.
 */
GetSlotTypeRequest::GetSlotTypeRequest()
    : LexModelBuildingServiceRequest(new GetSlotTypeRequestPrivate(LexModelBuildingServiceRequest::GetSlotTypeAction, this))
{

}

bool GetSlotTypeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetSlotTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSlotTypeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
AwsAbstractResponse * GetSlotTypeRequest::response(QNetworkReply * const reply) const
{
    return new GetSlotTypeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetSlotTypeRequestPrivate
 *
 * @brief  Private implementation for GetSlotTypeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSlotTypeRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public GetSlotTypeRequest instance.
 */
GetSlotTypeRequestPrivate::GetSlotTypeRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetSlotTypeRequest * const q)
    : GetSlotTypePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetSlotTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSlotTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSlotTypeRequest instance.
 */
GetSlotTypeRequestPrivate::GetSlotTypeRequestPrivate(
    const GetSlotTypeRequestPrivate &other, GetSlotTypeRequest * const q)
    : GetSlotTypePrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace AWS
