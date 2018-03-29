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

#include "createrolealiasrequest.h"
#include "createrolealiasrequest_p.h"
#include "createrolealiasresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  CreateRoleAliasRequest
 *
 * @brief  Implements IoT CreateRoleAlias requests.
 *
 * @see    IoTClient::createRoleAlias
 */

/**
 * @brief  Constructs a new CreateRoleAliasRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateRoleAliasRequest::CreateRoleAliasRequest(const CreateRoleAliasRequest &other)
    : IoTRequest(new CreateRoleAliasRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateRoleAliasRequest object.
 */
CreateRoleAliasRequest::CreateRoleAliasRequest()
    : IoTRequest(new CreateRoleAliasRequestPrivate(IoTRequest::CreateRoleAliasAction, this))
{

}

bool CreateRoleAliasRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateRoleAliasResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateRoleAliasResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * CreateRoleAliasRequest::response(QNetworkReply * const reply) const
{
    return new CreateRoleAliasResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateRoleAliasRequestPrivate
 *
 * @brief  Private implementation for CreateRoleAliasRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateRoleAliasRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public CreateRoleAliasRequest instance.
 */
CreateRoleAliasRequestPrivate::CreateRoleAliasRequestPrivate(
    const IoTRequest::Action action, CreateRoleAliasRequest * const q)
    : CreateRoleAliasPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateRoleAliasRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateRoleAliasRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateRoleAliasRequest instance.
 */
CreateRoleAliasRequestPrivate::CreateRoleAliasRequestPrivate(
    const CreateRoleAliasRequestPrivate &other, CreateRoleAliasRequest * const q)
    : CreateRoleAliasPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
