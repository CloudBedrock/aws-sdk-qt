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

#include "untagqueuerequest.h"
#include "untagqueuerequest_p.h"
#include "untagqueueresponse.h"
#include "sqsrequest_p.h"

namespace AWS {
namespace SQS {

/**
 * @class  UntagQueueRequest
 *
 * @brief  Implements SQS UntagQueue requests.
 *
 * @see    SQSClient::untagQueue
 */

/**
 * @brief  Constructs a new UntagQueueResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UntagQueueResponse::UntagQueueResponse(

/**
 * @brief  Constructs a new UntagQueueRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UntagQueueRequest::UntagQueueRequest(const UntagQueueRequest &other)
    : SQSRequest(new UntagQueueRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UntagQueueRequest object.
 */
UntagQueueRequest::UntagQueueRequest()
    : SQSRequest(new UntagQueueRequestPrivate(SQSRequest::UntagQueueAction, this))
{

}

bool UntagQueueRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UntagQueueResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UntagQueueResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SQSClient::send
 */
AwsAbstractResponse * UntagQueueRequest::response(QNetworkReply * const reply) const
{
    return new UntagQueueResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UntagQueueRequestPrivate
 *
 * @brief  Private implementation for UntagQueueRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UntagQueueRequestPrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public UntagQueueRequest instance.
 */
UntagQueueRequestPrivate::UntagQueueRequestPrivate(
    const SQSRequest::Action action, UntagQueueRequest * const q)
    : UntagQueuePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UntagQueueRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UntagQueueRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UntagQueueRequest instance.
 */
UntagQueueRequestPrivate::UntagQueueRequestPrivate(
    const UntagQueueRequestPrivate &other, UntagQueueRequest * const q)
    : UntagQueuePrivate(other, q)
{

}

} // namespace SQS
} // namespace AWS
