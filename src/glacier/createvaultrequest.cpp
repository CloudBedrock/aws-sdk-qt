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

#include "createvaultrequest.h"
#include "createvaultrequest_p.h"
#include "createvaultresponse.h"
#include "glacierrequest_p.h"

namespace QtAws {
namespace Glacier {

/**
 * @class  CreateVaultRequest
 *
 * @brief  Implements Glacier CreateVault requests.
 *
 * @see    GlacierClient::createVault
 */

/**
 * @brief  Constructs a new CreateVaultRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateVaultRequest::CreateVaultRequest(const CreateVaultRequest &other)
    : GlacierRequest(new CreateVaultRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateVaultRequest object.
 */
CreateVaultRequest::CreateVaultRequest()
    : GlacierRequest(new CreateVaultRequestPrivate(GlacierRequest::CreateVaultAction, this))
{

}

bool CreateVaultRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateVaultResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateVaultResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlacierClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateVaultRequest::response(QNetworkReply * const reply) const
{
    return new CreateVaultResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateVaultRequestPrivate
 *
 * @brief  Private implementation for CreateVaultRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateVaultRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public CreateVaultRequest instance.
 */
CreateVaultRequestPrivate::CreateVaultRequestPrivate(
    const GlacierRequest::Action action, CreateVaultRequest * const q)
    : CreateVaultPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateVaultRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateVaultRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateVaultRequest instance.
 */
CreateVaultRequestPrivate::CreateVaultRequestPrivate(
    const CreateVaultRequestPrivate &other, CreateVaultRequest * const q)
    : CreateVaultPrivate(other, q)
{

}

} // namespace Glacier
} // namespace QtAws
