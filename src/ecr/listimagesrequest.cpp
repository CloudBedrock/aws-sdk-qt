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

#include "listimagesrequest.h"
#include "listimagesrequest_p.h"
#include "listimagesresponse.h"
#include "ecrrequest_p.h"

namespace AWS {
namespace ECR {

/**
 * @class  ListImagesRequest
 *
 * @brief  Implements ECR ListImages requests.
 *
 * @see    ECRClient::listImages
 */

/**
 * @brief  Constructs a new ListImagesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListImagesRequest::ListImagesRequest(const ListImagesRequest &other)
    : ECRRequest(new ListImagesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListImagesRequest object.
 */
ListImagesRequest::ListImagesRequest()
    : ECRRequest(new ListImagesRequestPrivate(ECRRequest::ListImagesAction, this))
{

}

bool ListImagesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListImagesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListImagesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECRClient::send
 */
AwsAbstractResponse * ListImagesRequest::response(QNetworkReply * const reply) const
{
    return new ListImagesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListImagesRequestPrivate
 *
 * @brief  Private implementation for ListImagesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListImagesRequestPrivate object.
 *
 * @param  action  ECR action being performed.
 * @param  q       Pointer to this object's public ListImagesRequest instance.
 */
ListImagesRequestPrivate::ListImagesRequestPrivate(
    const ECRRequest::Action action, ListImagesRequest * const q)
    : ListImagesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListImagesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListImagesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListImagesRequest instance.
 */
ListImagesRequestPrivate::ListImagesRequestPrivate(
    const ListImagesRequestPrivate &other, ListImagesRequest * const q)
    : ListImagesPrivate(other, q)
{

}

} // namespace ECR
} // namespace AWS
