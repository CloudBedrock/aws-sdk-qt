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

#include "deletestagerequest.h"
#include "deletestagerequest_p.h"
#include "deletestageresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  DeleteStageRequest
 *
 * @brief  Implements APIGateway DeleteStage requests.
 *
 * @see    APIGatewayClient::deleteStage
 */

/**
 * @brief  Constructs a new DeleteStageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteStageRequest::DeleteStageRequest(const DeleteStageRequest &other)
    : APIGatewayRequest(new DeleteStageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteStageRequest object.
 */
DeleteStageRequest::DeleteStageRequest()
    : APIGatewayRequest(new DeleteStageRequestPrivate(APIGatewayRequest::DeleteStageAction, this))
{

}

bool DeleteStageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteStageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteStageResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * DeleteStageRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteStageRequestPrivate
 *
 * @brief  Private implementation for DeleteStageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteStageRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public DeleteStageRequest instance.
 */
DeleteStageRequestPrivate::DeleteStageRequestPrivate(
    const APIGatewayRequest::Action action, DeleteStageRequest * const q)
    : DeleteStagePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteStageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteStageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteStageRequest instance.
 */
DeleteStageRequestPrivate::DeleteStageRequestPrivate(
    const DeleteStageRequestPrivate &other, DeleteStageRequest * const q)
    : DeleteStagePrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
