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

#include "completelifecycleactionrequest.h"
#include "completelifecycleactionrequest_p.h"
#include "completelifecycleactionresponse.h"
#include "autoscalingrequest_p.h"

namespace AWS {
namespace AutoScaling {

/**
 * @class  CompleteLifecycleActionRequest
 *
 * @brief  Implements AutoScaling CompleteLifecycleAction requests.
 *
 * @see    AutoScalingClient::completeLifecycleAction
 */

/**
 * @brief  Constructs a new CompleteLifecycleActionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CompleteLifecycleActionResponse::CompleteLifecycleActionResponse(

/**
 * @brief  Constructs a new CompleteLifecycleActionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CompleteLifecycleActionRequest::CompleteLifecycleActionRequest(const CompleteLifecycleActionRequest &other)
    : AutoScalingRequest(new CompleteLifecycleActionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CompleteLifecycleActionRequest object.
 */
CompleteLifecycleActionRequest::CompleteLifecycleActionRequest()
    : AutoScalingRequest(new CompleteLifecycleActionRequestPrivate(AutoScalingRequest::CompleteLifecycleActionAction, this))
{

}

bool CompleteLifecycleActionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CompleteLifecycleActionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CompleteLifecycleActionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
AwsAbstractResponse * CompleteLifecycleActionRequest::response(QNetworkReply * const reply) const
{
    return new CompleteLifecycleActionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CompleteLifecycleActionRequestPrivate
 *
 * @brief  Private implementation for CompleteLifecycleActionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CompleteLifecycleActionRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public CompleteLifecycleActionRequest instance.
 */
CompleteLifecycleActionRequestPrivate::CompleteLifecycleActionRequestPrivate(
    const AutoScalingRequest::Action action, CompleteLifecycleActionRequest * const q)
    : CompleteLifecycleActionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CompleteLifecycleActionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CompleteLifecycleActionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CompleteLifecycleActionRequest instance.
 */
CompleteLifecycleActionRequestPrivate::CompleteLifecycleActionRequestPrivate(
    const CompleteLifecycleActionRequestPrivate &other, CompleteLifecycleActionRequest * const q)
    : CompleteLifecycleActionPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace AWS
