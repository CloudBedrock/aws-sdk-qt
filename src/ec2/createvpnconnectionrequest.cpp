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

#include "createvpnconnectionrequest.h"
#include "createvpnconnectionrequest_p.h"
#include "createvpnconnectionresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  CreateVpnConnectionRequest
 *
 * @brief  Implements EC2 CreateVpnConnection requests.
 *
 * @see    EC2Client::createVpnConnection
 */

/**
 * @brief  Constructs a new CreateVpnConnectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateVpnConnectionResponse::CreateVpnConnectionResponse(

/**
 * @brief  Constructs a new CreateVpnConnectionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateVpnConnectionRequest::CreateVpnConnectionRequest(const CreateVpnConnectionRequest &other)
    : EC2Request(new CreateVpnConnectionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateVpnConnectionRequest object.
 */
CreateVpnConnectionRequest::CreateVpnConnectionRequest()
    : EC2Request(new CreateVpnConnectionRequestPrivate(EC2Request::CreateVpnConnectionAction, this))
{

}

bool CreateVpnConnectionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateVpnConnectionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateVpnConnectionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * CreateVpnConnectionRequest::response(QNetworkReply * const reply) const
{
    return new CreateVpnConnectionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateVpnConnectionRequestPrivate
 *
 * @brief  Private implementation for CreateVpnConnectionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateVpnConnectionRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CreateVpnConnectionRequest instance.
 */
CreateVpnConnectionRequestPrivate::CreateVpnConnectionRequestPrivate(
    const EC2Request::Action action, CreateVpnConnectionRequest * const q)
    : CreateVpnConnectionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateVpnConnectionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateVpnConnectionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateVpnConnectionRequest instance.
 */
CreateVpnConnectionRequestPrivate::CreateVpnConnectionRequestPrivate(
    const CreateVpnConnectionRequestPrivate &other, CreateVpnConnectionRequest * const q)
    : CreateVpnConnectionPrivate(other, q)
{

}
