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

#include "deletetopicrequest.h"
#include "deletetopicrequest_p.h"
#include "deletetopicresponse.h"
#include "snsrequest_p.h"

namespace QtAws {
namespace SNS {

/*!
 * \class QtAws::SNS::DeleteTopicRequest
 * \brief The DeleteTopicRequest class provides an interface for SNS DeleteTopic requests.
 *
 * \inmodule QtAwsSNS
 *
 *  <fullname>Amazon Simple Notification Service</fullname>
 * 
 *  Amazon Simple Notification Service (Amazon SNS) is a web service that enables you to build distributed web-enabled
 *  applications. Applications can use Amazon SNS to easily push real-time notification messages to interested subscribers
 *  over multiple delivery protocols. For more information about this product see <a
 *  href="http://aws.amazon.com/sns/">http://aws.amazon.com/sns</a>. For detailed information about Amazon SNS features and
 *  their associated API calls, see the <a href="http://docs.aws.amazon.com/sns/latest/dg/">Amazon SNS Developer Guide</a>.
 * 
 *  </p
 * 
 *  We also provide SDKs that enable you to access Amazon SNS from your preferred programming language. The SDKs contain
 *  functionality that automatically takes care of tasks such as: cryptographically signing your service requests, retrying
 *  requests, and handling error responses. For a list of available SDKs, go to <a href="http://aws.amazon.com/tools/">Tools
 *  for Amazon Web Services</a>.
 *
 * \sa SNSClient::deleteTopic
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTopicRequest::DeleteTopicRequest(const DeleteTopicRequest &other)
    : SNSRequest(new DeleteTopicRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTopicRequest object.
 */
DeleteTopicRequest::DeleteTopicRequest()
    : SNSRequest(new DeleteTopicRequestPrivate(SNSRequest::DeleteTopicAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTopicRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTopicResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTopicRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTopicResponse(*this, reply);
}

/*!
 * \class QtAws::SNS::DeleteTopicRequestPrivate
 * \brief The DeleteTopicRequestPrivate class provides private implementation for DeleteTopicRequest.
 * \internal
 *
 * \inmodule QtAwsSNS
 */

/*!
 *
 * Constructs a DeleteTopicRequestPrivate object for SNS \a action with,
 * public implementation \a q.
 */
DeleteTopicRequestPrivate::DeleteTopicRequestPrivate(
    const SNSRequest::Action action, DeleteTopicRequest * const q)
    : SNSRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTopicRequest
 * class' copy constructor.
 */
DeleteTopicRequestPrivate::DeleteTopicRequestPrivate(
    const DeleteTopicRequestPrivate &other, DeleteTopicRequest * const q)
    : SNSRequestPrivate(other, q)
{

}

} // namespace SNS
} // namespace QtAws
