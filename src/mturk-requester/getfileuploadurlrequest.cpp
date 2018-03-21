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

#include "getfileuploadurlrequest.h"
#include "getfileuploadurlrequest_p.h"
#include "getfileuploadurlresponse.h"
#include "mturkrequest_p.h"

namespace AWS {
namespace MTurk {

/**
 * @class  GetFileUploadURLRequest
 *
 * @brief  Implements MTurk GetFileUploadURL requests.
 *
 * @see    MTurkClient::getFileUploadURL
 */

/**
 * @brief  Constructs a new GetFileUploadURLResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetFileUploadURLResponse::GetFileUploadURLResponse(

/**
 * @brief  Constructs a new GetFileUploadURLRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetFileUploadURLRequest::GetFileUploadURLRequest(const GetFileUploadURLRequest &other)
    : MTurkRequest(new GetFileUploadURLRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetFileUploadURLRequest object.
 */
GetFileUploadURLRequest::GetFileUploadURLRequest()
    : MTurkRequest(new GetFileUploadURLRequestPrivate(MTurkRequest::GetFileUploadURLAction, this))
{

}

bool GetFileUploadURLRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetFileUploadURLResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetFileUploadURLResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MTurkClient::send
 */
AwsAbstractResponse * GetFileUploadURLRequest::response(QNetworkReply * const reply) const
{
    return new GetFileUploadURLResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetFileUploadURLRequestPrivate
 *
 * @brief  Private implementation for GetFileUploadURLRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetFileUploadURLRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public GetFileUploadURLRequest instance.
 */
GetFileUploadURLRequestPrivate::GetFileUploadURLRequestPrivate(
    const MTurkRequest::Action action, GetFileUploadURLRequest * const q)
    : GetFileUploadURLPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetFileUploadURLRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetFileUploadURLRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetFileUploadURLRequest instance.
 */
GetFileUploadURLRequestPrivate::GetFileUploadURLRequestPrivate(
    const GetFileUploadURLRequestPrivate &other, GetFileUploadURLRequest * const q)
    : GetFileUploadURLPrivate(other, q)
{

}

} // namespace MTurk
} // namespace AWS
