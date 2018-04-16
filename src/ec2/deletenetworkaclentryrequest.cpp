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

#include "deletenetworkaclentryrequest.h"
#include "deletenetworkaclentryrequest_p.h"
#include "deletenetworkaclentryresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteNetworkAclEntryRequest
 *
 * \brief The DeleteNetworkAclEntryRequest class provides an interface for EC2 DeleteNetworkAclEntry requests.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::deleteNetworkAclEntry
 */

/*!
 * @brief  Constructs a new DeleteNetworkAclEntryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteNetworkAclEntryRequest::DeleteNetworkAclEntryRequest(const DeleteNetworkAclEntryRequest &other)
    : EC2Request(new DeleteNetworkAclEntryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteNetworkAclEntryRequest object.
 */
DeleteNetworkAclEntryRequest::DeleteNetworkAclEntryRequest()
    : EC2Request(new DeleteNetworkAclEntryRequestPrivate(EC2Request::DeleteNetworkAclEntryAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteNetworkAclEntryRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteNetworkAclEntryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteNetworkAclEntryResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * DeleteNetworkAclEntryRequest::response(QNetworkReply * const reply) const
{
    return new DeleteNetworkAclEntryResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteNetworkAclEntryRequestPrivate
 *
 * @brief  Private implementation for DeleteNetworkAclEntryRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteNetworkAclEntryRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DeleteNetworkAclEntryRequest instance.
 */
DeleteNetworkAclEntryRequestPrivate::DeleteNetworkAclEntryRequestPrivate(
    const EC2Request::Action action, DeleteNetworkAclEntryRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteNetworkAclEntryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteNetworkAclEntryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteNetworkAclEntryRequest instance.
 */
DeleteNetworkAclEntryRequestPrivate::DeleteNetworkAclEntryRequestPrivate(
    const DeleteNetworkAclEntryRequestPrivate &other, DeleteNetworkAclEntryRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
