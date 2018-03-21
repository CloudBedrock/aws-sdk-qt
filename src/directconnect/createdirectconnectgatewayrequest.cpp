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

#include "createdirectconnectgatewayrequest.h"
#include "createdirectconnectgatewayrequest_p.h"
#include "createdirectconnectgatewayresponse.h"
#include "directconnectrequest_p.h"

namespace AWS {
namespace DirectConnect {

/**
 * @class  CreateDirectConnectGatewayRequest
 *
 * @brief  Implements DirectConnect CreateDirectConnectGateway requests.
 *
 * @see    DirectConnectClient::createDirectConnectGateway
 */

/**
 * @brief  Constructs a new CreateDirectConnectGatewayResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDirectConnectGatewayResponse::CreateDirectConnectGatewayResponse(

/**
 * @brief  Constructs a new CreateDirectConnectGatewayRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDirectConnectGatewayRequest::CreateDirectConnectGatewayRequest(const CreateDirectConnectGatewayRequest &other)
    : DirectConnectRequest(new CreateDirectConnectGatewayRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDirectConnectGatewayRequest object.
 */
CreateDirectConnectGatewayRequest::CreateDirectConnectGatewayRequest()
    : DirectConnectRequest(new CreateDirectConnectGatewayRequestPrivate(DirectConnectRequest::CreateDirectConnectGatewayAction, this))
{

}

bool CreateDirectConnectGatewayRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDirectConnectGatewayResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDirectConnectGatewayResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
AwsAbstractResponse * CreateDirectConnectGatewayRequest::response(QNetworkReply * const reply) const
{
    return new CreateDirectConnectGatewayResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDirectConnectGatewayRequestPrivate
 *
 * @brief  Private implementation for CreateDirectConnectGatewayRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDirectConnectGatewayRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public CreateDirectConnectGatewayRequest instance.
 */
CreateDirectConnectGatewayRequestPrivate::CreateDirectConnectGatewayRequestPrivate(
    const DirectConnectRequest::Action action, CreateDirectConnectGatewayRequest * const q)
    : CreateDirectConnectGatewayPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDirectConnectGatewayRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDirectConnectGatewayRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDirectConnectGatewayRequest instance.
 */
CreateDirectConnectGatewayRequestPrivate::CreateDirectConnectGatewayRequestPrivate(
    const CreateDirectConnectGatewayRequestPrivate &other, CreateDirectConnectGatewayRequest * const q)
    : CreateDirectConnectGatewayPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace AWS
