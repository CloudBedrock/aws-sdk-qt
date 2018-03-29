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

#include "getpermissionpolicyrequest.h"
#include "getpermissionpolicyrequest_p.h"
#include "getpermissionpolicyresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/**
 * @class  GetPermissionPolicyRequest
 *
 * @brief  Implements WAF GetPermissionPolicy requests.
 *
 * @see    WAFClient::getPermissionPolicy
 */

/**
 * @brief  Constructs a new GetPermissionPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetPermissionPolicyRequest::GetPermissionPolicyRequest(const GetPermissionPolicyRequest &other)
    : WAFRequest(new GetPermissionPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetPermissionPolicyRequest object.
 */
GetPermissionPolicyRequest::GetPermissionPolicyRequest()
    : WAFRequest(new GetPermissionPolicyRequestPrivate(WAFRequest::GetPermissionPolicyAction, this))
{

}

bool GetPermissionPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetPermissionPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetPermissionPolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPermissionPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetPermissionPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetPermissionPolicyRequestPrivate
 *
 * @brief  Private implementation for GetPermissionPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPermissionPolicyRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public GetPermissionPolicyRequest instance.
 */
GetPermissionPolicyRequestPrivate::GetPermissionPolicyRequestPrivate(
    const WAFRequest::Action action, GetPermissionPolicyRequest * const q)
    : WAFRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetPermissionPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetPermissionPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetPermissionPolicyRequest instance.
 */
GetPermissionPolicyRequestPrivate::GetPermissionPolicyRequestPrivate(
    const GetPermissionPolicyRequestPrivate &other, GetPermissionPolicyRequest * const q)
    : WAFRequestPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws
