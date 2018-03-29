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

#include "getsizeconstraintsetrequest.h"
#include "getsizeconstraintsetrequest_p.h"
#include "getsizeconstraintsetresponse.h"
#include "wafregionalrequest_p.h"

namespace QtAws {
namespace WAFRegional {

/**
 * @class  GetSizeConstraintSetRequest
 *
 * @brief  Implements WAFRegional GetSizeConstraintSet requests.
 *
 * @see    WAFRegionalClient::getSizeConstraintSet
 */

/**
 * @brief  Constructs a new GetSizeConstraintSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSizeConstraintSetRequest::GetSizeConstraintSetRequest(const GetSizeConstraintSetRequest &other)
    : WAFRegionalRequest(new GetSizeConstraintSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetSizeConstraintSetRequest object.
 */
GetSizeConstraintSetRequest::GetSizeConstraintSetRequest()
    : WAFRegionalRequest(new GetSizeConstraintSetRequestPrivate(WAFRegionalRequest::GetSizeConstraintSetAction, this))
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
 * @see  WAFRegionalClient::send
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
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public GetSizeConstraintSetRequest instance.
 */
GetSizeConstraintSetRequestPrivate::GetSizeConstraintSetRequestPrivate(
    const WAFRegionalRequest::Action action, GetSizeConstraintSetRequest * const q)
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

} // namespace WAFRegional
} // namespace QtAws
