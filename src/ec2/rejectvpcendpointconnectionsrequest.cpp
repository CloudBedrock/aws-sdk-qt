/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "rejectvpcendpointconnectionsrequest.h"
#include "rejectvpcendpointconnectionsrequest_p.h"
#include "rejectvpcendpointconnectionsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::RejectVpcEndpointConnectionsRequest
 * \brief The RejectVpcEndpointConnectionsRequest class provides an interface for EC2 RejectVpcEndpointConnections requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::rejectVpcEndpointConnections
 */

/*!
 * Constructs a copy of \a other.
 */
RejectVpcEndpointConnectionsRequest::RejectVpcEndpointConnectionsRequest(const RejectVpcEndpointConnectionsRequest &other)
    : Ec2Request(new RejectVpcEndpointConnectionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RejectVpcEndpointConnectionsRequest object.
 */
RejectVpcEndpointConnectionsRequest::RejectVpcEndpointConnectionsRequest()
    : Ec2Request(new RejectVpcEndpointConnectionsRequestPrivate(Ec2Request::RejectVpcEndpointConnectionsAction, this))
{

}

/*!
 * \reimp
 */
bool RejectVpcEndpointConnectionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RejectVpcEndpointConnectionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RejectVpcEndpointConnectionsRequest::response(QNetworkReply * const reply) const
{
    return new RejectVpcEndpointConnectionsResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::RejectVpcEndpointConnectionsRequestPrivate
 * \brief The RejectVpcEndpointConnectionsRequestPrivate class provides private implementation for RejectVpcEndpointConnectionsRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a RejectVpcEndpointConnectionsRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
RejectVpcEndpointConnectionsRequestPrivate::RejectVpcEndpointConnectionsRequestPrivate(
    const Ec2Request::Action action, RejectVpcEndpointConnectionsRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RejectVpcEndpointConnectionsRequest
 * class' copy constructor.
 */
RejectVpcEndpointConnectionsRequestPrivate::RejectVpcEndpointConnectionsRequestPrivate(
    const RejectVpcEndpointConnectionsRequestPrivate &other, RejectVpcEndpointConnectionsRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
