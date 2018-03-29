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

#include "unpeervpcrequest.h"
#include "unpeervpcrequest_p.h"
#include "unpeervpcresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/**
 * @class  UnpeerVpcRequest
 *
 * @brief  Implements Lightsail UnpeerVpc requests.
 *
 * @see    LightsailClient::unpeerVpc
 */

/**
 * @brief  Constructs a new UnpeerVpcRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UnpeerVpcRequest::UnpeerVpcRequest(const UnpeerVpcRequest &other)
    : LightsailRequest(new UnpeerVpcRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UnpeerVpcRequest object.
 */
UnpeerVpcRequest::UnpeerVpcRequest()
    : LightsailRequest(new UnpeerVpcRequestPrivate(LightsailRequest::UnpeerVpcAction, this))
{

}

bool UnpeerVpcRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UnpeerVpcResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UnpeerVpcResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LightsailClient::send
 */
QtAws::Core::AwsAbstractResponse * UnpeerVpcRequest::response(QNetworkReply * const reply) const
{
    return new UnpeerVpcResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UnpeerVpcRequestPrivate
 *
 * @brief  Private implementation for UnpeerVpcRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UnpeerVpcRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public UnpeerVpcRequest instance.
 */
UnpeerVpcRequestPrivate::UnpeerVpcRequestPrivate(
    const LightsailRequest::Action action, UnpeerVpcRequest * const q)
    : LightsailRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UnpeerVpcRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UnpeerVpcRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UnpeerVpcRequest instance.
 */
UnpeerVpcRequestPrivate::UnpeerVpcRequestPrivate(
    const UnpeerVpcRequestPrivate &other, UnpeerVpcRequest * const q)
    : LightsailRequestPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
