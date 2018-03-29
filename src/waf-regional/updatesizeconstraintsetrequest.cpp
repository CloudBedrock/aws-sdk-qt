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

#include "updatesizeconstraintsetrequest.h"
#include "updatesizeconstraintsetrequest_p.h"
#include "updatesizeconstraintsetresponse.h"
#include "wafregionalrequest_p.h"

namespace AWS {
namespace WAFRegional {

/**
 * @class  UpdateSizeConstraintSetRequest
 *
 * @brief  Implements WAFRegional UpdateSizeConstraintSet requests.
 *
 * @see    WAFRegionalClient::updateSizeConstraintSet
 */

/**
 * @brief  Constructs a new UpdateSizeConstraintSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateSizeConstraintSetRequest::UpdateSizeConstraintSetRequest(const UpdateSizeConstraintSetRequest &other)
    : WAFRegionalRequest(new UpdateSizeConstraintSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateSizeConstraintSetRequest object.
 */
UpdateSizeConstraintSetRequest::UpdateSizeConstraintSetRequest()
    : WAFRegionalRequest(new UpdateSizeConstraintSetRequestPrivate(WAFRegionalRequest::UpdateSizeConstraintSetAction, this))
{

}

bool UpdateSizeConstraintSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateSizeConstraintSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateSizeConstraintSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
AwsAbstractResponse * UpdateSizeConstraintSetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSizeConstraintSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateSizeConstraintSetRequestPrivate
 *
 * @brief  Private implementation for UpdateSizeConstraintSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSizeConstraintSetRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public UpdateSizeConstraintSetRequest instance.
 */
UpdateSizeConstraintSetRequestPrivate::UpdateSizeConstraintSetRequestPrivate(
    const WAFRegionalRequest::Action action, UpdateSizeConstraintSetRequest * const q)
    : UpdateSizeConstraintSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSizeConstraintSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateSizeConstraintSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateSizeConstraintSetRequest instance.
 */
UpdateSizeConstraintSetRequestPrivate::UpdateSizeConstraintSetRequestPrivate(
    const UpdateSizeConstraintSetRequestPrivate &other, UpdateSizeConstraintSetRequest * const q)
    : UpdateSizeConstraintSetPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace AWS
