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

#include "putidentitypolicyrequest.h"
#include "putidentitypolicyrequest_p.h"
#include "putidentitypolicyresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/**
 * @class  PutIdentityPolicyRequest
 *
 * @brief  Implements SES PutIdentityPolicy requests.
 *
 * @see    SESClient::putIdentityPolicy
 */

/**
 * @brief  Constructs a new PutIdentityPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutIdentityPolicyRequest::PutIdentityPolicyRequest(const PutIdentityPolicyRequest &other)
    : SESRequest(new PutIdentityPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutIdentityPolicyRequest object.
 */
PutIdentityPolicyRequest::PutIdentityPolicyRequest()
    : SESRequest(new PutIdentityPolicyRequestPrivate(SESRequest::PutIdentityPolicyAction, this))
{

}

bool PutIdentityPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutIdentityPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutIdentityPolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SESClient::send
 */
QtAws::Core::AwsAbstractResponse * PutIdentityPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutIdentityPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutIdentityPolicyRequestPrivate
 *
 * @brief  Private implementation for PutIdentityPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutIdentityPolicyRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public PutIdentityPolicyRequest instance.
 */
PutIdentityPolicyRequestPrivate::PutIdentityPolicyRequestPrivate(
    const SESRequest::Action action, PutIdentityPolicyRequest * const q)
    : SESRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutIdentityPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutIdentityPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutIdentityPolicyRequest instance.
 */
PutIdentityPolicyRequestPrivate::PutIdentityPolicyRequestPrivate(
    const PutIdentityPolicyRequestPrivate &other, PutIdentityPolicyRequest * const q)
    : SESRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
