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

#include "listcommandsrequest.h"
#include "listcommandsrequest_p.h"
#include "listcommandsresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/*!
 * \class QtAws::SSM::ListCommandsRequest
 *
 * \brief The ListCommandsRequest class provides an interface for SSM ListCommands requests.
 *
 * \ingroup SSM
 *
 *  <fullname>AWS Systems Manager</fullname>
 * 
 *  AWS Systems Manager is a collection of capabilities that helps you automate management tasks such as collecting system
 *  inventory, applying operating system (OS) patches, automating the creation of Amazon Machine Images (AMIs), and
 *  configuring operating systems (OSs) and applications at scale. Systems Manager lets you remotely and securely manage the
 *  configuration of your managed instances. A <i>managed instance</i> is any Amazon EC2 instance or on-premises machine in
 *  your hybrid environment that has been configured for Systems
 * 
 *  Manager>
 * 
 *  This reference is intended to be used with the <a
 *  href="http://docs.aws.amazon.com/systems-manager/latest/userguide/">AWS Systems Manager User
 * 
 *  Guide</a>>
 * 
 *  To get started, verify prerequisites and configure managed instances. For more information, see <a
 *  href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Systems Manager
 * 
 *  Prerequisites</a>>
 * 
 *  For information about other API actions you can perform on Amazon EC2 instances, see the <a
 *  href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API Reference</a>. For information about how to
 *  use a Query API, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making API
 *  Requests</a>.
 *
 * \sa SSMClient::listCommands
 */

/*!
 * @brief  Constructs a new ListCommandsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListCommandsRequest::ListCommandsRequest(const ListCommandsRequest &other)
    : SSMRequest(new ListCommandsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListCommandsRequest object.
 */
ListCommandsRequest::ListCommandsRequest()
    : SSMRequest(new ListCommandsRequestPrivate(SSMRequest::ListCommandsAction, this))
{

}

/*!
 * \reimp
 */
bool ListCommandsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListCommandsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListCommandsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCommandsRequest::response(QNetworkReply * const reply) const
{
    return new ListCommandsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListCommandsRequestPrivate
 *
 * @brief  Private implementation for ListCommandsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListCommandsRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public ListCommandsRequest instance.
 */
ListCommandsRequestPrivate::ListCommandsRequestPrivate(
    const SSMRequest::Action action, ListCommandsRequest * const q)
    : SSMRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListCommandsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListCommandsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListCommandsRequest instance.
 */
ListCommandsRequestPrivate::ListCommandsRequestPrivate(
    const ListCommandsRequestPrivate &other, ListCommandsRequest * const q)
    : SSMRequestPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
