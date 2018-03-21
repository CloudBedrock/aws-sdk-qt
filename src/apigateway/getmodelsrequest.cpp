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

#include "getmodelsrequest.h"
#include "getmodelsrequest_p.h"
#include "getmodelsresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  GetModelsRequest
 *
 * @brief  Implements APIGateway GetModels requests.
 *
 * @see    APIGatewayClient::getModels
 */

/**
 * @brief  Constructs a new GetModelsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetModelsResponse::GetModelsResponse(

/**
 * @brief  Constructs a new GetModelsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetModelsRequest::GetModelsRequest(const GetModelsRequest &other)
    : APIGatewayRequest(new GetModelsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetModelsRequest object.
 */
GetModelsRequest::GetModelsRequest()
    : APIGatewayRequest(new GetModelsRequestPrivate(APIGatewayRequest::GetModelsAction, this))
{

}

bool GetModelsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetModelsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetModelsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * GetModelsRequest::response(QNetworkReply * const reply) const
{
    return new GetModelsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetModelsRequestPrivate
 *
 * @brief  Private implementation for GetModelsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetModelsRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetModelsRequest instance.
 */
GetModelsRequestPrivate::GetModelsRequestPrivate(
    const APIGatewayRequest::Action action, GetModelsRequest * const q)
    : GetModelsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetModelsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetModelsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetModelsRequest instance.
 */
GetModelsRequestPrivate::GetModelsRequestPrivate(
    const GetModelsRequestPrivate &other, GetModelsRequest * const q)
    : GetModelsPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
