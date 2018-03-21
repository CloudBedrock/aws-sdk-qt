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

#include "getuserattributeverificationcoderequest.h"
#include "getuserattributeverificationcoderequest_p.h"
#include "getuserattributeverificationcoderesponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  GetUserAttributeVerificationCodeRequest
 *
 * @brief  Implements CognitoIdentityProvider GetUserAttributeVerificationCode requests.
 *
 * @see    CognitoIdentityProviderClient::getUserAttributeVerificationCode
 */

/**
 * @brief  Constructs a new GetUserAttributeVerificationCodeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetUserAttributeVerificationCodeResponse::GetUserAttributeVerificationCodeResponse(

/**
 * @brief  Constructs a new GetUserAttributeVerificationCodeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetUserAttributeVerificationCodeRequest::GetUserAttributeVerificationCodeRequest(const GetUserAttributeVerificationCodeRequest &other)
    : CognitoIdentityProviderRequest(new GetUserAttributeVerificationCodeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetUserAttributeVerificationCodeRequest object.
 */
GetUserAttributeVerificationCodeRequest::GetUserAttributeVerificationCodeRequest()
    : CognitoIdentityProviderRequest(new GetUserAttributeVerificationCodeRequestPrivate(CognitoIdentityProviderRequest::GetUserAttributeVerificationCodeAction, this))
{

}

bool GetUserAttributeVerificationCodeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetUserAttributeVerificationCodeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetUserAttributeVerificationCodeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * GetUserAttributeVerificationCodeRequest::response(QNetworkReply * const reply) const
{
    return new GetUserAttributeVerificationCodeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetUserAttributeVerificationCodeRequestPrivate
 *
 * @brief  Private implementation for GetUserAttributeVerificationCodeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetUserAttributeVerificationCodeRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public GetUserAttributeVerificationCodeRequest instance.
 */
GetUserAttributeVerificationCodeRequestPrivate::GetUserAttributeVerificationCodeRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, GetUserAttributeVerificationCodeRequest * const q)
    : GetUserAttributeVerificationCodePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetUserAttributeVerificationCodeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetUserAttributeVerificationCodeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetUserAttributeVerificationCodeRequest instance.
 */
GetUserAttributeVerificationCodeRequestPrivate::GetUserAttributeVerificationCodeRequestPrivate(
    const GetUserAttributeVerificationCodeRequestPrivate &other, GetUserAttributeVerificationCodeRequest * const q)
    : GetUserAttributeVerificationCodePrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
