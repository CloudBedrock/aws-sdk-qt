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

#include "modifyvpcendpointserviceconfigurationrequest.h"
#include "modifyvpcendpointserviceconfigurationrequest_p.h"
#include "modifyvpcendpointserviceconfigurationresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  ModifyVpcEndpointServiceConfigurationRequest
 *
 * @brief  Implements EC2 ModifyVpcEndpointServiceConfiguration requests.
 *
 * @see    EC2Client::modifyVpcEndpointServiceConfiguration
 */

/**
 * @brief  Constructs a new ModifyVpcEndpointServiceConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyVpcEndpointServiceConfigurationResponse::ModifyVpcEndpointServiceConfigurationResponse(

/**
 * @brief  Constructs a new ModifyVpcEndpointServiceConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyVpcEndpointServiceConfigurationRequest::ModifyVpcEndpointServiceConfigurationRequest(const ModifyVpcEndpointServiceConfigurationRequest &other)
    : EC2Request(new ModifyVpcEndpointServiceConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyVpcEndpointServiceConfigurationRequest object.
 */
ModifyVpcEndpointServiceConfigurationRequest::ModifyVpcEndpointServiceConfigurationRequest()
    : EC2Request(new ModifyVpcEndpointServiceConfigurationRequestPrivate(EC2Request::ModifyVpcEndpointServiceConfigurationAction, this))
{

}

bool ModifyVpcEndpointServiceConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyVpcEndpointServiceConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyVpcEndpointServiceConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * ModifyVpcEndpointServiceConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new ModifyVpcEndpointServiceConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyVpcEndpointServiceConfigurationRequestPrivate
 *
 * @brief  Private implementation for ModifyVpcEndpointServiceConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyVpcEndpointServiceConfigurationRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ModifyVpcEndpointServiceConfigurationRequest instance.
 */
ModifyVpcEndpointServiceConfigurationRequestPrivate::ModifyVpcEndpointServiceConfigurationRequestPrivate(
    const EC2Request::Action action, ModifyVpcEndpointServiceConfigurationRequest * const q)
    : ModifyVpcEndpointServiceConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyVpcEndpointServiceConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyVpcEndpointServiceConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyVpcEndpointServiceConfigurationRequest instance.
 */
ModifyVpcEndpointServiceConfigurationRequestPrivate::ModifyVpcEndpointServiceConfigurationRequestPrivate(
    const ModifyVpcEndpointServiceConfigurationRequestPrivate &other, ModifyVpcEndpointServiceConfigurationRequest * const q)
    : ModifyVpcEndpointServiceConfigurationPrivate(other, q)
{

}
