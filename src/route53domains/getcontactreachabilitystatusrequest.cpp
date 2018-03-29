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

#include "getcontactreachabilitystatusrequest.h"
#include "getcontactreachabilitystatusrequest_p.h"
#include "getcontactreachabilitystatusresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/**
 * @class  GetContactReachabilityStatusRequest
 *
 * @brief  Implements Route53Domains GetContactReachabilityStatus requests.
 *
 * @see    Route53DomainsClient::getContactReachabilityStatus
 */

/**
 * @brief  Constructs a new GetContactReachabilityStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetContactReachabilityStatusRequest::GetContactReachabilityStatusRequest(const GetContactReachabilityStatusRequest &other)
    : Route53DomainsRequest(new GetContactReachabilityStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetContactReachabilityStatusRequest object.
 */
GetContactReachabilityStatusRequest::GetContactReachabilityStatusRequest()
    : Route53DomainsRequest(new GetContactReachabilityStatusRequestPrivate(Route53DomainsRequest::GetContactReachabilityStatusAction, this))
{

}

bool GetContactReachabilityStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetContactReachabilityStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetContactReachabilityStatusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53DomainsClient::send
 */
AwsAbstractResponse * GetContactReachabilityStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetContactReachabilityStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetContactReachabilityStatusRequestPrivate
 *
 * @brief  Private implementation for GetContactReachabilityStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetContactReachabilityStatusRequestPrivate object.
 *
 * @param  action  Route53Domains action being performed.
 * @param  q       Pointer to this object's public GetContactReachabilityStatusRequest instance.
 */
GetContactReachabilityStatusRequestPrivate::GetContactReachabilityStatusRequestPrivate(
    const Route53DomainsRequest::Action action, GetContactReachabilityStatusRequest * const q)
    : GetContactReachabilityStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetContactReachabilityStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetContactReachabilityStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetContactReachabilityStatusRequest instance.
 */
GetContactReachabilityStatusRequestPrivate::GetContactReachabilityStatusRequestPrivate(
    const GetContactReachabilityStatusRequestPrivate &other, GetContactReachabilityStatusRequest * const q)
    : GetContactReachabilityStatusPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
