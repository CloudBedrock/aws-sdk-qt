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

#include "respondactivitytaskcanceledrequest.h"
#include "respondactivitytaskcanceledrequest_p.h"
#include "respondactivitytaskcanceledresponse.h"
#include "swfrequest_p.h"

namespace AWS {
namespace SWF {

/**
 * @class  RespondActivityTaskCanceledRequest
 *
 * @brief  Implements SWF RespondActivityTaskCanceled requests.
 *
 * @see    SWFClient::respondActivityTaskCanceled
 */

/**
 * @brief  Constructs a new RespondActivityTaskCanceledRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RespondActivityTaskCanceledRequest::RespondActivityTaskCanceledRequest(const RespondActivityTaskCanceledRequest &other)
    : SWFRequest(new RespondActivityTaskCanceledRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RespondActivityTaskCanceledRequest object.
 */
RespondActivityTaskCanceledRequest::RespondActivityTaskCanceledRequest()
    : SWFRequest(new RespondActivityTaskCanceledRequestPrivate(SWFRequest::RespondActivityTaskCanceledAction, this))
{

}

bool RespondActivityTaskCanceledRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RespondActivityTaskCanceledResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RespondActivityTaskCanceledResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SWFClient::send
 */
AwsAbstractResponse * RespondActivityTaskCanceledRequest::response(QNetworkReply * const reply) const
{
    return new RespondActivityTaskCanceledResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RespondActivityTaskCanceledRequestPrivate
 *
 * @brief  Private implementation for RespondActivityTaskCanceledRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RespondActivityTaskCanceledRequestPrivate object.
 *
 * @param  action  SWF action being performed.
 * @param  q       Pointer to this object's public RespondActivityTaskCanceledRequest instance.
 */
RespondActivityTaskCanceledRequestPrivate::RespondActivityTaskCanceledRequestPrivate(
    const SWFRequest::Action action, RespondActivityTaskCanceledRequest * const q)
    : RespondActivityTaskCanceledPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RespondActivityTaskCanceledRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RespondActivityTaskCanceledRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RespondActivityTaskCanceledRequest instance.
 */
RespondActivityTaskCanceledRequestPrivate::RespondActivityTaskCanceledRequestPrivate(
    const RespondActivityTaskCanceledRequestPrivate &other, RespondActivityTaskCanceledRequest * const q)
    : RespondActivityTaskCanceledPrivate(other, q)
{

}

} // namespace SWF
} // namespace AWS
