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

#include "restoredbinstancefromdbsnapshotrequest.h"
#include "restoredbinstancefromdbsnapshotrequest_p.h"
#include "restoredbinstancefromdbsnapshotresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  RestoreDBInstanceFromDBSnapshotRequest
 *
 * @brief  Implements RDS RestoreDBInstanceFromDBSnapshot requests.
 *
 * @see    RDSClient::restoreDBInstanceFromDBSnapshot
 */

/**
 * @brief  Constructs a new RestoreDBInstanceFromDBSnapshotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RestoreDBInstanceFromDBSnapshotRequest::RestoreDBInstanceFromDBSnapshotRequest(const RestoreDBInstanceFromDBSnapshotRequest &other)
    : RDSRequest(new RestoreDBInstanceFromDBSnapshotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RestoreDBInstanceFromDBSnapshotRequest object.
 */
RestoreDBInstanceFromDBSnapshotRequest::RestoreDBInstanceFromDBSnapshotRequest()
    : RDSRequest(new RestoreDBInstanceFromDBSnapshotRequestPrivate(RDSRequest::RestoreDBInstanceFromDBSnapshotAction, this))
{

}

bool RestoreDBInstanceFromDBSnapshotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RestoreDBInstanceFromDBSnapshotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RestoreDBInstanceFromDBSnapshotResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * RestoreDBInstanceFromDBSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new RestoreDBInstanceFromDBSnapshotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RestoreDBInstanceFromDBSnapshotRequestPrivate
 *
 * @brief  Private implementation for RestoreDBInstanceFromDBSnapshotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestoreDBInstanceFromDBSnapshotRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public RestoreDBInstanceFromDBSnapshotRequest instance.
 */
RestoreDBInstanceFromDBSnapshotRequestPrivate::RestoreDBInstanceFromDBSnapshotRequestPrivate(
    const RDSRequest::Action action, RestoreDBInstanceFromDBSnapshotRequest * const q)
    : RDSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RestoreDBInstanceFromDBSnapshotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RestoreDBInstanceFromDBSnapshotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RestoreDBInstanceFromDBSnapshotRequest instance.
 */
RestoreDBInstanceFromDBSnapshotRequestPrivate::RestoreDBInstanceFromDBSnapshotRequestPrivate(
    const RestoreDBInstanceFromDBSnapshotRequestPrivate &other, RestoreDBInstanceFromDBSnapshotRequest * const q)
    : RDSRequestPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
