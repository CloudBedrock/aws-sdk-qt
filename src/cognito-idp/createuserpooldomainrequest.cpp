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

#include "createuserpooldomainrequest.h"
#include "createuserpooldomainrequest_p.h"
#include "createuserpooldomainresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  CreateUserPoolDomainRequest
 *
 * @brief  Implements CognitoIdentityProvider CreateUserPoolDomain requests.
 *
 * @see    CognitoIdentityProviderClient::createUserPoolDomain
 */

/**
 * @brief  Constructs a new CreateUserPoolDomainRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateUserPoolDomainRequest::CreateUserPoolDomainRequest(const CreateUserPoolDomainRequest &other)
    : CognitoIdentityProviderRequest(new CreateUserPoolDomainRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateUserPoolDomainRequest object.
 */
CreateUserPoolDomainRequest::CreateUserPoolDomainRequest()
    : CognitoIdentityProviderRequest(new CreateUserPoolDomainRequestPrivate(CognitoIdentityProviderRequest::CreateUserPoolDomainAction, this))
{

}

bool CreateUserPoolDomainRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateUserPoolDomainResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateUserPoolDomainResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateUserPoolDomainRequest::response(QNetworkReply * const reply) const
{
    return new CreateUserPoolDomainResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateUserPoolDomainRequestPrivate
 *
 * @brief  Private implementation for CreateUserPoolDomainRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateUserPoolDomainRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public CreateUserPoolDomainRequest instance.
 */
CreateUserPoolDomainRequestPrivate::CreateUserPoolDomainRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, CreateUserPoolDomainRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateUserPoolDomainRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateUserPoolDomainRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateUserPoolDomainRequest instance.
 */
CreateUserPoolDomainRequestPrivate::CreateUserPoolDomainRequestPrivate(
    const CreateUserPoolDomainRequestPrivate &other, CreateUserPoolDomainRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
