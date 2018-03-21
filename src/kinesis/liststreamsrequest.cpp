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

#include "liststreamsrequest.h"
#include "liststreamsrequest_p.h"
#include "liststreamsresponse.h"
#include "kinesisrequest_p.h"

namespace AWS {
namespace Kinesis {

/**
 * @class  ListStreamsRequest
 *
 * @brief  Implements Kinesis ListStreams requests.
 *
 * @see    KinesisClient::listStreams
 */

/**
 * @brief  Constructs a new ListStreamsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListStreamsResponse::ListStreamsResponse(

/**
 * @brief  Constructs a new ListStreamsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListStreamsRequest::ListStreamsRequest(const ListStreamsRequest &other)
    : KinesisRequest(new ListStreamsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListStreamsRequest object.
 */
ListStreamsRequest::ListStreamsRequest()
    : KinesisRequest(new ListStreamsRequestPrivate(KinesisRequest::ListStreamsAction, this))
{

}

bool ListStreamsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListStreamsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListStreamsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KinesisClient::send
 */
AwsAbstractResponse * ListStreamsRequest::response(QNetworkReply * const reply) const
{
    return new ListStreamsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListStreamsRequestPrivate
 *
 * @brief  Private implementation for ListStreamsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListStreamsRequestPrivate object.
 *
 * @param  action  Kinesis action being performed.
 * @param  q       Pointer to this object's public ListStreamsRequest instance.
 */
ListStreamsRequestPrivate::ListStreamsRequestPrivate(
    const KinesisRequest::Action action, ListStreamsRequest * const q)
    : ListStreamsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListStreamsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListStreamsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListStreamsRequest instance.
 */
ListStreamsRequestPrivate::ListStreamsRequestPrivate(
    const ListStreamsRequestPrivate &other, ListStreamsRequest * const q)
    : ListStreamsPrivate(other, q)
{

}
