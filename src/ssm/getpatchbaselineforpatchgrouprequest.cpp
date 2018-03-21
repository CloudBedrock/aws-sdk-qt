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

#include "getpatchbaselineforpatchgrouprequest.h"
#include "getpatchbaselineforpatchgrouprequest_p.h"
#include "getpatchbaselineforpatchgroupresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  GetPatchBaselineForPatchGroupRequest
 *
 * @brief  Implements SSM GetPatchBaselineForPatchGroup requests.
 *
 * @see    SSMClient::getPatchBaselineForPatchGroup
 */

/**
 * @brief  Constructs a new GetPatchBaselineForPatchGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetPatchBaselineForPatchGroupRequest::GetPatchBaselineForPatchGroupRequest(const GetPatchBaselineForPatchGroupRequest &other)
    : SSMRequest(new GetPatchBaselineForPatchGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetPatchBaselineForPatchGroupRequest object.
 */
GetPatchBaselineForPatchGroupRequest::GetPatchBaselineForPatchGroupRequest()
    : SSMRequest(new GetPatchBaselineForPatchGroupRequestPrivate(SSMRequest::GetPatchBaselineForPatchGroupAction, this))
{

}

bool GetPatchBaselineForPatchGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetPatchBaselineForPatchGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetPatchBaselineForPatchGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * GetPatchBaselineForPatchGroupRequest::response(QNetworkReply * const reply) const
{
    return new GetPatchBaselineForPatchGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetPatchBaselineForPatchGroupRequestPrivate
 *
 * @brief  Private implementation for GetPatchBaselineForPatchGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPatchBaselineForPatchGroupRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public GetPatchBaselineForPatchGroupRequest instance.
 */
GetPatchBaselineForPatchGroupRequestPrivate::GetPatchBaselineForPatchGroupRequestPrivate(
    const SSMRequest::Action action, GetPatchBaselineForPatchGroupRequest * const q)
    : GetPatchBaselineForPatchGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetPatchBaselineForPatchGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetPatchBaselineForPatchGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetPatchBaselineForPatchGroupRequest instance.
 */
GetPatchBaselineForPatchGroupRequestPrivate::GetPatchBaselineForPatchGroupRequestPrivate(
    const GetPatchBaselineForPatchGroupRequestPrivate &other, GetPatchBaselineForPatchGroupRequest * const q)
    : GetPatchBaselineForPatchGroupPrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS
