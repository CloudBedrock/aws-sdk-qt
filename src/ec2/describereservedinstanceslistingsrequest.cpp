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

#include "describereservedinstanceslistingsrequest.h"
#include "describereservedinstanceslistingsrequest_p.h"
#include "describereservedinstanceslistingsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeReservedInstancesListingsRequest
 * \brief The DescribeReservedInstancesListingsRequest class provides an interface for EC2 DescribeReservedInstancesListings requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeReservedInstancesListings
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeReservedInstancesListingsRequest::DescribeReservedInstancesListingsRequest(const DescribeReservedInstancesListingsRequest &other)
    : Ec2Request(new DescribeReservedInstancesListingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeReservedInstancesListingsRequest object.
 */
DescribeReservedInstancesListingsRequest::DescribeReservedInstancesListingsRequest()
    : Ec2Request(new DescribeReservedInstancesListingsRequestPrivate(Ec2Request::DescribeReservedInstancesListingsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeReservedInstancesListingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeReservedInstancesListingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReservedInstancesListingsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReservedInstancesListingsResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DescribeReservedInstancesListingsRequestPrivate
 * \brief The DescribeReservedInstancesListingsRequestPrivate class provides private implementation for DescribeReservedInstancesListingsRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeReservedInstancesListingsRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
DescribeReservedInstancesListingsRequestPrivate::DescribeReservedInstancesListingsRequestPrivate(
    const Ec2Request::Action action, DescribeReservedInstancesListingsRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeReservedInstancesListingsRequest
 * class' copy constructor.
 */
DescribeReservedInstancesListingsRequestPrivate::DescribeReservedInstancesListingsRequestPrivate(
    const DescribeReservedInstancesListingsRequestPrivate &other, DescribeReservedInstancesListingsRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
