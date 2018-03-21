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

#include "getusagerequest.h"
#include "getusagerequest_p.h"
#include "getusageresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  GetUsageRequest
 *
 * @brief  Implements APIGateway GetUsage requests.
 *
 * @see    APIGatewayClient::getUsage
 */

/**
 * @brief  Constructs a new GetUsageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetUsageResponse::GetUsageResponse(

/**
 * @brief  Constructs a new GetUsageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetUsageRequest::GetUsageRequest(const GetUsageRequest &other)
    : APIGatewayRequest(new GetUsageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetUsageRequest object.
 */
GetUsageRequest::GetUsageRequest()
    : APIGatewayRequest(new GetUsageRequestPrivate(APIGatewayRequest::GetUsageAction, this))
{

}

bool GetUsageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetUsageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetUsageResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * GetUsageRequest::response(QNetworkReply * const reply) const
{
    return new GetUsageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetUsageRequestPrivate
 *
 * @brief  Private implementation for GetUsageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetUsageRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetUsageRequest instance.
 */
GetUsageRequestPrivate::GetUsageRequestPrivate(
    const APIGatewayRequest::Action action, GetUsageRequest * const q)
    : GetUsagePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetUsageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetUsageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetUsageRequest instance.
 */
GetUsageRequestPrivate::GetUsageRequestPrivate(
    const GetUsageRequestPrivate &other, GetUsageRequest * const q)
    : GetUsagePrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
