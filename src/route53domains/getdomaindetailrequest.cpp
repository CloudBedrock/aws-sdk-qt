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

#include "getdomaindetailrequest.h"
#include "getdomaindetailrequest_p.h"
#include "getdomaindetailresponse.h"
#include "route53domainsrequest_p.h"

namespace AWS {
namespace Route53Domains {

/**
 * @class  GetDomainDetailRequest
 *
 * @brief  Implements Route53Domains GetDomainDetail requests.
 *
 * @see    Route53DomainsClient::getDomainDetail
 */

/**
 * @brief  Constructs a new GetDomainDetailRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDomainDetailRequest::GetDomainDetailRequest(const GetDomainDetailRequest &other)
    : Route53DomainsRequest(new GetDomainDetailRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDomainDetailRequest object.
 */
GetDomainDetailRequest::GetDomainDetailRequest()
    : Route53DomainsRequest(new GetDomainDetailRequestPrivate(Route53DomainsRequest::GetDomainDetailAction, this))
{

}

bool GetDomainDetailRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDomainDetailResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDomainDetailResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53DomainsClient::send
 */
AwsAbstractResponse * GetDomainDetailRequest::response(QNetworkReply * const reply) const
{
    return new GetDomainDetailResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDomainDetailRequestPrivate
 *
 * @brief  Private implementation for GetDomainDetailRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDomainDetailRequestPrivate object.
 *
 * @param  action  Route53Domains action being performed.
 * @param  q       Pointer to this object's public GetDomainDetailRequest instance.
 */
GetDomainDetailRequestPrivate::GetDomainDetailRequestPrivate(
    const Route53DomainsRequest::Action action, GetDomainDetailRequest * const q)
    : GetDomainDetailPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDomainDetailRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDomainDetailRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDomainDetailRequest instance.
 */
GetDomainDetailRequestPrivate::GetDomainDetailRequestPrivate(
    const GetDomainDetailRequestPrivate &other, GetDomainDetailRequest * const q)
    : GetDomainDetailPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace AWS
