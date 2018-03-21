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

#include "putitemrequest.h"
#include "putitemrequest_p.h"
#include "putitemresponse.h"
#include "dynamodbrequest_p.h"

namespace AWS {
namespace DynamoDB {

/**
 * @class  PutItemRequest
 *
 * @brief  Implements DynamoDB PutItem requests.
 *
 * @see    DynamoDBClient::putItem
 */

/**
 * @brief  Constructs a new PutItemResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutItemResponse::PutItemResponse(

/**
 * @brief  Constructs a new PutItemRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutItemRequest::PutItemRequest(const PutItemRequest &other)
    : DynamoDBRequest(new PutItemRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutItemRequest object.
 */
PutItemRequest::PutItemRequest()
    : DynamoDBRequest(new PutItemRequestPrivate(DynamoDBRequest::PutItemAction, this))
{

}

bool PutItemRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutItemResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutItemResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DynamoDBClient::send
 */
AwsAbstractResponse * PutItemRequest::response(QNetworkReply * const reply) const
{
    return new PutItemResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutItemRequestPrivate
 *
 * @brief  Private implementation for PutItemRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutItemRequestPrivate object.
 *
 * @param  action  DynamoDB action being performed.
 * @param  q       Pointer to this object's public PutItemRequest instance.
 */
PutItemRequestPrivate::PutItemRequestPrivate(
    const DynamoDBRequest::Action action, PutItemRequest * const q)
    : PutItemPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutItemRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutItemRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutItemRequest instance.
 */
PutItemRequestPrivate::PutItemRequestPrivate(
    const PutItemRequestPrivate &other, PutItemRequest * const q)
    : PutItemPrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace AWS
