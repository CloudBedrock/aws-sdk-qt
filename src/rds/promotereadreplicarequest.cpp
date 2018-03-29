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

#include "promotereadreplicarequest.h"
#include "promotereadreplicarequest_p.h"
#include "promotereadreplicaresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  PromoteReadReplicaRequest
 *
 * @brief  Implements RDS PromoteReadReplica requests.
 *
 * @see    RDSClient::promoteReadReplica
 */

/**
 * @brief  Constructs a new PromoteReadReplicaRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PromoteReadReplicaRequest::PromoteReadReplicaRequest(const PromoteReadReplicaRequest &other)
    : RDSRequest(new PromoteReadReplicaRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PromoteReadReplicaRequest object.
 */
PromoteReadReplicaRequest::PromoteReadReplicaRequest()
    : RDSRequest(new PromoteReadReplicaRequestPrivate(RDSRequest::PromoteReadReplicaAction, this))
{

}

bool PromoteReadReplicaRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PromoteReadReplicaResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PromoteReadReplicaResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * PromoteReadReplicaRequest::response(QNetworkReply * const reply) const
{
    return new PromoteReadReplicaResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PromoteReadReplicaRequestPrivate
 *
 * @brief  Private implementation for PromoteReadReplicaRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PromoteReadReplicaRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public PromoteReadReplicaRequest instance.
 */
PromoteReadReplicaRequestPrivate::PromoteReadReplicaRequestPrivate(
    const RDSRequest::Action action, PromoteReadReplicaRequest * const q)
    : PromoteReadReplicaPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PromoteReadReplicaRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PromoteReadReplicaRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PromoteReadReplicaRequest instance.
 */
PromoteReadReplicaRequestPrivate::PromoteReadReplicaRequestPrivate(
    const PromoteReadReplicaRequestPrivate &other, PromoteReadReplicaRequest * const q)
    : PromoteReadReplicaPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
