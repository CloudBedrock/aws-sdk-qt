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

#include "attachnetworkinterfacerequest.h"
#include "attachnetworkinterfacerequest_p.h"
#include "attachnetworkinterfaceresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  AttachNetworkInterfaceRequest
 *
 * @brief  Implements EC2 AttachNetworkInterface requests.
 *
 * @see    EC2Client::attachNetworkInterface
 */

/**
 * @brief  Constructs a new AttachNetworkInterfaceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AttachNetworkInterfaceRequest::AttachNetworkInterfaceRequest(const AttachNetworkInterfaceRequest &other)
    : EC2Request(new AttachNetworkInterfaceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AttachNetworkInterfaceRequest object.
 */
AttachNetworkInterfaceRequest::AttachNetworkInterfaceRequest()
    : EC2Request(new AttachNetworkInterfaceRequestPrivate(EC2Request::AttachNetworkInterfaceAction, this))
{

}

bool AttachNetworkInterfaceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AttachNetworkInterfaceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AttachNetworkInterfaceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * AttachNetworkInterfaceRequest::response(QNetworkReply * const reply) const
{
    return new AttachNetworkInterfaceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AttachNetworkInterfaceRequestPrivate
 *
 * @brief  Private implementation for AttachNetworkInterfaceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachNetworkInterfaceRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public AttachNetworkInterfaceRequest instance.
 */
AttachNetworkInterfaceRequestPrivate::AttachNetworkInterfaceRequestPrivate(
    const EC2Request::Action action, AttachNetworkInterfaceRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AttachNetworkInterfaceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AttachNetworkInterfaceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AttachNetworkInterfaceRequest instance.
 */
AttachNetworkInterfaceRequestPrivate::AttachNetworkInterfaceRequestPrivate(
    const AttachNetworkInterfaceRequestPrivate &other, AttachNetworkInterfaceRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
