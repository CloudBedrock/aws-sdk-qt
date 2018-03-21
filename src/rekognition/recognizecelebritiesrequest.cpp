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

#include "recognizecelebritiesrequest.h"
#include "recognizecelebritiesrequest_p.h"
#include "recognizecelebritiesresponse.h"
#include "rekognitionrequest_p.h"

namespace AWS {
namespace Rekognition {

/**
 * @class  RecognizeCelebritiesRequest
 *
 * @brief  Implements Rekognition RecognizeCelebrities requests.
 *
 * @see    RekognitionClient::recognizeCelebrities
 */

/**
 * @brief  Constructs a new RecognizeCelebritiesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RecognizeCelebritiesResponse::RecognizeCelebritiesResponse(

/**
 * @brief  Constructs a new RecognizeCelebritiesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RecognizeCelebritiesRequest::RecognizeCelebritiesRequest(const RecognizeCelebritiesRequest &other)
    : RekognitionRequest(new RecognizeCelebritiesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RecognizeCelebritiesRequest object.
 */
RecognizeCelebritiesRequest::RecognizeCelebritiesRequest()
    : RekognitionRequest(new RecognizeCelebritiesRequestPrivate(RekognitionRequest::RecognizeCelebritiesAction, this))
{

}

bool RecognizeCelebritiesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RecognizeCelebritiesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RecognizeCelebritiesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
AwsAbstractResponse * RecognizeCelebritiesRequest::response(QNetworkReply * const reply) const
{
    return new RecognizeCelebritiesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RecognizeCelebritiesRequestPrivate
 *
 * @brief  Private implementation for RecognizeCelebritiesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RecognizeCelebritiesRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public RecognizeCelebritiesRequest instance.
 */
RecognizeCelebritiesRequestPrivate::RecognizeCelebritiesRequestPrivate(
    const RekognitionRequest::Action action, RecognizeCelebritiesRequest * const q)
    : RecognizeCelebritiesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RecognizeCelebritiesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RecognizeCelebritiesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RecognizeCelebritiesRequest instance.
 */
RecognizeCelebritiesRequestPrivate::RecognizeCelebritiesRequestPrivate(
    const RecognizeCelebritiesRequestPrivate &other, RecognizeCelebritiesRequest * const q)
    : RecognizeCelebritiesPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace AWS
