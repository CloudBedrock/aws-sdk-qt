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

#include "deletediskrequest.h"
#include "deletediskrequest_p.h"
#include "deletediskresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  DeleteDiskRequest
 *
 * @brief  Implements Lightsail DeleteDisk requests.
 *
 * @see    LightsailClient::deleteDisk
 */

/**
 * @brief  Constructs a new DeleteDiskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDiskResponse::DeleteDiskResponse(

/**
 * @brief  Constructs a new DeleteDiskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDiskRequest::DeleteDiskRequest(const DeleteDiskRequest &other)
    : LightsailRequest(new DeleteDiskRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDiskRequest object.
 */
DeleteDiskRequest::DeleteDiskRequest()
    : LightsailRequest(new DeleteDiskRequestPrivate(LightsailRequest::DeleteDiskAction, this))
{

}

bool DeleteDiskRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDiskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDiskResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * DeleteDiskRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDiskResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDiskRequestPrivate
 *
 * @brief  Private implementation for DeleteDiskRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDiskRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public DeleteDiskRequest instance.
 */
DeleteDiskRequestPrivate::DeleteDiskRequestPrivate(
    const LightsailRequest::Action action, DeleteDiskRequest * const q)
    : DeleteDiskPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDiskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDiskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDiskRequest instance.
 */
DeleteDiskRequestPrivate::DeleteDiskRequestPrivate(
    const DeleteDiskRequestPrivate &other, DeleteDiskRequest * const q)
    : DeleteDiskPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
