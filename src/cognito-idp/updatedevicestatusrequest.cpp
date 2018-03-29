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

#include "updatedevicestatusrequest.h"
#include "updatedevicestatusrequest_p.h"
#include "updatedevicestatusresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  UpdateDeviceStatusRequest
 *
 * @brief  Implements CognitoIdentityProvider UpdateDeviceStatus requests.
 *
 * @see    CognitoIdentityProviderClient::updateDeviceStatus
 */

/**
 * @brief  Constructs a new UpdateDeviceStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateDeviceStatusRequest::UpdateDeviceStatusRequest(const UpdateDeviceStatusRequest &other)
    : CognitoIdentityProviderRequest(new UpdateDeviceStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateDeviceStatusRequest object.
 */
UpdateDeviceStatusRequest::UpdateDeviceStatusRequest()
    : CognitoIdentityProviderRequest(new UpdateDeviceStatusRequestPrivate(CognitoIdentityProviderRequest::UpdateDeviceStatusAction, this))
{

}

bool UpdateDeviceStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateDeviceStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateDeviceStatusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * UpdateDeviceStatusRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDeviceStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateDeviceStatusRequestPrivate
 *
 * @brief  Private implementation for UpdateDeviceStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDeviceStatusRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public UpdateDeviceStatusRequest instance.
 */
UpdateDeviceStatusRequestPrivate::UpdateDeviceStatusRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, UpdateDeviceStatusRequest * const q)
    : UpdateDeviceStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDeviceStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateDeviceStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateDeviceStatusRequest instance.
 */
UpdateDeviceStatusRequestPrivate::UpdateDeviceStatusRequestPrivate(
    const UpdateDeviceStatusRequestPrivate &other, UpdateDeviceStatusRequest * const q)
    : UpdateDeviceStatusPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
