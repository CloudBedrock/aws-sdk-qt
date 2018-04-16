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

#include "getsubscriptionattributesrequest.h"
#include "getsubscriptionattributesrequest_p.h"
#include "getsubscriptionattributesresponse.h"
#include "snsrequest_p.h"

namespace QtAws {
namespace SNS {

/*!
 * \class QtAws::SNS::GetSubscriptionAttributesRequest
 *
 * \brief The GetSubscriptionAttributesRequest class provides an interface for SNS GetSubscriptionAttributes requests.
 *
 * \ingroup SNS
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
 * \sa SNSClient::getSubscriptionAttributes
 */

/*!
 * @brief  Constructs a new GetSubscriptionAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSubscriptionAttributesRequest::GetSubscriptionAttributesRequest(const GetSubscriptionAttributesRequest &other)
    : SNSRequest(new GetSubscriptionAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetSubscriptionAttributesRequest object.
 */
GetSubscriptionAttributesRequest::GetSubscriptionAttributesRequest()
    : SNSRequest(new GetSubscriptionAttributesRequestPrivate(SNSRequest::GetSubscriptionAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool GetSubscriptionAttributesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetSubscriptionAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSubscriptionAttributesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SNSClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSubscriptionAttributesRequest::response(QNetworkReply * const reply) const
{
    return new GetSubscriptionAttributesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetSubscriptionAttributesRequestPrivate
 *
 * @brief  Private implementation for GetSubscriptionAttributesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetSubscriptionAttributesRequestPrivate object.
 *
 * @param  action  SNS action being performed.
 * @param  q       Pointer to this object's public GetSubscriptionAttributesRequest instance.
 */
GetSubscriptionAttributesRequestPrivate::GetSubscriptionAttributesRequestPrivate(
    const SNSRequest::Action action, GetSubscriptionAttributesRequest * const q)
    : SNSRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetSubscriptionAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSubscriptionAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSubscriptionAttributesRequest instance.
 */
GetSubscriptionAttributesRequestPrivate::GetSubscriptionAttributesRequestPrivate(
    const GetSubscriptionAttributesRequestPrivate &other, GetSubscriptionAttributesRequest * const q)
    : SNSRequestPrivate(other, q)
{

}

} // namespace SNS
} // namespace QtAws
