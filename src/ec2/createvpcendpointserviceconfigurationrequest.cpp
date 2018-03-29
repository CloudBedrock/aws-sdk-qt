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

#include "createvpcendpointserviceconfigurationrequest.h"
#include "createvpcendpointserviceconfigurationrequest_p.h"
#include "createvpcendpointserviceconfigurationresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  CreateVpcEndpointServiceConfigurationRequest
 *
 * @brief  Implements EC2 CreateVpcEndpointServiceConfiguration requests.
 *
 * @see    EC2Client::createVpcEndpointServiceConfiguration
 */

/**
 * @brief  Constructs a new CreateVpcEndpointServiceConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateVpcEndpointServiceConfigurationRequest::CreateVpcEndpointServiceConfigurationRequest(const CreateVpcEndpointServiceConfigurationRequest &other)
    : EC2Request(new CreateVpcEndpointServiceConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateVpcEndpointServiceConfigurationRequest object.
 */
CreateVpcEndpointServiceConfigurationRequest::CreateVpcEndpointServiceConfigurationRequest()
    : EC2Request(new CreateVpcEndpointServiceConfigurationRequestPrivate(EC2Request::CreateVpcEndpointServiceConfigurationAction, this))
{

}

bool CreateVpcEndpointServiceConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateVpcEndpointServiceConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateVpcEndpointServiceConfigurationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * CreateVpcEndpointServiceConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new CreateVpcEndpointServiceConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateVpcEndpointServiceConfigurationRequestPrivate
 *
 * @brief  Private implementation for CreateVpcEndpointServiceConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateVpcEndpointServiceConfigurationRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CreateVpcEndpointServiceConfigurationRequest instance.
 */
CreateVpcEndpointServiceConfigurationRequestPrivate::CreateVpcEndpointServiceConfigurationRequestPrivate(
    const EC2Request::Action action, CreateVpcEndpointServiceConfigurationRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateVpcEndpointServiceConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateVpcEndpointServiceConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateVpcEndpointServiceConfigurationRequest instance.
 */
CreateVpcEndpointServiceConfigurationRequestPrivate::CreateVpcEndpointServiceConfigurationRequestPrivate(
    const CreateVpcEndpointServiceConfigurationRequestPrivate &other, CreateVpcEndpointServiceConfigurationRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
