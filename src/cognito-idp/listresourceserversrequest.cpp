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

#include "listresourceserversrequest.h"
#include "listresourceserversrequest_p.h"
#include "listresourceserversresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  ListResourceServersRequest
 *
 * @brief  Implements CognitoIdentityProvider ListResourceServers requests.
 *
 * @see    CognitoIdentityProviderClient::listResourceServers
 */

/**
 * @brief  Constructs a new ListResourceServersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListResourceServersResponse::ListResourceServersResponse(

/**
 * @brief  Constructs a new ListResourceServersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListResourceServersRequest::ListResourceServersRequest(const ListResourceServersRequest &other)
    : CognitoIdentityProviderRequest(new ListResourceServersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListResourceServersRequest object.
 */
ListResourceServersRequest::ListResourceServersRequest()
    : CognitoIdentityProviderRequest(new ListResourceServersRequestPrivate(CognitoIdentityProviderRequest::ListResourceServersAction, this))
{

}

bool ListResourceServersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListResourceServersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListResourceServersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * ListResourceServersRequest::response(QNetworkReply * const reply) const
{
    return new ListResourceServersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListResourceServersRequestPrivate
 *
 * @brief  Private implementation for ListResourceServersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListResourceServersRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public ListResourceServersRequest instance.
 */
ListResourceServersRequestPrivate::ListResourceServersRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, ListResourceServersRequest * const q)
    : ListResourceServersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListResourceServersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListResourceServersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListResourceServersRequest instance.
 */
ListResourceServersRequestPrivate::ListResourceServersRequestPrivate(
    const ListResourceServersRequestPrivate &other, ListResourceServersRequest * const q)
    : ListResourceServersPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
