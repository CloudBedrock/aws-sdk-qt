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

#include "getpublickeyrequest.h"
#include "getpublickeyrequest_p.h"
#include "getpublickeyresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/**
 * @class  GetPublicKeyRequest
 *
 * @brief  Implements CloudFront GetPublicKey requests.
 *
 * @see    CloudFrontClient::getPublicKey
 */

/**
 * @brief  Constructs a new GetPublicKeyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetPublicKeyRequest::GetPublicKeyRequest(const GetPublicKeyRequest &other)
    : CloudFrontRequest(new GetPublicKeyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetPublicKeyRequest object.
 */
GetPublicKeyRequest::GetPublicKeyRequest()
    : CloudFrontRequest(new GetPublicKeyRequestPrivate(CloudFrontRequest::GetPublicKeyAction, this))
{

}

bool GetPublicKeyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetPublicKeyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetPublicKeyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPublicKeyRequest::response(QNetworkReply * const reply) const
{
    return new GetPublicKeyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetPublicKeyRequestPrivate
 *
 * @brief  Private implementation for GetPublicKeyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPublicKeyRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public GetPublicKeyRequest instance.
 */
GetPublicKeyRequestPrivate::GetPublicKeyRequestPrivate(
    const CloudFrontRequest::Action action, GetPublicKeyRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetPublicKeyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetPublicKeyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetPublicKeyRequest instance.
 */
GetPublicKeyRequestPrivate::GetPublicKeyRequestPrivate(
    const GetPublicKeyRequestPrivate &other, GetPublicKeyRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
