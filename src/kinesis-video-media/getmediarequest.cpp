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

#include "getmediarequest.h"
#include "getmediarequest_p.h"
#include "getmediaresponse.h"
#include "kinesisvideomediarequest_p.h"

namespace AWS {
namespace KinesisVideoMedia {

/**
 * @class  GetMediaRequest
 *
 * @brief  Implements KinesisVideoMedia GetMedia requests.
 *
 * @see    KinesisVideoMediaClient::getMedia
 */

/**
 * @brief  Constructs a new GetMediaResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetMediaResponse::GetMediaResponse(

/**
 * @brief  Constructs a new GetMediaRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetMediaRequest::GetMediaRequest(const GetMediaRequest &other)
    : KinesisVideoMediaRequest(new GetMediaRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetMediaRequest object.
 */
GetMediaRequest::GetMediaRequest()
    : KinesisVideoMediaRequest(new GetMediaRequestPrivate(KinesisVideoMediaRequest::GetMediaAction, this))
{

}

bool GetMediaRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetMediaResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetMediaResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KinesisVideoMediaClient::send
 */
AwsAbstractResponse * GetMediaRequest::response(QNetworkReply * const reply) const
{
    return new GetMediaResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetMediaRequestPrivate
 *
 * @brief  Private implementation for GetMediaRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetMediaRequestPrivate object.
 *
 * @param  action  KinesisVideoMedia action being performed.
 * @param  q       Pointer to this object's public GetMediaRequest instance.
 */
GetMediaRequestPrivate::GetMediaRequestPrivate(
    const KinesisVideoMediaRequest::Action action, GetMediaRequest * const q)
    : GetMediaPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetMediaRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetMediaRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetMediaRequest instance.
 */
GetMediaRequestPrivate::GetMediaRequestPrivate(
    const GetMediaRequestPrivate &other, GetMediaRequest * const q)
    : GetMediaPrivate(other, q)
{

}
