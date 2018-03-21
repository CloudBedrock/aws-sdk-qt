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

#include "putobjectrequest.h"
#include "putobjectrequest_p.h"
#include "putobjectresponse.h"
#include "mediastoredatarequest_p.h"

namespace AWS {
namespace MediaStoreData {

/**
 * @class  PutObjectRequest
 *
 * @brief  Implements MediaStoreData PutObject requests.
 *
 * @see    MediaStoreDataClient::putObject
 */

/**
 * @brief  Constructs a new PutObjectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutObjectResponse::PutObjectResponse(

/**
 * @brief  Constructs a new PutObjectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutObjectRequest::PutObjectRequest(const PutObjectRequest &other)
    : MediaStoreDataRequest(new PutObjectRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutObjectRequest object.
 */
PutObjectRequest::PutObjectRequest()
    : MediaStoreDataRequest(new PutObjectRequestPrivate(MediaStoreDataRequest::PutObjectAction, this))
{

}

bool PutObjectRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutObjectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutObjectResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaStoreDataClient::send
 */
AwsAbstractResponse * PutObjectRequest::response(QNetworkReply * const reply) const
{
    return new PutObjectResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutObjectRequestPrivate
 *
 * @brief  Private implementation for PutObjectRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutObjectRequestPrivate object.
 *
 * @param  action  MediaStoreData action being performed.
 * @param  q       Pointer to this object's public PutObjectRequest instance.
 */
PutObjectRequestPrivate::PutObjectRequestPrivate(
    const MediaStoreDataRequest::Action action, PutObjectRequest * const q)
    : PutObjectPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutObjectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutObjectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutObjectRequest instance.
 */
PutObjectRequestPrivate::PutObjectRequestPrivate(
    const PutObjectRequestPrivate &other, PutObjectRequest * const q)
    : PutObjectPrivate(other, q)
{

}

} // namespace MediaStoreData
} // namespace AWS
