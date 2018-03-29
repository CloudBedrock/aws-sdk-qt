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

#include "deletemessagebatchrequest.h"
#include "deletemessagebatchrequest_p.h"
#include "deletemessagebatchresponse.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SQS {

/**
 * @class  DeleteMessageBatchRequest
 *
 * @brief  Implements SQS DeleteMessageBatch requests.
 *
 * @see    SQSClient::deleteMessageBatch
 */

/**
 * @brief  Constructs a new DeleteMessageBatchRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteMessageBatchRequest::DeleteMessageBatchRequest(const DeleteMessageBatchRequest &other)
    : SQSRequest(new DeleteMessageBatchRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteMessageBatchRequest object.
 */
DeleteMessageBatchRequest::DeleteMessageBatchRequest()
    : SQSRequest(new DeleteMessageBatchRequestPrivate(SQSRequest::DeleteMessageBatchAction, this))
{

}

bool DeleteMessageBatchRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteMessageBatchResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteMessageBatchResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SQSClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMessageBatchRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMessageBatchResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteMessageBatchRequestPrivate
 *
 * @brief  Private implementation for DeleteMessageBatchRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteMessageBatchRequestPrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public DeleteMessageBatchRequest instance.
 */
DeleteMessageBatchRequestPrivate::DeleteMessageBatchRequestPrivate(
    const SQSRequest::Action action, DeleteMessageBatchRequest * const q)
    : SQSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteMessageBatchRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteMessageBatchRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteMessageBatchRequest instance.
 */
DeleteMessageBatchRequestPrivate::DeleteMessageBatchRequestPrivate(
    const DeleteMessageBatchRequestPrivate &other, DeleteMessageBatchRequest * const q)
    : SQSRequestPrivate(other, q)
{

}

} // namespace SQS
} // namespace QtAws
