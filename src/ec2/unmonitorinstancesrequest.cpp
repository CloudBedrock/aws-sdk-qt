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

#include "unmonitorinstancesrequest.h"
#include "unmonitorinstancesrequest_p.h"
#include "unmonitorinstancesresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::UnmonitorInstancesRequest
 * \brief The UnmonitorInstancesRequest class provides an interface for EC2 UnmonitorInstances requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::unmonitorInstances
 */

/*!
 * Constructs a copy of \a other.
 */
UnmonitorInstancesRequest::UnmonitorInstancesRequest(const UnmonitorInstancesRequest &other)
    : EC2Request(new UnmonitorInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UnmonitorInstancesRequest object.
 */
UnmonitorInstancesRequest::UnmonitorInstancesRequest()
    : EC2Request(new UnmonitorInstancesRequestPrivate(EC2Request::UnmonitorInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool UnmonitorInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UnmonitorInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UnmonitorInstancesRequest::response(QNetworkReply * const reply) const
{
    return new UnmonitorInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::UnmonitorInstancesRequestPrivate
 * \brief The UnmonitorInstancesRequestPrivate class provides private implementation for UnmonitorInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a UnmonitorInstancesRequestPrivate object for EC2 \a action,
 * with public implementation \a q.
 */
UnmonitorInstancesRequestPrivate::UnmonitorInstancesRequestPrivate(
    const EC2Request::Action action, UnmonitorInstancesRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UnmonitorInstancesRequest
 * class' copy constructor.
 */
UnmonitorInstancesRequestPrivate::UnmonitorInstancesRequestPrivate(
    const UnmonitorInstancesRequestPrivate &other, UnmonitorInstancesRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
