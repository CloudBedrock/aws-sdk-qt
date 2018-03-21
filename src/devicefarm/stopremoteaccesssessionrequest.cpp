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

#include "stopremoteaccesssessionrequest.h"
#include "stopremoteaccesssessionrequest_p.h"
#include "stopremoteaccesssessionresponse.h"
#include "devicefarmrequest_p.h"

namespace AWS {
namespace DeviceFarm {

/**
 * @class  StopRemoteAccessSessionRequest
 *
 * @brief  Implements DeviceFarm StopRemoteAccessSession requests.
 *
 * @see    DeviceFarmClient::stopRemoteAccessSession
 */

/**
 * @brief  Constructs a new StopRemoteAccessSessionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopRemoteAccessSessionResponse::StopRemoteAccessSessionResponse(

/**
 * @brief  Constructs a new StopRemoteAccessSessionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopRemoteAccessSessionRequest::StopRemoteAccessSessionRequest(const StopRemoteAccessSessionRequest &other)
    : DeviceFarmRequest(new StopRemoteAccessSessionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StopRemoteAccessSessionRequest object.
 */
StopRemoteAccessSessionRequest::StopRemoteAccessSessionRequest()
    : DeviceFarmRequest(new StopRemoteAccessSessionRequestPrivate(DeviceFarmRequest::StopRemoteAccessSessionAction, this))
{

}

bool StopRemoteAccessSessionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StopRemoteAccessSessionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopRemoteAccessSessionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
AwsAbstractResponse * StopRemoteAccessSessionRequest::response(QNetworkReply * const reply) const
{
    return new StopRemoteAccessSessionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StopRemoteAccessSessionRequestPrivate
 *
 * @brief  Private implementation for StopRemoteAccessSessionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopRemoteAccessSessionRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public StopRemoteAccessSessionRequest instance.
 */
StopRemoteAccessSessionRequestPrivate::StopRemoteAccessSessionRequestPrivate(
    const DeviceFarmRequest::Action action, StopRemoteAccessSessionRequest * const q)
    : StopRemoteAccessSessionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StopRemoteAccessSessionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopRemoteAccessSessionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopRemoteAccessSessionRequest instance.
 */
StopRemoteAccessSessionRequestPrivate::StopRemoteAccessSessionRequestPrivate(
    const StopRemoteAccessSessionRequestPrivate &other, StopRemoteAccessSessionRequest * const q)
    : StopRemoteAccessSessionPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace AWS
