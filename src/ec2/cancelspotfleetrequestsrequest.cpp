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

#include "cancelspotfleetrequestsrequest.h"
#include "cancelspotfleetrequestsrequest_p.h"
#include "cancelspotfleetrequestsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CancelSpotFleetRequestsRequest
 * \brief The CancelSpotFleetRequestsRequest class provides an interface for EC2 CancelSpotFleetRequests requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::cancelSpotFleetRequests
 */

/*!
 * Constructs a copy of \a other.
 */
CancelSpotFleetRequestsRequest::CancelSpotFleetRequestsRequest(const CancelSpotFleetRequestsRequest &other)
    : EC2Request(new CancelSpotFleetRequestsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelSpotFleetRequestsRequest object.
 */
CancelSpotFleetRequestsRequest::CancelSpotFleetRequestsRequest()
    : EC2Request(new CancelSpotFleetRequestsRequestPrivate(EC2Request::CancelSpotFleetRequestsAction, this))
{

}

/*!
 * \reimp
 */
bool CancelSpotFleetRequestsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelSpotFleetRequestsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelSpotFleetRequestsRequest::response(QNetworkReply * const reply) const
{
    return new CancelSpotFleetRequestsResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::CancelSpotFleetRequestsRequestPrivate
 * \brief The CancelSpotFleetRequestsRequestPrivate class provides private implementation for CancelSpotFleetRequestsRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CancelSpotFleetRequestsRequestPrivate object for EC2 \a action,
 * with public implementation \a q.
 */
CancelSpotFleetRequestsRequestPrivate::CancelSpotFleetRequestsRequestPrivate(
    const EC2Request::Action action, CancelSpotFleetRequestsRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelSpotFleetRequestsRequest
 * class' copy constructor.
 */
CancelSpotFleetRequestsRequestPrivate::CancelSpotFleetRequestsRequestPrivate(
    const CancelSpotFleetRequestsRequestPrivate &other, CancelSpotFleetRequestsRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
