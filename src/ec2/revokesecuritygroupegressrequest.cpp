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

#include "revokesecuritygroupegressrequest.h"
#include "revokesecuritygroupegressrequest_p.h"
#include "revokesecuritygroupegressresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::RevokeSecurityGroupEgressRequest
 * \brief The RevokeSecurityGroupEgressRequest class provides an interface for EC2 RevokeSecurityGroupEgress requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::revokeSecurityGroupEgress
 */

/*!
 * Constructs a copy of \a other.
 */
RevokeSecurityGroupEgressRequest::RevokeSecurityGroupEgressRequest(const RevokeSecurityGroupEgressRequest &other)
    : Ec2Request(new RevokeSecurityGroupEgressRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RevokeSecurityGroupEgressRequest object.
 */
RevokeSecurityGroupEgressRequest::RevokeSecurityGroupEgressRequest()
    : Ec2Request(new RevokeSecurityGroupEgressRequestPrivate(Ec2Request::RevokeSecurityGroupEgressAction, this))
{

}

/*!
 * \reimp
 */
bool RevokeSecurityGroupEgressRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RevokeSecurityGroupEgressResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RevokeSecurityGroupEgressRequest::response(QNetworkReply * const reply) const
{
    return new RevokeSecurityGroupEgressResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::RevokeSecurityGroupEgressRequestPrivate
 * \brief The RevokeSecurityGroupEgressRequestPrivate class provides private implementation for RevokeSecurityGroupEgressRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a RevokeSecurityGroupEgressRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
RevokeSecurityGroupEgressRequestPrivate::RevokeSecurityGroupEgressRequestPrivate(
    const Ec2Request::Action action, RevokeSecurityGroupEgressRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RevokeSecurityGroupEgressRequest
 * class' copy constructor.
 */
RevokeSecurityGroupEgressRequestPrivate::RevokeSecurityGroupEgressRequestPrivate(
    const RevokeSecurityGroupEgressRequestPrivate &other, RevokeSecurityGroupEgressRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
