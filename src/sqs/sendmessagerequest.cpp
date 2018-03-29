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

#include "sendmessagerequest.h"
#include "sendmessagerequest_p.h"
#include "sendmessageresponse.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SQS {

/**
 * @class  SendMessageRequest
 *
 * @brief  Implements SQS SendMessage requests.
 *
 * @see    SQSClient::sendMessage
 */

/**
 * @brief  Constructs a new SendMessageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SendMessageRequest::SendMessageRequest(const SendMessageRequest &other)
    : SQSRequest(new SendMessageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SendMessageRequest object.
 */
SendMessageRequest::SendMessageRequest()
    : SQSRequest(new SendMessageRequestPrivate(SQSRequest::SendMessageAction, this))
{

}

bool SendMessageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SendMessageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SendMessageResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SQSClient::send
 */
QtAws::Core::AwsAbstractResponse * SendMessageRequest::response(QNetworkReply * const reply) const
{
    return new SendMessageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SendMessageRequestPrivate
 *
 * @brief  Private implementation for SendMessageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SendMessageRequestPrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public SendMessageRequest instance.
 */
SendMessageRequestPrivate::SendMessageRequestPrivate(
    const SQSRequest::Action action, SendMessageRequest * const q)
    : SQSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SendMessageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SendMessageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SendMessageRequest instance.
 */
SendMessageRequestPrivate::SendMessageRequestPrivate(
    const SendMessageRequestPrivate &other, SendMessageRequest * const q)
    : SQSRequestPrivate(other, q)
{

}

} // namespace SQS
} // namespace QtAws
