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

#include "copysnapshotrequest.h"
#include "copysnapshotrequest_p.h"
#include "copysnapshotresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  CopySnapshotRequest
 *
 * @brief  Implements EC2 CopySnapshot requests.
 *
 * @see    EC2Client::copySnapshot
 */

/**
 * @brief  Constructs a new CopySnapshotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CopySnapshotRequest::CopySnapshotRequest(const CopySnapshotRequest &other)
    : EC2Request(new CopySnapshotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CopySnapshotRequest object.
 */
CopySnapshotRequest::CopySnapshotRequest()
    : EC2Request(new CopySnapshotRequestPrivate(EC2Request::CopySnapshotAction, this))
{

}

bool CopySnapshotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CopySnapshotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CopySnapshotResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * CopySnapshotRequest::response(QNetworkReply * const reply) const
{
    return new CopySnapshotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CopySnapshotRequestPrivate
 *
 * @brief  Private implementation for CopySnapshotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CopySnapshotRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CopySnapshotRequest instance.
 */
CopySnapshotRequestPrivate::CopySnapshotRequestPrivate(
    const EC2Request::Action action, CopySnapshotRequest * const q)
    : CopySnapshotPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CopySnapshotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CopySnapshotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CopySnapshotRequest instance.
 */
CopySnapshotRequestPrivate::CopySnapshotRequestPrivate(
    const CopySnapshotRequestPrivate &other, CopySnapshotRequest * const q)
    : CopySnapshotPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
