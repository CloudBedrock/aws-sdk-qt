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

#include "listcollectionsrequest.h"
#include "listcollectionsrequest_p.h"
#include "listcollectionsresponse.h"
#include "rekognitionrequest_p.h"

namespace AWS {
namespace Rekognition {

/**
 * @class  ListCollectionsRequest
 *
 * @brief  Implements Rekognition ListCollections requests.
 *
 * @see    RekognitionClient::listCollections
 */

/**
 * @brief  Constructs a new ListCollectionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListCollectionsResponse::ListCollectionsResponse(

/**
 * @brief  Constructs a new ListCollectionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListCollectionsRequest::ListCollectionsRequest(const ListCollectionsRequest &other)
    : RekognitionRequest(new ListCollectionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListCollectionsRequest object.
 */
ListCollectionsRequest::ListCollectionsRequest()
    : RekognitionRequest(new ListCollectionsRequestPrivate(RekognitionRequest::ListCollectionsAction, this))
{

}

bool ListCollectionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListCollectionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListCollectionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
AwsAbstractResponse * ListCollectionsRequest::response(QNetworkReply * const reply) const
{
    return new ListCollectionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListCollectionsRequestPrivate
 *
 * @brief  Private implementation for ListCollectionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListCollectionsRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public ListCollectionsRequest instance.
 */
ListCollectionsRequestPrivate::ListCollectionsRequestPrivate(
    const RekognitionRequest::Action action, ListCollectionsRequest * const q)
    : ListCollectionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListCollectionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListCollectionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListCollectionsRequest instance.
 */
ListCollectionsRequestPrivate::ListCollectionsRequestPrivate(
    const ListCollectionsRequestPrivate &other, ListCollectionsRequest * const q)
    : ListCollectionsPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace AWS
