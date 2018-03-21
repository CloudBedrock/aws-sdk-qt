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

#include "deletescheduledactionrequest.h"
#include "deletescheduledactionrequest_p.h"
#include "deletescheduledactionresponse.h"
#include "applicationautoscalingrequest_p.h"

namespace AWS {
namespace ApplicationAutoScaling {

/**
 * @class  DeleteScheduledActionRequest
 *
 * @brief  Implements ApplicationAutoScaling DeleteScheduledAction requests.
 *
 * @see    ApplicationAutoScalingClient::deleteScheduledAction
 */

/**
 * @brief  Constructs a new DeleteScheduledActionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteScheduledActionRequest::DeleteScheduledActionRequest(const DeleteScheduledActionRequest &other)
    : ApplicationAutoScalingRequest(new DeleteScheduledActionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteScheduledActionRequest object.
 */
DeleteScheduledActionRequest::DeleteScheduledActionRequest()
    : ApplicationAutoScalingRequest(new DeleteScheduledActionRequestPrivate(ApplicationAutoScalingRequest::DeleteScheduledActionAction, this))
{

}

bool DeleteScheduledActionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteScheduledActionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteScheduledActionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ApplicationAutoScalingClient::send
 */
AwsAbstractResponse * DeleteScheduledActionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteScheduledActionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteScheduledActionRequestPrivate
 *
 * @brief  Private implementation for DeleteScheduledActionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteScheduledActionRequestPrivate object.
 *
 * @param  action  ApplicationAutoScaling action being performed.
 * @param  q       Pointer to this object's public DeleteScheduledActionRequest instance.
 */
DeleteScheduledActionRequestPrivate::DeleteScheduledActionRequestPrivate(
    const ApplicationAutoScalingRequest::Action action, DeleteScheduledActionRequest * const q)
    : DeleteScheduledActionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteScheduledActionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteScheduledActionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteScheduledActionRequest instance.
 */
DeleteScheduledActionRequestPrivate::DeleteScheduledActionRequestPrivate(
    const DeleteScheduledActionRequestPrivate &other, DeleteScheduledActionRequest * const q)
    : DeleteScheduledActionPrivate(other, q)
{

}

} // namespace ApplicationAutoScaling
} // namespace AWS
