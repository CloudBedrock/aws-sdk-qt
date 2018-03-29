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

#include "confirmforgotpasswordrequest.h"
#include "confirmforgotpasswordrequest_p.h"
#include "confirmforgotpasswordresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  ConfirmForgotPasswordRequest
 *
 * @brief  Implements CognitoIdentityProvider ConfirmForgotPassword requests.
 *
 * @see    CognitoIdentityProviderClient::confirmForgotPassword
 */

/**
 * @brief  Constructs a new ConfirmForgotPasswordRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ConfirmForgotPasswordRequest::ConfirmForgotPasswordRequest(const ConfirmForgotPasswordRequest &other)
    : CognitoIdentityProviderRequest(new ConfirmForgotPasswordRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ConfirmForgotPasswordRequest object.
 */
ConfirmForgotPasswordRequest::ConfirmForgotPasswordRequest()
    : CognitoIdentityProviderRequest(new ConfirmForgotPasswordRequestPrivate(CognitoIdentityProviderRequest::ConfirmForgotPasswordAction, this))
{

}

bool ConfirmForgotPasswordRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ConfirmForgotPasswordResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ConfirmForgotPasswordResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
QtAws::Core::AwsAbstractResponse * ConfirmForgotPasswordRequest::response(QNetworkReply * const reply) const
{
    return new ConfirmForgotPasswordResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ConfirmForgotPasswordRequestPrivate
 *
 * @brief  Private implementation for ConfirmForgotPasswordRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ConfirmForgotPasswordRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public ConfirmForgotPasswordRequest instance.
 */
ConfirmForgotPasswordRequestPrivate::ConfirmForgotPasswordRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, ConfirmForgotPasswordRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ConfirmForgotPasswordRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ConfirmForgotPasswordRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ConfirmForgotPasswordRequest instance.
 */
ConfirmForgotPasswordRequestPrivate::ConfirmForgotPasswordRequestPrivate(
    const ConfirmForgotPasswordRequestPrivate &other, ConfirmForgotPasswordRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
