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

#include "deleteusageplanrequest.h"
#include "deleteusageplanrequest_p.h"
#include "deleteusageplanresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  DeleteUsagePlanRequest
 *
 * @brief  Implements APIGateway DeleteUsagePlan requests.
 *
 * @see    APIGatewayClient::deleteUsagePlan
 */

/**
 * @brief  Constructs a new DeleteUsagePlanRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteUsagePlanRequest::DeleteUsagePlanRequest(const DeleteUsagePlanRequest &other)
    : APIGatewayRequest(new DeleteUsagePlanRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteUsagePlanRequest object.
 */
DeleteUsagePlanRequest::DeleteUsagePlanRequest()
    : APIGatewayRequest(new DeleteUsagePlanRequestPrivate(APIGatewayRequest::DeleteUsagePlanAction, this))
{

}

bool DeleteUsagePlanRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteUsagePlanResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteUsagePlanResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * DeleteUsagePlanRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUsagePlanResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteUsagePlanRequestPrivate
 *
 * @brief  Private implementation for DeleteUsagePlanRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUsagePlanRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public DeleteUsagePlanRequest instance.
 */
DeleteUsagePlanRequestPrivate::DeleteUsagePlanRequestPrivate(
    const APIGatewayRequest::Action action, DeleteUsagePlanRequest * const q)
    : DeleteUsagePlanPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUsagePlanRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteUsagePlanRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteUsagePlanRequest instance.
 */
DeleteUsagePlanRequestPrivate::DeleteUsagePlanRequestPrivate(
    const DeleteUsagePlanRequestPrivate &other, DeleteUsagePlanRequest * const q)
    : DeleteUsagePlanPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
