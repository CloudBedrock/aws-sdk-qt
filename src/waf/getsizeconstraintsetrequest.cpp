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

#include "getsizeconstraintsetrequest.h"
#include "getsizeconstraintsetrequest_p.h"
#include "getsizeconstraintsetresponse.h"
#include "wafrequest_p.h"

namespace AWS {
namespace WAF {

/**
 * @class  GetSizeConstraintSetRequest
 *
 * @brief  Implements WAF GetSizeConstraintSet requests.
 *
 * @see    WAFClient::getSizeConstraintSet
 */

/**
 * @brief  Constructs a new GetSizeConstraintSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSizeConstraintSetRequest::GetSizeConstraintSetRequest(const GetSizeConstraintSetRequest &other)
    : WAFRequest(new GetSizeConstraintSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetSizeConstraintSetRequest object.
 */
GetSizeConstraintSetRequest::GetSizeConstraintSetRequest()
    : WAFRequest(new GetSizeConstraintSetRequestPrivate(WAFRequest::GetSizeConstraintSetAction, this))
{

}

bool GetSizeConstraintSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetSizeConstraintSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSizeConstraintSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFClient::send
 */
AwsAbstractResponse * GetSizeConstraintSetRequest::response(QNetworkReply * const reply) const
{
    return new GetSizeConstraintSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetSizeConstraintSetRequestPrivate
 *
 * @brief  Private implementation for GetSizeConstraintSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSizeConstraintSetRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public GetSizeConstraintSetRequest instance.
 */
GetSizeConstraintSetRequestPrivate::GetSizeConstraintSetRequestPrivate(
    const WAFRequest::Action action, GetSizeConstraintSetRequest * const q)
    : GetSizeConstraintSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetSizeConstraintSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSizeConstraintSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSizeConstraintSetRequest instance.
 */
GetSizeConstraintSetRequestPrivate::GetSizeConstraintSetRequestPrivate(
    const GetSizeConstraintSetRequestPrivate &other, GetSizeConstraintSetRequest * const q)
    : GetSizeConstraintSetPrivate(other, q)
{

}

} // namespace WAF
} // namespace AWS
