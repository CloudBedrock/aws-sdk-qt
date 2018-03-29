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

#include "updatepolicyrequest.h"
#include "updatepolicyrequest_p.h"
#include "updatepolicyresponse.h"
#include "organizationsrequest_p.h"

namespace QtAws {
namespace Organizations {

/**
 * @class  UpdatePolicyRequest
 *
 * @brief  Implements Organizations UpdatePolicy requests.
 *
 * @see    OrganizationsClient::updatePolicy
 */

/**
 * @brief  Constructs a new UpdatePolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdatePolicyRequest::UpdatePolicyRequest(const UpdatePolicyRequest &other)
    : OrganizationsRequest(new UpdatePolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdatePolicyRequest object.
 */
UpdatePolicyRequest::UpdatePolicyRequest()
    : OrganizationsRequest(new UpdatePolicyRequestPrivate(OrganizationsRequest::UpdatePolicyAction, this))
{

}

bool UpdatePolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdatePolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdatePolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePolicyRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdatePolicyRequestPrivate
 *
 * @brief  Private implementation for UpdatePolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePolicyRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public UpdatePolicyRequest instance.
 */
UpdatePolicyRequestPrivate::UpdatePolicyRequestPrivate(
    const OrganizationsRequest::Action action, UpdatePolicyRequest * const q)
    : OrganizationsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdatePolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdatePolicyRequest instance.
 */
UpdatePolicyRequestPrivate::UpdatePolicyRequestPrivate(
    const UpdatePolicyRequestPrivate &other, UpdatePolicyRequest * const q)
    : OrganizationsRequestPrivate(other, q)
{

}

} // namespace Organizations
} // namespace QtAws
