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

#include "updateeventconfigurationsrequest.h"
#include "updateeventconfigurationsrequest_p.h"
#include "updateeventconfigurationsresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  UpdateEventConfigurationsRequest
 *
 * @brief  Implements IoT UpdateEventConfigurations requests.
 *
 * @see    IoTClient::updateEventConfigurations
 */

/**
 * @brief  Constructs a new UpdateEventConfigurationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateEventConfigurationsRequest::UpdateEventConfigurationsRequest(const UpdateEventConfigurationsRequest &other)
    : IoTRequest(new UpdateEventConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateEventConfigurationsRequest object.
 */
UpdateEventConfigurationsRequest::UpdateEventConfigurationsRequest()
    : IoTRequest(new UpdateEventConfigurationsRequestPrivate(IoTRequest::UpdateEventConfigurationsAction, this))
{

}

bool UpdateEventConfigurationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateEventConfigurationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateEventConfigurationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * UpdateEventConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEventConfigurationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateEventConfigurationsRequestPrivate
 *
 * @brief  Private implementation for UpdateEventConfigurationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateEventConfigurationsRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public UpdateEventConfigurationsRequest instance.
 */
UpdateEventConfigurationsRequestPrivate::UpdateEventConfigurationsRequestPrivate(
    const IoTRequest::Action action, UpdateEventConfigurationsRequest * const q)
    : UpdateEventConfigurationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateEventConfigurationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateEventConfigurationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateEventConfigurationsRequest instance.
 */
UpdateEventConfigurationsRequestPrivate::UpdateEventConfigurationsRequestPrivate(
    const UpdateEventConfigurationsRequestPrivate &other, UpdateEventConfigurationsRequest * const q)
    : UpdateEventConfigurationsPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
