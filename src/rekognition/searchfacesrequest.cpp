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

#include "searchfacesrequest.h"
#include "searchfacesrequest_p.h"
#include "searchfacesresponse.h"
#include "rekognitionrequest_p.h"

namespace AWS {
namespace Rekognition {

/**
 * @class  SearchFacesRequest
 *
 * @brief  Implements Rekognition SearchFaces requests.
 *
 * @see    RekognitionClient::searchFaces
 */

/**
 * @brief  Constructs a new SearchFacesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SearchFacesRequest::SearchFacesRequest(const SearchFacesRequest &other)
    : RekognitionRequest(new SearchFacesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SearchFacesRequest object.
 */
SearchFacesRequest::SearchFacesRequest()
    : RekognitionRequest(new SearchFacesRequestPrivate(RekognitionRequest::SearchFacesAction, this))
{

}

bool SearchFacesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SearchFacesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SearchFacesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
AwsAbstractResponse * SearchFacesRequest::response(QNetworkReply * const reply) const
{
    return new SearchFacesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SearchFacesRequestPrivate
 *
 * @brief  Private implementation for SearchFacesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SearchFacesRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public SearchFacesRequest instance.
 */
SearchFacesRequestPrivate::SearchFacesRequestPrivate(
    const RekognitionRequest::Action action, SearchFacesRequest * const q)
    : SearchFacesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SearchFacesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SearchFacesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SearchFacesRequest instance.
 */
SearchFacesRequestPrivate::SearchFacesRequestPrivate(
    const SearchFacesRequestPrivate &other, SearchFacesRequest * const q)
    : SearchFacesPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace AWS
