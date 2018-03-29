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

#include "sendmessagebatchrequest.h"
#include "sendmessagebatchrequest_p.h"
#include "sendmessagebatchresponse.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SQS {

/**
 * @class  SendMessageBatchRequest
 *
 * @brief  Implements SQS SendMessageBatch requests.
 *
 * @see    SQSClient::sendMessageBatch
 */

/**
 * @brief  Constructs a new SendMessageBatchRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SendMessageBatchRequest::SendMessageBatchRequest(const SendMessageBatchRequest &other)
    : SQSRequest(new SendMessageBatchRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SendMessageBatchRequest object.
 */
SendMessageBatchRequest::SendMessageBatchRequest()
    : SQSRequest(new SendMessageBatchRequestPrivate(SQSRequest::SendMessageBatchAction, this))
{

}

bool SendMessageBatchRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SendMessageBatchResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SendMessageBatchResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SQSClient::send
 */
QtAws::Core::AwsAbstractResponse * SendMessageBatchRequest::response(QNetworkReply * const reply) const
{
    return new SendMessageBatchResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SendMessageBatchRequestPrivate
 *
 * @brief  Private implementation for SendMessageBatchRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SendMessageBatchRequestPrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public SendMessageBatchRequest instance.
 */
SendMessageBatchRequestPrivate::SendMessageBatchRequestPrivate(
    const SQSRequest::Action action, SendMessageBatchRequest * const q)
    : SQSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SendMessageBatchRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SendMessageBatchRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SendMessageBatchRequest instance.
 */
SendMessageBatchRequestPrivate::SendMessageBatchRequestPrivate(
    const SendMessageBatchRequestPrivate &other, SendMessageBatchRequest * const q)
    : SQSRequestPrivate(other, q)
{

}

} // namespace SQS
} // namespace QtAws
