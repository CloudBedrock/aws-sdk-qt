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

#include "listfragmentsrequest.h"
#include "listfragmentsrequest_p.h"
#include "listfragmentsresponse.h"
#include "kinesisvideoarchivedmediarequest_p.h"

namespace AWS {
namespace KinesisVideoArchivedMedia {

/**
 * @class  ListFragmentsRequest
 *
 * @brief  Implements KinesisVideoArchivedMedia ListFragments requests.
 *
 * @see    KinesisVideoArchivedMediaClient::listFragments
 */

/**
 * @brief  Constructs a new ListFragmentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListFragmentsRequest::ListFragmentsRequest(const ListFragmentsRequest &other)
    : KinesisVideoArchivedMediaRequest(new ListFragmentsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListFragmentsRequest object.
 */
ListFragmentsRequest::ListFragmentsRequest()
    : KinesisVideoArchivedMediaRequest(new ListFragmentsRequestPrivate(KinesisVideoArchivedMediaRequest::ListFragmentsAction, this))
{

}

bool ListFragmentsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListFragmentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListFragmentsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KinesisVideoArchivedMediaClient::send
 */
AwsAbstractResponse * ListFragmentsRequest::response(QNetworkReply * const reply) const
{
    return new ListFragmentsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListFragmentsRequestPrivate
 *
 * @brief  Private implementation for ListFragmentsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListFragmentsRequestPrivate object.
 *
 * @param  action  KinesisVideoArchivedMedia action being performed.
 * @param  q       Pointer to this object's public ListFragmentsRequest instance.
 */
ListFragmentsRequestPrivate::ListFragmentsRequestPrivate(
    const KinesisVideoArchivedMediaRequest::Action action, ListFragmentsRequest * const q)
    : ListFragmentsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListFragmentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListFragmentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListFragmentsRequest instance.
 */
ListFragmentsRequestPrivate::ListFragmentsRequestPrivate(
    const ListFragmentsRequestPrivate &other, ListFragmentsRequest * const q)
    : ListFragmentsPrivate(other, q)
{

}

} // namespace KinesisVideoArchivedMedia
} // namespace AWS
