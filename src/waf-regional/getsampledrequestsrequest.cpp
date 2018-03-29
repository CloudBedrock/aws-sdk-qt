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
#include "wafregionalrequest_p.h"

namespace QtAws {
namespace WAFRegional {

/**
 * @class  GetSampledRequestsRequest
 *
 * @brief  Implements WAFRegional GetSampledRequests requests.
 *
 * @see    WAFRegionalClient::getSampledRequests
 */

/**
 * @brief  Constructs a new GetSampledRequestsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSampledRequestsRequest::GetSampledRequestsRequest(const GetSampledRequestsRequest &other)
    : WAFRegionalRequest(new GetSampledRequestsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetSampledRequestsRequest object.
 */
GetSampledRequestsRequest::GetSampledRequestsRequest()
    : WAFRegionalRequest(new GetSampledRequestsRequestPrivate(WAFRegionalRequest::GetSampledRequestsAction, this))
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
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSampledRequestsRequest::response(QNetworkReply * const reply) const
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
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public GetSampledRequestsRequest instance.
 */
GetSampledRequestsRequestPrivate::GetSampledRequestsRequestPrivate(
    const WAFRegionalRequest::Action action, GetSampledRequestsRequest * const q)
    : WAFRegionalRequestPrivate(action, q)
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
    : WAFRegionalRequestPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace QtAws
