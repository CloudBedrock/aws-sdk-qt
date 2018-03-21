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

#include "deletevolumerequest.h"
#include "deletevolumerequest_p.h"
#include "deletevolumeresponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  DeleteVolumeRequest
 *
 * @brief  Implements StorageGateway DeleteVolume requests.
 *
 * @see    StorageGatewayClient::deleteVolume
 */

/**
 * @brief  Constructs a new DeleteVolumeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteVolumeResponse::DeleteVolumeResponse(

/**
 * @brief  Constructs a new DeleteVolumeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteVolumeRequest::DeleteVolumeRequest(const DeleteVolumeRequest &other)
    : StorageGatewayRequest(new DeleteVolumeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteVolumeRequest object.
 */
DeleteVolumeRequest::DeleteVolumeRequest()
    : StorageGatewayRequest(new DeleteVolumeRequestPrivate(StorageGatewayRequest::DeleteVolumeAction, this))
{

}

bool DeleteVolumeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteVolumeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteVolumeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * DeleteVolumeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVolumeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteVolumeRequestPrivate
 *
 * @brief  Private implementation for DeleteVolumeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVolumeRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public DeleteVolumeRequest instance.
 */
DeleteVolumeRequestPrivate::DeleteVolumeRequestPrivate(
    const StorageGatewayRequest::Action action, DeleteVolumeRequest * const q)
    : DeleteVolumePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVolumeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteVolumeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteVolumeRequest instance.
 */
DeleteVolumeRequestPrivate::DeleteVolumeRequestPrivate(
    const DeleteVolumeRequestPrivate &other, DeleteVolumeRequest * const q)
    : DeleteVolumePrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace AWS
