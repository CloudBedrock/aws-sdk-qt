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

#include "modifyinstanceplacementrequest.h"
#include "modifyinstanceplacementrequest_p.h"
#include "modifyinstanceplacementresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  ModifyInstancePlacementRequest
 *
 * @brief  Implements EC2 ModifyInstancePlacement requests.
 *
 * @see    EC2Client::modifyInstancePlacement
 */

/**
 * @brief  Constructs a new ModifyInstancePlacementResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyInstancePlacementResponse::ModifyInstancePlacementResponse(

/**
 * @brief  Constructs a new ModifyInstancePlacementRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyInstancePlacementRequest::ModifyInstancePlacementRequest(const ModifyInstancePlacementRequest &other)
    : EC2Request(new ModifyInstancePlacementRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyInstancePlacementRequest object.
 */
ModifyInstancePlacementRequest::ModifyInstancePlacementRequest()
    : EC2Request(new ModifyInstancePlacementRequestPrivate(EC2Request::ModifyInstancePlacementAction, this))
{

}

bool ModifyInstancePlacementRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyInstancePlacementResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyInstancePlacementResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * ModifyInstancePlacementRequest::response(QNetworkReply * const reply) const
{
    return new ModifyInstancePlacementResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyInstancePlacementRequestPrivate
 *
 * @brief  Private implementation for ModifyInstancePlacementRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyInstancePlacementRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ModifyInstancePlacementRequest instance.
 */
ModifyInstancePlacementRequestPrivate::ModifyInstancePlacementRequestPrivate(
    const EC2Request::Action action, ModifyInstancePlacementRequest * const q)
    : ModifyInstancePlacementPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyInstancePlacementRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyInstancePlacementRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyInstancePlacementRequest instance.
 */
ModifyInstancePlacementRequestPrivate::ModifyInstancePlacementRequestPrivate(
    const ModifyInstancePlacementRequestPrivate &other, ModifyInstancePlacementRequest * const q)
    : ModifyInstancePlacementPrivate(other, q)
{

}
