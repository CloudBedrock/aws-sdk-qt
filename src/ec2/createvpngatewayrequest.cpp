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

#include "createvpngatewayrequest.h"
#include "createvpngatewayrequest_p.h"
#include "createvpngatewayresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreateVpnGatewayRequest
 * \brief The CreateVpnGatewayRequest class provides an interface for EC2 CreateVpnGateway requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::createVpnGateway
 */

/*!
 * Constructs a copy of \a other.
 */
CreateVpnGatewayRequest::CreateVpnGatewayRequest(const CreateVpnGatewayRequest &other)
    : EC2Request(new CreateVpnGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateVpnGatewayRequest object.
 */
CreateVpnGatewayRequest::CreateVpnGatewayRequest()
    : EC2Request(new CreateVpnGatewayRequestPrivate(EC2Request::CreateVpnGatewayAction, this))
{

}

/*!
 * \reimp
 */
bool CreateVpnGatewayRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateVpnGatewayResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateVpnGatewayRequest::response(QNetworkReply * const reply) const
{
    return new CreateVpnGatewayResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::CreateVpnGatewayRequestPrivate
 * \brief The CreateVpnGatewayRequestPrivate class provides private implementation for CreateVpnGatewayRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 *
 * Constructs a CreateVpnGatewayRequestPrivate object for EC2 \a action with,
 * public implementation \a q.
 */
CreateVpnGatewayRequestPrivate::CreateVpnGatewayRequestPrivate(
    const EC2Request::Action action, CreateVpnGatewayRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateVpnGatewayRequest
 * class' copy constructor.
 */
CreateVpnGatewayRequestPrivate::CreateVpnGatewayRequestPrivate(
    const CreateVpnGatewayRequestPrivate &other, CreateVpnGatewayRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
