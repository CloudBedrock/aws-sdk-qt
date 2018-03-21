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

#include "updatedevicedefinitionrequest.h"
#include "updatedevicedefinitionrequest_p.h"
#include "updatedevicedefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  UpdateDeviceDefinitionRequest
 *
 * @brief  Implements Greengrass UpdateDeviceDefinition requests.
 *
 * @see    GreengrassClient::updateDeviceDefinition
 */

/**
 * @brief  Constructs a new UpdateDeviceDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDeviceDefinitionResponse::UpdateDeviceDefinitionResponse(

/**
 * @brief  Constructs a new UpdateDeviceDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateDeviceDefinitionRequest::UpdateDeviceDefinitionRequest(const UpdateDeviceDefinitionRequest &other)
    : GreengrassRequest(new UpdateDeviceDefinitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateDeviceDefinitionRequest object.
 */
UpdateDeviceDefinitionRequest::UpdateDeviceDefinitionRequest()
    : GreengrassRequest(new UpdateDeviceDefinitionRequestPrivate(GreengrassRequest::UpdateDeviceDefinitionAction, this))
{

}

bool UpdateDeviceDefinitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateDeviceDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateDeviceDefinitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * UpdateDeviceDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDeviceDefinitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateDeviceDefinitionRequestPrivate
 *
 * @brief  Private implementation for UpdateDeviceDefinitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDeviceDefinitionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public UpdateDeviceDefinitionRequest instance.
 */
UpdateDeviceDefinitionRequestPrivate::UpdateDeviceDefinitionRequestPrivate(
    const GreengrassRequest::Action action, UpdateDeviceDefinitionRequest * const q)
    : UpdateDeviceDefinitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDeviceDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateDeviceDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateDeviceDefinitionRequest instance.
 */
UpdateDeviceDefinitionRequestPrivate::UpdateDeviceDefinitionRequestPrivate(
    const UpdateDeviceDefinitionRequestPrivate &other, UpdateDeviceDefinitionRequest * const q)
    : UpdateDeviceDefinitionPrivate(other, q)
{

}
