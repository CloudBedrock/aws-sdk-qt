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

#include "copyclustersnapshotrequest.h"
#include "copyclustersnapshotrequest_p.h"
#include "copyclustersnapshotresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  CopyClusterSnapshotRequest
 *
 * @brief  Implements Redshift CopyClusterSnapshot requests.
 *
 * @see    RedshiftClient::copyClusterSnapshot
 */

/**
 * @brief  Constructs a new CopyClusterSnapshotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CopyClusterSnapshotResponse::CopyClusterSnapshotResponse(

/**
 * @brief  Constructs a new CopyClusterSnapshotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CopyClusterSnapshotRequest::CopyClusterSnapshotRequest(const CopyClusterSnapshotRequest &other)
    : RedshiftRequest(new CopyClusterSnapshotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CopyClusterSnapshotRequest object.
 */
CopyClusterSnapshotRequest::CopyClusterSnapshotRequest()
    : RedshiftRequest(new CopyClusterSnapshotRequestPrivate(RedshiftRequest::CopyClusterSnapshotAction, this))
{

}

bool CopyClusterSnapshotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CopyClusterSnapshotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CopyClusterSnapshotResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * CopyClusterSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new CopyClusterSnapshotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CopyClusterSnapshotRequestPrivate
 *
 * @brief  Private implementation for CopyClusterSnapshotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CopyClusterSnapshotRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public CopyClusterSnapshotRequest instance.
 */
CopyClusterSnapshotRequestPrivate::CopyClusterSnapshotRequestPrivate(
    const RedshiftRequest::Action action, CopyClusterSnapshotRequest * const q)
    : CopyClusterSnapshotPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CopyClusterSnapshotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CopyClusterSnapshotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CopyClusterSnapshotRequest instance.
 */
CopyClusterSnapshotRequestPrivate::CopyClusterSnapshotRequestPrivate(
    const CopyClusterSnapshotRequestPrivate &other, CopyClusterSnapshotRequest * const q)
    : CopyClusterSnapshotPrivate(other, q)
{

}

} // namespace Redshift
} // namespace AWS
