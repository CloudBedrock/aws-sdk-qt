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

#include "deleteegressonlyinternetgatewayrequest.h"
#include "deleteegressonlyinternetgatewayrequest_p.h"
#include "deleteegressonlyinternetgatewayresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DeleteEgressOnlyInternetGatewayRequest
 *
 * @brief  Implements EC2 DeleteEgressOnlyInternetGateway requests.
 *
 * @see    EC2Client::deleteEgressOnlyInternetGateway
 */

/**
 * @brief  Constructs a new DeleteEgressOnlyInternetGatewayRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteEgressOnlyInternetGatewayRequest::DeleteEgressOnlyInternetGatewayRequest(const DeleteEgressOnlyInternetGatewayRequest &other)
    : EC2Request(new DeleteEgressOnlyInternetGatewayRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteEgressOnlyInternetGatewayRequest object.
 */
DeleteEgressOnlyInternetGatewayRequest::DeleteEgressOnlyInternetGatewayRequest()
    : EC2Request(new DeleteEgressOnlyInternetGatewayRequestPrivate(EC2Request::DeleteEgressOnlyInternetGatewayAction, this))
{

}

bool DeleteEgressOnlyInternetGatewayRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteEgressOnlyInternetGatewayResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteEgressOnlyInternetGatewayResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DeleteEgressOnlyInternetGatewayRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEgressOnlyInternetGatewayResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteEgressOnlyInternetGatewayRequestPrivate
 *
 * @brief  Private implementation for DeleteEgressOnlyInternetGatewayRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEgressOnlyInternetGatewayRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DeleteEgressOnlyInternetGatewayRequest instance.
 */
DeleteEgressOnlyInternetGatewayRequestPrivate::DeleteEgressOnlyInternetGatewayRequestPrivate(
    const EC2Request::Action action, DeleteEgressOnlyInternetGatewayRequest * const q)
    : DeleteEgressOnlyInternetGatewayPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEgressOnlyInternetGatewayRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteEgressOnlyInternetGatewayRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteEgressOnlyInternetGatewayRequest instance.
 */
DeleteEgressOnlyInternetGatewayRequestPrivate::DeleteEgressOnlyInternetGatewayRequestPrivate(
    const DeleteEgressOnlyInternetGatewayRequestPrivate &other, DeleteEgressOnlyInternetGatewayRequest * const q)
    : DeleteEgressOnlyInternetGatewayPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
