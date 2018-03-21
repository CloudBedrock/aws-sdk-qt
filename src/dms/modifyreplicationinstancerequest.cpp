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

#include "modifyreplicationinstancerequest.h"
#include "modifyreplicationinstancerequest_p.h"
#include "modifyreplicationinstanceresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  ModifyReplicationInstanceRequest
 *
 * @brief  Implements DatabaseMigrationService ModifyReplicationInstance requests.
 *
 * @see    DatabaseMigrationServiceClient::modifyReplicationInstance
 */

/**
 * @brief  Constructs a new ModifyReplicationInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyReplicationInstanceResponse::ModifyReplicationInstanceResponse(

/**
 * @brief  Constructs a new ModifyReplicationInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyReplicationInstanceRequest::ModifyReplicationInstanceRequest(const ModifyReplicationInstanceRequest &other)
    : DatabaseMigrationServiceRequest(new ModifyReplicationInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyReplicationInstanceRequest object.
 */
ModifyReplicationInstanceRequest::ModifyReplicationInstanceRequest()
    : DatabaseMigrationServiceRequest(new ModifyReplicationInstanceRequestPrivate(DatabaseMigrationServiceRequest::ModifyReplicationInstanceAction, this))
{

}

bool ModifyReplicationInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyReplicationInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyReplicationInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
AwsAbstractResponse * ModifyReplicationInstanceRequest::response(QNetworkReply * const reply) const
{
    return new ModifyReplicationInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyReplicationInstanceRequestPrivate
 *
 * @brief  Private implementation for ModifyReplicationInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyReplicationInstanceRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public ModifyReplicationInstanceRequest instance.
 */
ModifyReplicationInstanceRequestPrivate::ModifyReplicationInstanceRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, ModifyReplicationInstanceRequest * const q)
    : ModifyReplicationInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyReplicationInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyReplicationInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyReplicationInstanceRequest instance.
 */
ModifyReplicationInstanceRequestPrivate::ModifyReplicationInstanceRequestPrivate(
    const ModifyReplicationInstanceRequestPrivate &other, ModifyReplicationInstanceRequest * const q)
    : ModifyReplicationInstancePrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace AWS
