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

#include "allocatepublicvirtualinterfacerequest.h"
#include "allocatepublicvirtualinterfacerequest_p.h"
#include "allocatepublicvirtualinterfaceresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/**
 * @class  AllocatePublicVirtualInterfaceRequest
 *
 * @brief  Implements DirectConnect AllocatePublicVirtualInterface requests.
 *
 * @see    DirectConnectClient::allocatePublicVirtualInterface
 */

/**
 * @brief  Constructs a new AllocatePublicVirtualInterfaceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AllocatePublicVirtualInterfaceRequest::AllocatePublicVirtualInterfaceRequest(const AllocatePublicVirtualInterfaceRequest &other)
    : DirectConnectRequest(new AllocatePublicVirtualInterfaceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AllocatePublicVirtualInterfaceRequest object.
 */
AllocatePublicVirtualInterfaceRequest::AllocatePublicVirtualInterfaceRequest()
    : DirectConnectRequest(new AllocatePublicVirtualInterfaceRequestPrivate(DirectConnectRequest::AllocatePublicVirtualInterfaceAction, this))
{

}

bool AllocatePublicVirtualInterfaceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AllocatePublicVirtualInterfaceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AllocatePublicVirtualInterfaceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
QtAws::Core::AwsAbstractResponse * AllocatePublicVirtualInterfaceRequest::response(QNetworkReply * const reply) const
{
    return new AllocatePublicVirtualInterfaceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AllocatePublicVirtualInterfaceRequestPrivate
 *
 * @brief  Private implementation for AllocatePublicVirtualInterfaceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AllocatePublicVirtualInterfaceRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public AllocatePublicVirtualInterfaceRequest instance.
 */
AllocatePublicVirtualInterfaceRequestPrivate::AllocatePublicVirtualInterfaceRequestPrivate(
    const DirectConnectRequest::Action action, AllocatePublicVirtualInterfaceRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AllocatePublicVirtualInterfaceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AllocatePublicVirtualInterfaceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AllocatePublicVirtualInterfaceRequest instance.
 */
AllocatePublicVirtualInterfaceRequestPrivate::AllocatePublicVirtualInterfaceRequestPrivate(
    const AllocatePublicVirtualInterfaceRequestPrivate &other, AllocatePublicVirtualInterfaceRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
