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

#include "attachpolicyrequest.h"
#include "attachpolicyrequest_p.h"
#include "attachpolicyresponse.h"
#include "organizationsrequest_p.h"

namespace QtAws {
namespace Organizations {

/**
 * @class  AttachPolicyRequest
 *
 * @brief  Implements Organizations AttachPolicy requests.
 *
 * @see    OrganizationsClient::attachPolicy
 */

/**
 * @brief  Constructs a new AttachPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AttachPolicyRequest::AttachPolicyRequest(const AttachPolicyRequest &other)
    : OrganizationsRequest(new AttachPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AttachPolicyRequest object.
 */
AttachPolicyRequest::AttachPolicyRequest()
    : OrganizationsRequest(new AttachPolicyRequestPrivate(OrganizationsRequest::AttachPolicyAction, this))
{

}

bool AttachPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AttachPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AttachPolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
QtAws::Core::AwsAbstractResponse * AttachPolicyRequest::response(QNetworkReply * const reply) const
{
    return new AttachPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AttachPolicyRequestPrivate
 *
 * @brief  Private implementation for AttachPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachPolicyRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public AttachPolicyRequest instance.
 */
AttachPolicyRequestPrivate::AttachPolicyRequestPrivate(
    const OrganizationsRequest::Action action, AttachPolicyRequest * const q)
    : OrganizationsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AttachPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AttachPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AttachPolicyRequest instance.
 */
AttachPolicyRequestPrivate::AttachPolicyRequestPrivate(
    const AttachPolicyRequestPrivate &other, AttachPolicyRequest * const q)
    : OrganizationsRequestPrivate(other, q)
{

}

} // namespace Organizations
} // namespace QtAws
