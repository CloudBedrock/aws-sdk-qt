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

#include "listpartsrequest.h"
#include "listpartsrequest_p.h"
#include "listpartsresponse.h"
#include "s3request_p.h"

namespace AWS {
namespace S3 {

/**
 * @class  ListPartsRequest
 *
 * @brief  Implements S3 ListParts requests.
 *
 * @see    S3Client::listParts
 */

/**
 * @brief  Constructs a new ListPartsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListPartsRequest::ListPartsRequest(const ListPartsRequest &other)
    : S3Request(new ListPartsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListPartsRequest object.
 */
ListPartsRequest::ListPartsRequest()
    : S3Request(new ListPartsRequestPrivate(S3Request::ListPartsAction, this))
{

}

bool ListPartsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListPartsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListPartsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * ListPartsRequest::response(QNetworkReply * const reply) const
{
    return new ListPartsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListPartsRequestPrivate
 *
 * @brief  Private implementation for ListPartsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPartsRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public ListPartsRequest instance.
 */
ListPartsRequestPrivate::ListPartsRequestPrivate(
    const S3Request::Action action, ListPartsRequest * const q)
    : ListPartsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListPartsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListPartsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListPartsRequest instance.
 */
ListPartsRequestPrivate::ListPartsRequestPrivate(
    const ListPartsRequestPrivate &other, ListPartsRequest * const q)
    : ListPartsPrivate(other, q)
{

}

} // namespace S3
} // namespace AWS
