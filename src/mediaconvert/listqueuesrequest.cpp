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

#include "listqueuesrequest.h"
#include "listqueuesrequest_p.h"
#include "listqueuesresponse.h"
#include "mediaconvertrequest_p.h"

namespace AWS {
namespace MediaConvert {

/**
 * @class  ListQueuesRequest
 *
 * @brief  Implements MediaConvert ListQueues requests.
 *
 * @see    MediaConvertClient::listQueues
 */

/**
 * @brief  Constructs a new ListQueuesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListQueuesResponse::ListQueuesResponse(

/**
 * @brief  Constructs a new ListQueuesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListQueuesRequest::ListQueuesRequest(const ListQueuesRequest &other)
    : MediaConvertRequest(new ListQueuesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListQueuesRequest object.
 */
ListQueuesRequest::ListQueuesRequest()
    : MediaConvertRequest(new ListQueuesRequestPrivate(MediaConvertRequest::ListQueuesAction, this))
{

}

bool ListQueuesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListQueuesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListQueuesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaConvertClient::send
 */
AwsAbstractResponse * ListQueuesRequest::response(QNetworkReply * const reply) const
{
    return new ListQueuesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListQueuesRequestPrivate
 *
 * @brief  Private implementation for ListQueuesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListQueuesRequestPrivate object.
 *
 * @param  action  MediaConvert action being performed.
 * @param  q       Pointer to this object's public ListQueuesRequest instance.
 */
ListQueuesRequestPrivate::ListQueuesRequestPrivate(
    const MediaConvertRequest::Action action, ListQueuesRequest * const q)
    : ListQueuesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListQueuesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListQueuesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListQueuesRequest instance.
 */
ListQueuesRequestPrivate::ListQueuesRequestPrivate(
    const ListQueuesRequestPrivate &other, ListQueuesRequest * const q)
    : ListQueuesPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace AWS
