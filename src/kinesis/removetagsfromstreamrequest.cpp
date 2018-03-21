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

#include "removetagsfromstreamrequest.h"
#include "removetagsfromstreamrequest_p.h"
#include "removetagsfromstreamresponse.h"
#include "kinesisrequest_p.h"

namespace AWS {
namespace Kinesis {

/**
 * @class  RemoveTagsFromStreamRequest
 *
 * @brief  Implements Kinesis RemoveTagsFromStream requests.
 *
 * @see    KinesisClient::removeTagsFromStream
 */

/**
 * @brief  Constructs a new RemoveTagsFromStreamResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemoveTagsFromStreamResponse::RemoveTagsFromStreamResponse(

/**
 * @brief  Constructs a new RemoveTagsFromStreamRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RemoveTagsFromStreamRequest::RemoveTagsFromStreamRequest(const RemoveTagsFromStreamRequest &other)
    : KinesisRequest(new RemoveTagsFromStreamRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RemoveTagsFromStreamRequest object.
 */
RemoveTagsFromStreamRequest::RemoveTagsFromStreamRequest()
    : KinesisRequest(new RemoveTagsFromStreamRequestPrivate(KinesisRequest::RemoveTagsFromStreamAction, this))
{

}

bool RemoveTagsFromStreamRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RemoveTagsFromStreamResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RemoveTagsFromStreamResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KinesisClient::send
 */
AwsAbstractResponse * RemoveTagsFromStreamRequest::response(QNetworkReply * const reply) const
{
    return new RemoveTagsFromStreamResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RemoveTagsFromStreamRequestPrivate
 *
 * @brief  Private implementation for RemoveTagsFromStreamRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveTagsFromStreamRequestPrivate object.
 *
 * @param  action  Kinesis action being performed.
 * @param  q       Pointer to this object's public RemoveTagsFromStreamRequest instance.
 */
RemoveTagsFromStreamRequestPrivate::RemoveTagsFromStreamRequestPrivate(
    const KinesisRequest::Action action, RemoveTagsFromStreamRequest * const q)
    : RemoveTagsFromStreamPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RemoveTagsFromStreamRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RemoveTagsFromStreamRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RemoveTagsFromStreamRequest instance.
 */
RemoveTagsFromStreamRequestPrivate::RemoveTagsFromStreamRequestPrivate(
    const RemoveTagsFromStreamRequestPrivate &other, RemoveTagsFromStreamRequest * const q)
    : RemoveTagsFromStreamPrivate(other, q)
{

}
