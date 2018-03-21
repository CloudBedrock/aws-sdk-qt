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

#include "resendvalidationemailrequest.h"
#include "resendvalidationemailrequest_p.h"
#include "resendvalidationemailresponse.h"
#include "acmrequest_p.h"

namespace AWS {
namespace ACM {

/**
 * @class  ResendValidationEmailRequest
 *
 * @brief  Implements ACM ResendValidationEmail requests.
 *
 * @see    ACMClient::resendValidationEmail
 */

/**
 * @brief  Constructs a new ResendValidationEmailRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ResendValidationEmailRequest::ResendValidationEmailRequest(const ResendValidationEmailRequest &other)
    : ACMRequest(new ResendValidationEmailRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ResendValidationEmailRequest object.
 */
ResendValidationEmailRequest::ResendValidationEmailRequest()
    : ACMRequest(new ResendValidationEmailRequestPrivate(ACMRequest::ResendValidationEmailAction, this))
{

}

bool ResendValidationEmailRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ResendValidationEmailResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ResendValidationEmailResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ACMClient::send
 */
AwsAbstractResponse * ResendValidationEmailRequest::response(QNetworkReply * const reply) const
{
    return new ResendValidationEmailResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ResendValidationEmailRequestPrivate
 *
 * @brief  Private implementation for ResendValidationEmailRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResendValidationEmailRequestPrivate object.
 *
 * @param  action  ACM action being performed.
 * @param  q       Pointer to this object's public ResendValidationEmailRequest instance.
 */
ResendValidationEmailRequestPrivate::ResendValidationEmailRequestPrivate(
    const ACMRequest::Action action, ResendValidationEmailRequest * const q)
    : ResendValidationEmailPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ResendValidationEmailRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ResendValidationEmailRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ResendValidationEmailRequest instance.
 */
ResendValidationEmailRequestPrivate::ResendValidationEmailRequestPrivate(
    const ResendValidationEmailRequestPrivate &other, ResendValidationEmailRequest * const q)
    : ResendValidationEmailPrivate(other, q)
{

}

} // namespace ACM
} // namespace AWS
