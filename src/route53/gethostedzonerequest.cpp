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

#include "gethostedzonerequest.h"
#include "gethostedzonerequest_p.h"
#include "gethostedzoneresponse.h"
#include "route53request_p.h"

namespace AWS {
namespace Route53 {

/**
 * @class  GetHostedZoneRequest
 *
 * @brief  Implements Route53 GetHostedZone requests.
 *
 * @see    Route53Client::getHostedZone
 */

/**
 * @brief  Constructs a new GetHostedZoneRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetHostedZoneRequest::GetHostedZoneRequest(const GetHostedZoneRequest &other)
    : Route53Request(new GetHostedZoneRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetHostedZoneRequest object.
 */
GetHostedZoneRequest::GetHostedZoneRequest()
    : Route53Request(new GetHostedZoneRequestPrivate(Route53Request::GetHostedZoneAction, this))
{

}

bool GetHostedZoneRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetHostedZoneResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetHostedZoneResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * GetHostedZoneRequest::response(QNetworkReply * const reply) const
{
    return new GetHostedZoneResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetHostedZoneRequestPrivate
 *
 * @brief  Private implementation for GetHostedZoneRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetHostedZoneRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public GetHostedZoneRequest instance.
 */
GetHostedZoneRequestPrivate::GetHostedZoneRequestPrivate(
    const Route53Request::Action action, GetHostedZoneRequest * const q)
    : GetHostedZonePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetHostedZoneRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetHostedZoneRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetHostedZoneRequest instance.
 */
GetHostedZoneRequestPrivate::GetHostedZoneRequestPrivate(
    const GetHostedZoneRequestPrivate &other, GetHostedZoneRequest * const q)
    : GetHostedZonePrivate(other, q)
{

}

} // namespace Route53
} // namespace AWS
