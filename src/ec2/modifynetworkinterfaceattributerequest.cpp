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

#include "modifynetworkinterfaceattributerequest.h"
#include "modifynetworkinterfaceattributerequest_p.h"
#include "modifynetworkinterfaceattributeresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ModifyNetworkInterfaceAttributeRequest
 * \brief The ModifyNetworkInterfaceAttributeRequest class provides an interface for EC2 ModifyNetworkInterfaceAttribute requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::modifyNetworkInterfaceAttribute
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyNetworkInterfaceAttributeRequest::ModifyNetworkInterfaceAttributeRequest(const ModifyNetworkInterfaceAttributeRequest &other)
    : EC2Request(new ModifyNetworkInterfaceAttributeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyNetworkInterfaceAttributeRequest object.
 */
ModifyNetworkInterfaceAttributeRequest::ModifyNetworkInterfaceAttributeRequest()
    : EC2Request(new ModifyNetworkInterfaceAttributeRequestPrivate(EC2Request::ModifyNetworkInterfaceAttributeAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyNetworkInterfaceAttributeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyNetworkInterfaceAttributeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyNetworkInterfaceAttributeRequest::response(QNetworkReply * const reply) const
{
    return new ModifyNetworkInterfaceAttributeResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::ModifyNetworkInterfaceAttributeRequestPrivate
 * \brief The ModifyNetworkInterfaceAttributeRequestPrivate class provides private implementation for ModifyNetworkInterfaceAttributeRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ModifyNetworkInterfaceAttributeRequestPrivate object for EC2 \a action,
 * with public implementation \a q.
 */
ModifyNetworkInterfaceAttributeRequestPrivate::ModifyNetworkInterfaceAttributeRequestPrivate(
    const EC2Request::Action action, ModifyNetworkInterfaceAttributeRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyNetworkInterfaceAttributeRequest
 * class' copy constructor.
 */
ModifyNetworkInterfaceAttributeRequestPrivate::ModifyNetworkInterfaceAttributeRequestPrivate(
    const ModifyNetworkInterfaceAttributeRequestPrivate &other, ModifyNetworkInterfaceAttributeRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
