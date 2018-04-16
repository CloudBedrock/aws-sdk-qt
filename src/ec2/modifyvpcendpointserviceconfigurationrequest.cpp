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

#include "modifyvpcendpointserviceconfigurationrequest.h"
#include "modifyvpcendpointserviceconfigurationrequest_p.h"
#include "modifyvpcendpointserviceconfigurationresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ModifyVpcEndpointServiceConfigurationRequest
 *
 * \brief The ModifyVpcEndpointServiceConfigurationRequest class encapsulates EC2 ModifyVpcEndpointServiceConfiguration requests.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::modifyVpcEndpointServiceConfiguration
 */

/*!
 * @brief  Constructs a new ModifyVpcEndpointServiceConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyVpcEndpointServiceConfigurationRequest::ModifyVpcEndpointServiceConfigurationRequest(const ModifyVpcEndpointServiceConfigurationRequest &other)
    : EC2Request(new ModifyVpcEndpointServiceConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ModifyVpcEndpointServiceConfigurationRequest object.
 */
ModifyVpcEndpointServiceConfigurationRequest::ModifyVpcEndpointServiceConfigurationRequest()
    : EC2Request(new ModifyVpcEndpointServiceConfigurationRequestPrivate(EC2Request::ModifyVpcEndpointServiceConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyVpcEndpointServiceConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ModifyVpcEndpointServiceConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyVpcEndpointServiceConfigurationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * ModifyVpcEndpointServiceConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new ModifyVpcEndpointServiceConfigurationResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ModifyVpcEndpointServiceConfigurationRequestPrivate
 *
 * @brief  Private implementation for ModifyVpcEndpointServiceConfigurationRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ModifyVpcEndpointServiceConfigurationRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ModifyVpcEndpointServiceConfigurationRequest instance.
 */
ModifyVpcEndpointServiceConfigurationRequestPrivate::ModifyVpcEndpointServiceConfigurationRequestPrivate(
    const EC2Request::Action action, ModifyVpcEndpointServiceConfigurationRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
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
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
