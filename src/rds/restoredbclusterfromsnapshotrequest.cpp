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

#include "restoredbclusterfromsnapshotrequest.h"
#include "restoredbclusterfromsnapshotrequest_p.h"
#include "restoredbclusterfromsnapshotresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  RestoreDBClusterFromSnapshotRequest
 *
 * @brief  Implements RDS RestoreDBClusterFromSnapshot requests.
 *
 * @see    RDSClient::restoreDBClusterFromSnapshot
 */

/**
 * @brief  Constructs a new RestoreDBClusterFromSnapshotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RestoreDBClusterFromSnapshotResponse::RestoreDBClusterFromSnapshotResponse(

/**
 * @brief  Constructs a new RestoreDBClusterFromSnapshotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RestoreDBClusterFromSnapshotRequest::RestoreDBClusterFromSnapshotRequest(const RestoreDBClusterFromSnapshotRequest &other)
    : RDSRequest(new RestoreDBClusterFromSnapshotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RestoreDBClusterFromSnapshotRequest object.
 */
RestoreDBClusterFromSnapshotRequest::RestoreDBClusterFromSnapshotRequest()
    : RDSRequest(new RestoreDBClusterFromSnapshotRequestPrivate(RDSRequest::RestoreDBClusterFromSnapshotAction, this))
{

}

bool RestoreDBClusterFromSnapshotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RestoreDBClusterFromSnapshotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RestoreDBClusterFromSnapshotResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * RestoreDBClusterFromSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new RestoreDBClusterFromSnapshotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RestoreDBClusterFromSnapshotRequestPrivate
 *
 * @brief  Private implementation for RestoreDBClusterFromSnapshotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestoreDBClusterFromSnapshotRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public RestoreDBClusterFromSnapshotRequest instance.
 */
RestoreDBClusterFromSnapshotRequestPrivate::RestoreDBClusterFromSnapshotRequestPrivate(
    const RDSRequest::Action action, RestoreDBClusterFromSnapshotRequest * const q)
    : RestoreDBClusterFromSnapshotPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RestoreDBClusterFromSnapshotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RestoreDBClusterFromSnapshotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RestoreDBClusterFromSnapshotRequest instance.
 */
RestoreDBClusterFromSnapshotRequestPrivate::RestoreDBClusterFromSnapshotRequestPrivate(
    const RestoreDBClusterFromSnapshotRequestPrivate &other, RestoreDBClusterFromSnapshotRequest * const q)
    : RestoreDBClusterFromSnapshotPrivate(other, q)
{

}
