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

#include "getendpointattributesrequest.h"
#include "getendpointattributesrequest_p.h"
#include "getendpointattributesresponse.h"
#include "snsrequest_p.h"

namespace AWS {
namespace SNS {

/**
 * @class  GetEndpointAttributesRequest
 *
 * @brief  Implements SNS GetEndpointAttributes requests.
 *
 * @see    SNSClient::getEndpointAttributes
 */

/**
 * @brief  Constructs a new GetEndpointAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetEndpointAttributesResponse::GetEndpointAttributesResponse(

/**
 * @brief  Constructs a new GetEndpointAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetEndpointAttributesRequest::GetEndpointAttributesRequest(const GetEndpointAttributesRequest &other)
    : SNSRequest(new GetEndpointAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetEndpointAttributesRequest object.
 */
GetEndpointAttributesRequest::GetEndpointAttributesRequest()
    : SNSRequest(new GetEndpointAttributesRequestPrivate(SNSRequest::GetEndpointAttributesAction, this))
{

}

bool GetEndpointAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetEndpointAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetEndpointAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SNSClient::send
 */
AwsAbstractResponse * GetEndpointAttributesRequest::response(QNetworkReply * const reply) const
{
    return new GetEndpointAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetEndpointAttributesRequestPrivate
 *
 * @brief  Private implementation for GetEndpointAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetEndpointAttributesRequestPrivate object.
 *
 * @param  action  SNS action being performed.
 * @param  q       Pointer to this object's public GetEndpointAttributesRequest instance.
 */
GetEndpointAttributesRequestPrivate::GetEndpointAttributesRequestPrivate(
    const SNSRequest::Action action, GetEndpointAttributesRequest * const q)
    : GetEndpointAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetEndpointAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetEndpointAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetEndpointAttributesRequest instance.
 */
GetEndpointAttributesRequestPrivate::GetEndpointAttributesRequestPrivate(
    const GetEndpointAttributesRequestPrivate &other, GetEndpointAttributesRequest * const q)
    : GetEndpointAttributesPrivate(other, q)
{

}

} // namespace SNS
} // namespace AWS
