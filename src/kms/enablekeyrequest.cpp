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

#include "enablekeyrequest.h"
#include "enablekeyrequest_p.h"
#include "enablekeyresponse.h"
#include "kmsrequest_p.h"

namespace AWS {
namespace KMS {

/**
 * @class  EnableKeyRequest
 *
 * @brief  Implements KMS EnableKey requests.
 *
 * @see    KMSClient::enableKey
 */

/**
 * @brief  Constructs a new EnableKeyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnableKeyResponse::EnableKeyResponse(

/**
 * @brief  Constructs a new EnableKeyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
EnableKeyRequest::EnableKeyRequest(const EnableKeyRequest &other)
    : KMSRequest(new EnableKeyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new EnableKeyRequest object.
 */
EnableKeyRequest::EnableKeyRequest()
    : KMSRequest(new EnableKeyRequestPrivate(KMSRequest::EnableKeyAction, this))
{

}

bool EnableKeyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an EnableKeyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An EnableKeyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KMSClient::send
 */
AwsAbstractResponse * EnableKeyRequest::response(QNetworkReply * const reply) const
{
    return new EnableKeyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  EnableKeyRequestPrivate
 *
 * @brief  Private implementation for EnableKeyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableKeyRequestPrivate object.
 *
 * @param  action  KMS action being performed.
 * @param  q       Pointer to this object's public EnableKeyRequest instance.
 */
EnableKeyRequestPrivate::EnableKeyRequestPrivate(
    const KMSRequest::Action action, EnableKeyRequest * const q)
    : EnableKeyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new EnableKeyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the EnableKeyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public EnableKeyRequest instance.
 */
EnableKeyRequestPrivate::EnableKeyRequestPrivate(
    const EnableKeyRequestPrivate &other, EnableKeyRequest * const q)
    : EnableKeyPrivate(other, q)
{

}
