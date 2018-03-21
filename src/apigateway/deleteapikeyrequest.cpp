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

#include "deleteapikeyrequest.h"
#include "deleteapikeyrequest_p.h"
#include "deleteapikeyresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  DeleteApiKeyRequest
 *
 * @brief  Implements APIGateway DeleteApiKey requests.
 *
 * @see    APIGatewayClient::deleteApiKey
 */

/**
 * @brief  Constructs a new DeleteApiKeyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteApiKeyResponse::DeleteApiKeyResponse(

/**
 * @brief  Constructs a new DeleteApiKeyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteApiKeyRequest::DeleteApiKeyRequest(const DeleteApiKeyRequest &other)
    : APIGatewayRequest(new DeleteApiKeyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteApiKeyRequest object.
 */
DeleteApiKeyRequest::DeleteApiKeyRequest()
    : APIGatewayRequest(new DeleteApiKeyRequestPrivate(APIGatewayRequest::DeleteApiKeyAction, this))
{

}

bool DeleteApiKeyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteApiKeyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteApiKeyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * DeleteApiKeyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApiKeyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteApiKeyRequestPrivate
 *
 * @brief  Private implementation for DeleteApiKeyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteApiKeyRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public DeleteApiKeyRequest instance.
 */
DeleteApiKeyRequestPrivate::DeleteApiKeyRequestPrivate(
    const APIGatewayRequest::Action action, DeleteApiKeyRequest * const q)
    : DeleteApiKeyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteApiKeyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteApiKeyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteApiKeyRequest instance.
 */
DeleteApiKeyRequestPrivate::DeleteApiKeyRequestPrivate(
    const DeleteApiKeyRequestPrivate &other, DeleteApiKeyRequest * const q)
    : DeleteApiKeyPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
