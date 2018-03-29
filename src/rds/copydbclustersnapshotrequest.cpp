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

#include "copydbclustersnapshotrequest.h"
#include "copydbclustersnapshotrequest_p.h"
#include "copydbclustersnapshotresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  CopyDBClusterSnapshotRequest
 *
 * @brief  Implements RDS CopyDBClusterSnapshot requests.
 *
 * @see    RDSClient::copyDBClusterSnapshot
 */

/**
 * @brief  Constructs a new CopyDBClusterSnapshotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CopyDBClusterSnapshotRequest::CopyDBClusterSnapshotRequest(const CopyDBClusterSnapshotRequest &other)
    : RDSRequest(new CopyDBClusterSnapshotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CopyDBClusterSnapshotRequest object.
 */
CopyDBClusterSnapshotRequest::CopyDBClusterSnapshotRequest()
    : RDSRequest(new CopyDBClusterSnapshotRequestPrivate(RDSRequest::CopyDBClusterSnapshotAction, this))
{

}

bool CopyDBClusterSnapshotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CopyDBClusterSnapshotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CopyDBClusterSnapshotResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * CopyDBClusterSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new CopyDBClusterSnapshotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CopyDBClusterSnapshotRequestPrivate
 *
 * @brief  Private implementation for CopyDBClusterSnapshotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CopyDBClusterSnapshotRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public CopyDBClusterSnapshotRequest instance.
 */
CopyDBClusterSnapshotRequestPrivate::CopyDBClusterSnapshotRequestPrivate(
    const RDSRequest::Action action, CopyDBClusterSnapshotRequest * const q)
    : CopyDBClusterSnapshotPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CopyDBClusterSnapshotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CopyDBClusterSnapshotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CopyDBClusterSnapshotRequest instance.
 */
CopyDBClusterSnapshotRequestPrivate::CopyDBClusterSnapshotRequestPrivate(
    const CopyDBClusterSnapshotRequestPrivate &other, CopyDBClusterSnapshotRequest * const q)
    : CopyDBClusterSnapshotPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
