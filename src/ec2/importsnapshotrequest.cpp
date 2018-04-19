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

#include "importsnapshotrequest.h"
#include "importsnapshotrequest_p.h"
#include "importsnapshotresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ImportSnapshotRequest
 * \brief The ImportSnapshotRequest class provides an interface for EC2 ImportSnapshot requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::importSnapshot
 */

/*!
 * Constructs a copy of \a other.
 */
ImportSnapshotRequest::ImportSnapshotRequest(const ImportSnapshotRequest &other)
    : EC2Request(new ImportSnapshotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportSnapshotRequest object.
 */
ImportSnapshotRequest::ImportSnapshotRequest()
    : EC2Request(new ImportSnapshotRequestPrivate(EC2Request::ImportSnapshotAction, this))
{

}

/*!
 * \reimp
 */
bool ImportSnapshotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportSnapshotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new ImportSnapshotResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::ImportSnapshotRequestPrivate
 * \brief The ImportSnapshotRequestPrivate class provides private implementation for ImportSnapshotRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ImportSnapshotRequestPrivate object for EC2 \a action,
 * with public implementation \a q.
 */
ImportSnapshotRequestPrivate::ImportSnapshotRequestPrivate(
    const EC2Request::Action action, ImportSnapshotRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportSnapshotRequest
 * class' copy constructor.
 */
ImportSnapshotRequestPrivate::ImportSnapshotRequestPrivate(
    const ImportSnapshotRequestPrivate &other, ImportSnapshotRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
