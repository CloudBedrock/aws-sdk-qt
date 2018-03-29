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

#include "addtagstovaultrequest.h"
#include "addtagstovaultrequest_p.h"
#include "addtagstovaultresponse.h"
#include "glacierrequest_p.h"

namespace QtAws {
namespace Glacier {

/**
 * @class  AddTagsToVaultRequest
 *
 * @brief  Implements Glacier AddTagsToVault requests.
 *
 * @see    GlacierClient::addTagsToVault
 */

/**
 * @brief  Constructs a new AddTagsToVaultRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddTagsToVaultRequest::AddTagsToVaultRequest(const AddTagsToVaultRequest &other)
    : GlacierRequest(new AddTagsToVaultRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddTagsToVaultRequest object.
 */
AddTagsToVaultRequest::AddTagsToVaultRequest()
    : GlacierRequest(new AddTagsToVaultRequestPrivate(GlacierRequest::AddTagsToVaultAction, this))
{

}

bool AddTagsToVaultRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddTagsToVaultResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddTagsToVaultResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlacierClient::send
 */
QtAws::Core::AwsAbstractResponse * AddTagsToVaultRequest::response(QNetworkReply * const reply) const
{
    return new AddTagsToVaultResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddTagsToVaultRequestPrivate
 *
 * @brief  Private implementation for AddTagsToVaultRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddTagsToVaultRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public AddTagsToVaultRequest instance.
 */
AddTagsToVaultRequestPrivate::AddTagsToVaultRequestPrivate(
    const GlacierRequest::Action action, AddTagsToVaultRequest * const q)
    : GlacierRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddTagsToVaultRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddTagsToVaultRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddTagsToVaultRequest instance.
 */
AddTagsToVaultRequestPrivate::AddTagsToVaultRequestPrivate(
    const AddTagsToVaultRequestPrivate &other, AddTagsToVaultRequest * const q)
    : GlacierRequestPrivate(other, q)
{

}

} // namespace Glacier
} // namespace QtAws
