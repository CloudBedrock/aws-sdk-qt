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

#include "settimebasedautoscalingrequest.h"
#include "settimebasedautoscalingrequest_p.h"
#include "settimebasedautoscalingresponse.h"
#include "opsworksrequest_p.h"

namespace QtAws {
namespace OpsWorks {

/**
 * @class  SetTimeBasedAutoScalingRequest
 *
 * @brief  Implements OpsWorks SetTimeBasedAutoScaling requests.
 *
 * @see    OpsWorksClient::setTimeBasedAutoScaling
 */

/**
 * @brief  Constructs a new SetTimeBasedAutoScalingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetTimeBasedAutoScalingRequest::SetTimeBasedAutoScalingRequest(const SetTimeBasedAutoScalingRequest &other)
    : OpsWorksRequest(new SetTimeBasedAutoScalingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetTimeBasedAutoScalingRequest object.
 */
SetTimeBasedAutoScalingRequest::SetTimeBasedAutoScalingRequest()
    : OpsWorksRequest(new SetTimeBasedAutoScalingRequestPrivate(OpsWorksRequest::SetTimeBasedAutoScalingAction, this))
{

}

bool SetTimeBasedAutoScalingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetTimeBasedAutoScalingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetTimeBasedAutoScalingResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
QtAws::Core::AwsAbstractResponse * SetTimeBasedAutoScalingRequest::response(QNetworkReply * const reply) const
{
    return new SetTimeBasedAutoScalingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetTimeBasedAutoScalingRequestPrivate
 *
 * @brief  Private implementation for SetTimeBasedAutoScalingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetTimeBasedAutoScalingRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public SetTimeBasedAutoScalingRequest instance.
 */
SetTimeBasedAutoScalingRequestPrivate::SetTimeBasedAutoScalingRequestPrivate(
    const OpsWorksRequest::Action action, SetTimeBasedAutoScalingRequest * const q)
    : OpsWorksRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetTimeBasedAutoScalingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetTimeBasedAutoScalingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetTimeBasedAutoScalingRequest instance.
 */
SetTimeBasedAutoScalingRequestPrivate::SetTimeBasedAutoScalingRequestPrivate(
    const SetTimeBasedAutoScalingRequestPrivate &other, SetTimeBasedAutoScalingRequest * const q)
    : OpsWorksRequestPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace QtAws
