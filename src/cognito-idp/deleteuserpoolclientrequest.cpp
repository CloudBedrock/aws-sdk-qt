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

#include "deleteuserpoolclientrequest.h"
#include "deleteuserpoolclientrequest_p.h"
#include "deleteuserpoolclientresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  DeleteUserPoolClientRequest
 *
 * @brief  Implements CognitoIdentityProvider DeleteUserPoolClient requests.
 *
 * @see    CognitoIdentityProviderClient::deleteUserPoolClient
 */

/**
 * @brief  Constructs a new DeleteUserPoolClientResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteUserPoolClientResponse::DeleteUserPoolClientResponse(

/**
 * @brief  Constructs a new DeleteUserPoolClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteUserPoolClientRequest::DeleteUserPoolClientRequest(const DeleteUserPoolClientRequest &other)
    : CognitoIdentityProviderRequest(new DeleteUserPoolClientRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteUserPoolClientRequest object.
 */
DeleteUserPoolClientRequest::DeleteUserPoolClientRequest()
    : CognitoIdentityProviderRequest(new DeleteUserPoolClientRequestPrivate(CognitoIdentityProviderRequest::DeleteUserPoolClientAction, this))
{

}

bool DeleteUserPoolClientRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteUserPoolClientResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteUserPoolClientResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * DeleteUserPoolClientRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUserPoolClientResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteUserPoolClientRequestPrivate
 *
 * @brief  Private implementation for DeleteUserPoolClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUserPoolClientRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public DeleteUserPoolClientRequest instance.
 */
DeleteUserPoolClientRequestPrivate::DeleteUserPoolClientRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, DeleteUserPoolClientRequest * const q)
    : DeleteUserPoolClientPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUserPoolClientRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteUserPoolClientRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteUserPoolClientRequest instance.
 */
DeleteUserPoolClientRequestPrivate::DeleteUserPoolClientRequestPrivate(
    const DeleteUserPoolClientRequestPrivate &other, DeleteUserPoolClientRequest * const q)
    : DeleteUserPoolClientPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
