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

#include "addworkingstoragerequest.h"
#include "addworkingstoragerequest_p.h"
#include "addworkingstorageresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/**
 * @class  AddWorkingStorageRequest
 *
 * @brief  Implements StorageGateway AddWorkingStorage requests.
 *
 * @see    StorageGatewayClient::addWorkingStorage
 */

/**
 * @brief  Constructs a new AddWorkingStorageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddWorkingStorageRequest::AddWorkingStorageRequest(const AddWorkingStorageRequest &other)
    : StorageGatewayRequest(new AddWorkingStorageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddWorkingStorageRequest object.
 */
AddWorkingStorageRequest::AddWorkingStorageRequest()
    : StorageGatewayRequest(new AddWorkingStorageRequestPrivate(StorageGatewayRequest::AddWorkingStorageAction, this))
{

}

bool AddWorkingStorageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddWorkingStorageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddWorkingStorageResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * AddWorkingStorageRequest::response(QNetworkReply * const reply) const
{
    return new AddWorkingStorageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddWorkingStorageRequestPrivate
 *
 * @brief  Private implementation for AddWorkingStorageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddWorkingStorageRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public AddWorkingStorageRequest instance.
 */
AddWorkingStorageRequestPrivate::AddWorkingStorageRequestPrivate(
    const StorageGatewayRequest::Action action, AddWorkingStorageRequest * const q)
    : AddWorkingStoragePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddWorkingStorageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddWorkingStorageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddWorkingStorageRequest instance.
 */
AddWorkingStorageRequestPrivate::AddWorkingStorageRequestPrivate(
    const AddWorkingStorageRequestPrivate &other, AddWorkingStorageRequest * const q)
    : AddWorkingStoragePrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws
