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

#include "removepermissionrequest.h"
#include "removepermissionrequest_p.h"
#include "removepermissionresponse.h"
#include "cloudwatcheventsrequest_p.h"

namespace AWS {
namespace CloudWatchEvents {

/**
 * @class  RemovePermissionRequest
 *
 * @brief  Implements CloudWatchEvents RemovePermission requests.
 *
 * @see    CloudWatchEventsClient::removePermission
 */

/**
 * @brief  Constructs a new RemovePermissionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemovePermissionResponse::RemovePermissionResponse(

/**
 * @brief  Constructs a new RemovePermissionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RemovePermissionRequest::RemovePermissionRequest(const RemovePermissionRequest &other)
    : CloudWatchEventsRequest(new RemovePermissionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RemovePermissionRequest object.
 */
RemovePermissionRequest::RemovePermissionRequest()
    : CloudWatchEventsRequest(new RemovePermissionRequestPrivate(CloudWatchEventsRequest::RemovePermissionAction, this))
{

}

bool RemovePermissionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RemovePermissionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RemovePermissionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchEventsClient::send
 */
AwsAbstractResponse * RemovePermissionRequest::response(QNetworkReply * const reply) const
{
    return new RemovePermissionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RemovePermissionRequestPrivate
 *
 * @brief  Private implementation for RemovePermissionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemovePermissionRequestPrivate object.
 *
 * @param  action  CloudWatchEvents action being performed.
 * @param  q       Pointer to this object's public RemovePermissionRequest instance.
 */
RemovePermissionRequestPrivate::RemovePermissionRequestPrivate(
    const CloudWatchEventsRequest::Action action, RemovePermissionRequest * const q)
    : RemovePermissionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RemovePermissionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RemovePermissionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RemovePermissionRequest instance.
 */
RemovePermissionRequestPrivate::RemovePermissionRequestPrivate(
    const RemovePermissionRequestPrivate &other, RemovePermissionRequest * const q)
    : RemovePermissionPrivate(other, q)
{

}

} // namespace CloudWatchEvents
} // namespace AWS
