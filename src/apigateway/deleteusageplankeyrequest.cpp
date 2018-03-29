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

#include "deleteusageplankeyrequest.h"
#include "deleteusageplankeyrequest_p.h"
#include "deleteusageplankeyresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  DeleteUsagePlanKeyRequest
 *
 * @brief  Implements APIGateway DeleteUsagePlanKey requests.
 *
 * @see    APIGatewayClient::deleteUsagePlanKey
 */

/**
 * @brief  Constructs a new DeleteUsagePlanKeyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteUsagePlanKeyRequest::DeleteUsagePlanKeyRequest(const DeleteUsagePlanKeyRequest &other)
    : APIGatewayRequest(new DeleteUsagePlanKeyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteUsagePlanKeyRequest object.
 */
DeleteUsagePlanKeyRequest::DeleteUsagePlanKeyRequest()
    : APIGatewayRequest(new DeleteUsagePlanKeyRequestPrivate(APIGatewayRequest::DeleteUsagePlanKeyAction, this))
{

}

bool DeleteUsagePlanKeyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteUsagePlanKeyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteUsagePlanKeyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteUsagePlanKeyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUsagePlanKeyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteUsagePlanKeyRequestPrivate
 *
 * @brief  Private implementation for DeleteUsagePlanKeyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUsagePlanKeyRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public DeleteUsagePlanKeyRequest instance.
 */
DeleteUsagePlanKeyRequestPrivate::DeleteUsagePlanKeyRequestPrivate(
    const APIGatewayRequest::Action action, DeleteUsagePlanKeyRequest * const q)
    : DeleteUsagePlanKeyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUsagePlanKeyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteUsagePlanKeyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteUsagePlanKeyRequest instance.
 */
DeleteUsagePlanKeyRequestPrivate::DeleteUsagePlanKeyRequestPrivate(
    const DeleteUsagePlanKeyRequestPrivate &other, DeleteUsagePlanKeyRequest * const q)
    : DeleteUsagePlanKeyPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
