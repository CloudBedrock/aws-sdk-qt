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

#include "importsnapshotrequest.h"
#include "importsnapshotrequest_p.h"
#include "importsnapshotresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  ImportSnapshotRequest
 *
 * @brief  Implements EC2 ImportSnapshot requests.
 *
 * @see    EC2Client::importSnapshot
 */

/**
 * @brief  Constructs a new ImportSnapshotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ImportSnapshotResponse::ImportSnapshotResponse(

/**
 * @brief  Constructs a new ImportSnapshotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ImportSnapshotRequest::ImportSnapshotRequest(const ImportSnapshotRequest &other)
    : EC2Request(new ImportSnapshotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ImportSnapshotRequest object.
 */
ImportSnapshotRequest::ImportSnapshotRequest()
    : EC2Request(new ImportSnapshotRequestPrivate(EC2Request::ImportSnapshotAction, this))
{

}

bool ImportSnapshotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ImportSnapshotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ImportSnapshotResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * ImportSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new ImportSnapshotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ImportSnapshotRequestPrivate
 *
 * @brief  Private implementation for ImportSnapshotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ImportSnapshotRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ImportSnapshotRequest instance.
 */
ImportSnapshotRequestPrivate::ImportSnapshotRequestPrivate(
    const EC2Request::Action action, ImportSnapshotRequest * const q)
    : ImportSnapshotPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ImportSnapshotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ImportSnapshotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ImportSnapshotRequest instance.
 */
ImportSnapshotRequestPrivate::ImportSnapshotRequestPrivate(
    const ImportSnapshotRequestPrivate &other, ImportSnapshotRequest * const q)
    : ImportSnapshotPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
