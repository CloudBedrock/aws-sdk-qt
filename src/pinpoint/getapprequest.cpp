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

#include "getapprequest.h"
#include "getapprequest_p.h"
#include "getappresponse.h"
#include "pinpointrequest_p.h"

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetAppRequest
 *
 * @brief  Implements Pinpoint GetApp requests.
 *
 * @see    PinpointClient::getApp
 */

/**
 * @brief  Constructs a new GetAppResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAppResponse::GetAppResponse(

/**
 * @brief  Constructs a new GetAppRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetAppRequest::GetAppRequest(const GetAppRequest &other)
    : PinpointRequest(new GetAppRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetAppRequest object.
 */
GetAppRequest::GetAppRequest()
    : PinpointRequest(new GetAppRequestPrivate(PinpointRequest::GetAppAction, this))
{

}

bool GetAppRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetAppResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetAppResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * GetAppRequest::response(QNetworkReply * const reply) const
{
    return new GetAppResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetAppRequestPrivate
 *
 * @brief  Private implementation for GetAppRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAppRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public GetAppRequest instance.
 */
GetAppRequestPrivate::GetAppRequestPrivate(
    const PinpointRequest::Action action, GetAppRequest * const q)
    : GetAppPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetAppRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetAppRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetAppRequest instance.
 */
GetAppRequestPrivate::GetAppRequestPrivate(
    const GetAppRequestPrivate &other, GetAppRequest * const q)
    : GetAppPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace AWS
