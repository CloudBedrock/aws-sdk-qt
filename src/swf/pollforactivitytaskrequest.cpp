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

#include "pollforactivitytaskrequest.h"
#include "pollforactivitytaskrequest_p.h"
#include "pollforactivitytaskresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace SWF {

/**
 * @class  PollForActivityTaskRequest
 *
 * @brief  Implements SWF PollForActivityTask requests.
 *
 * @see    SWFClient::pollForActivityTask
 */

/**
 * @brief  Constructs a new PollForActivityTaskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PollForActivityTaskRequest::PollForActivityTaskRequest(const PollForActivityTaskRequest &other)
    : SWFRequest(new PollForActivityTaskRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PollForActivityTaskRequest object.
 */
PollForActivityTaskRequest::PollForActivityTaskRequest()
    : SWFRequest(new PollForActivityTaskRequestPrivate(SWFRequest::PollForActivityTaskAction, this))
{

}

bool PollForActivityTaskRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PollForActivityTaskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PollForActivityTaskResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SWFClient::send
 */
QtAws::Core::AwsAbstractResponse * PollForActivityTaskRequest::response(QNetworkReply * const reply) const
{
    return new PollForActivityTaskResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PollForActivityTaskRequestPrivate
 *
 * @brief  Private implementation for PollForActivityTaskRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PollForActivityTaskRequestPrivate object.
 *
 * @param  action  SWF action being performed.
 * @param  q       Pointer to this object's public PollForActivityTaskRequest instance.
 */
PollForActivityTaskRequestPrivate::PollForActivityTaskRequestPrivate(
    const SWFRequest::Action action, PollForActivityTaskRequest * const q)
    : SWFRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PollForActivityTaskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PollForActivityTaskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PollForActivityTaskRequest instance.
 */
PollForActivityTaskRequestPrivate::PollForActivityTaskRequestPrivate(
    const PollForActivityTaskRequestPrivate &other, PollForActivityTaskRequest * const q)
    : SWFRequestPrivate(other, q)
{

}

} // namespace SWF
} // namespace QtAws
