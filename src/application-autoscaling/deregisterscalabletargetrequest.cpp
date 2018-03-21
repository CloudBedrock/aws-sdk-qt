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

#include "deregisterscalabletargetrequest.h"
#include "deregisterscalabletargetrequest_p.h"
#include "deregisterscalabletargetresponse.h"
#include "applicationautoscalingrequest_p.h"

namespace AWS {
namespace ApplicationAutoScaling {

/**
 * @class  DeregisterScalableTargetRequest
 *
 * @brief  Implements ApplicationAutoScaling DeregisterScalableTarget requests.
 *
 * @see    ApplicationAutoScalingClient::deregisterScalableTarget
 */

/**
 * @brief  Constructs a new DeregisterScalableTargetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeregisterScalableTargetRequest::DeregisterScalableTargetRequest(const DeregisterScalableTargetRequest &other)
    : ApplicationAutoScalingRequest(new DeregisterScalableTargetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeregisterScalableTargetRequest object.
 */
DeregisterScalableTargetRequest::DeregisterScalableTargetRequest()
    : ApplicationAutoScalingRequest(new DeregisterScalableTargetRequestPrivate(ApplicationAutoScalingRequest::DeregisterScalableTargetAction, this))
{

}

bool DeregisterScalableTargetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeregisterScalableTargetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeregisterScalableTargetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ApplicationAutoScalingClient::send
 */
AwsAbstractResponse * DeregisterScalableTargetRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterScalableTargetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeregisterScalableTargetRequestPrivate
 *
 * @brief  Private implementation for DeregisterScalableTargetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterScalableTargetRequestPrivate object.
 *
 * @param  action  ApplicationAutoScaling action being performed.
 * @param  q       Pointer to this object's public DeregisterScalableTargetRequest instance.
 */
DeregisterScalableTargetRequestPrivate::DeregisterScalableTargetRequestPrivate(
    const ApplicationAutoScalingRequest::Action action, DeregisterScalableTargetRequest * const q)
    : DeregisterScalableTargetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterScalableTargetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeregisterScalableTargetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeregisterScalableTargetRequest instance.
 */
DeregisterScalableTargetRequestPrivate::DeregisterScalableTargetRequestPrivate(
    const DeregisterScalableTargetRequestPrivate &other, DeregisterScalableTargetRequest * const q)
    : DeregisterScalableTargetPrivate(other, q)
{

}

} // namespace ApplicationAutoScaling
} // namespace AWS
