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

#include "createuserpoolclientrequest.h"
#include "createuserpoolclientrequest_p.h"
#include "createuserpoolclientresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  CreateUserPoolClientRequest
 *
 * @brief  Implements CognitoIdentityProvider CreateUserPoolClient requests.
 *
 * @see    CognitoIdentityProviderClient::createUserPoolClient
 */

/**
 * @brief  Constructs a new CreateUserPoolClientResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateUserPoolClientResponse::CreateUserPoolClientResponse(

/**
 * @brief  Constructs a new CreateUserPoolClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateUserPoolClientRequest::CreateUserPoolClientRequest(const CreateUserPoolClientRequest &other)
    : CognitoIdentityProviderRequest(new CreateUserPoolClientRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateUserPoolClientRequest object.
 */
CreateUserPoolClientRequest::CreateUserPoolClientRequest()
    : CognitoIdentityProviderRequest(new CreateUserPoolClientRequestPrivate(CognitoIdentityProviderRequest::CreateUserPoolClientAction, this))
{

}

bool CreateUserPoolClientRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateUserPoolClientResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateUserPoolClientResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * CreateUserPoolClientRequest::response(QNetworkReply * const reply) const
{
    return new CreateUserPoolClientResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateUserPoolClientRequestPrivate
 *
 * @brief  Private implementation for CreateUserPoolClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateUserPoolClientRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public CreateUserPoolClientRequest instance.
 */
CreateUserPoolClientRequestPrivate::CreateUserPoolClientRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, CreateUserPoolClientRequest * const q)
    : CreateUserPoolClientPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateUserPoolClientRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateUserPoolClientRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateUserPoolClientRequest instance.
 */
CreateUserPoolClientRequestPrivate::CreateUserPoolClientRequestPrivate(
    const CreateUserPoolClientRequestPrivate &other, CreateUserPoolClientRequest * const q)
    : CreateUserPoolClientPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
