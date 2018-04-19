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

#include "moveaddresstovpcrequest.h"
#include "moveaddresstovpcrequest_p.h"
#include "moveaddresstovpcresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::MoveAddressToVpcRequest
 * \brief The MoveAddressToVpcRequest class provides an interface for EC2 MoveAddressToVpc requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::moveAddressToVpc
 */

/*!
 * Constructs a copy of \a other.
 */
MoveAddressToVpcRequest::MoveAddressToVpcRequest(const MoveAddressToVpcRequest &other)
    : EC2Request(new MoveAddressToVpcRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a MoveAddressToVpcRequest object.
 */
MoveAddressToVpcRequest::MoveAddressToVpcRequest()
    : EC2Request(new MoveAddressToVpcRequestPrivate(EC2Request::MoveAddressToVpcAction, this))
{

}

/*!
 * \reimp
 */
bool MoveAddressToVpcRequest::isValid() const
{
    return false;
}


/*!
 * Returns a MoveAddressToVpcResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * MoveAddressToVpcRequest::response(QNetworkReply * const reply) const
{
    return new MoveAddressToVpcResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::MoveAddressToVpcRequestPrivate
 * \brief The MoveAddressToVpcRequestPrivate class provides private implementation for MoveAddressToVpcRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 *
 * Constructs a MoveAddressToVpcRequestPrivate object for EC2 \a action with,
 * public implementation \a q.
 */
MoveAddressToVpcRequestPrivate::MoveAddressToVpcRequestPrivate(
    const EC2Request::Action action, MoveAddressToVpcRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the MoveAddressToVpcRequest
 * class' copy constructor.
 */
MoveAddressToVpcRequestPrivate::MoveAddressToVpcRequestPrivate(
    const MoveAddressToVpcRequestPrivate &other, MoveAddressToVpcRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
