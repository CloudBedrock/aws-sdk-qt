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

#include "getsampledrequestsrequest.h"
#include "getsampledrequestsrequest_p.h"
#include "getsampledrequestsresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/**
 * @class  GetSampledRequestsRequest
 *
 * @brief  Implements WAF GetSampledRequests requests.
 *
 * @see    WAFClient::getSampledRequests
 */

/**
 * @brief  Constructs a new GetSampledRequestsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSampledRequestsRequest::GetSampledRequestsRequest(const GetSampledRequestsRequest &other)
    : WAFRequest(new GetSampledRequestsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetSampledRequestsRequest object.
 */
GetSampledRequestsRequest::GetSampledRequestsRequest()
    : WAFRequest(new GetSampledRequestsRequestPrivate(WAFRequest::GetSampledRequestsAction, this))
{

}

bool GetSampledRequestsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetSampledRequestsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSampledRequestsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFClient::send
 */
AwsAbstractResponse * GetSampledRequestsRequest::response(QNetworkReply * const reply) const
{
    return new GetSampledRequestsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetSampledRequestsRequestPrivate
 *
 * @brief  Private implementation for GetSampledRequestsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSampledRequestsRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public GetSampledRequestsRequest instance.
 */
GetSampledRequestsRequestPrivate::GetSampledRequestsRequestPrivate(
    const WAFRequest::Action action, GetSampledRequestsRequest * const q)
    : GetSampledRequestsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetSampledRequestsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSampledRequestsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSampledRequestsRequest instance.
 */
GetSampledRequestsRequestPrivate::GetSampledRequestsRequestPrivate(
    const GetSampledRequestsRequestPrivate &other, GetSampledRequestsRequest * const q)
    : GetSampledRequestsPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws
