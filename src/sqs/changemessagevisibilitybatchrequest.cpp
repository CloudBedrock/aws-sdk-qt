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

#include "changemessagevisibilitybatchrequest.h"
#include "changemessagevisibilitybatchrequest_p.h"
#include "changemessagevisibilitybatchresponse.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SQS {

/*!
 * \class QtAws::SQS::ChangeMessageVisibilityBatchRequest
 *
 * \brief The ChangeMessageVisibilityBatchRequest class encapsulates SQS ChangeMessageVisibilityBatch requests.
 *
 * \ingroup SQS
 *
 *  Welcome to the <i>Amazon Simple Queue Service API
 * 
 *  Reference</i>>
 * 
 *  Amazon Simple Queue Service (Amazon SQS) is a reliable, highly-scalable hosted queue for storing messages as they travel
 *  between applications or microservices. Amazon SQS moves data between distributed application components and helps you
 *  decouple these
 * 
 *  components> <note>
 * 
 *  <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/standard-queues.html">Standard
 *  queues</a> are available in all regions. <a
 *  href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO queues</a> are
 *  available in the US East (N. Virginia), US East (Ohio), US West (Oregon), and EU (Ireland)
 * 
 *  regions> </note>
 * 
 *  You can use <a href="http://aws.amazon.com/tools/#sdk">AWS SDKs</a> to access Amazon SQS using your favorite programming
 *  language. The SDKs perform tasks such as the following
 * 
 *  automatically> <ul> <li>
 * 
 *  Cryptographically sign your service
 * 
 *  request> </li> <li>
 * 
 *  Retry
 * 
 *  request> </li> <li>
 * 
 *  Handle error
 * 
 *  response> </li> </ul>
 * 
 *  <b>Additional Information</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/sqs/">Amazon SQS Product Page</a>
 * 
 *  </p </li> <li>
 * 
 *  <i>Amazon Simple Queue Service Developer Guide</i>
 * 
 *  </p <ul> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/MakingRequestsArticle.html">Making
 *  API Requests</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-message-attributes.html">Using
 *  Amazon SQS Message Attributes</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
 *  Amazon SQS Dead-Letter Queues</a>
 * 
 *  </p </li> </ul> </li> <li>
 * 
 *  <i>Amazon Web Services General Reference</i>
 * 
 *  </p <ul> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html#sqs_region">Regions and Endpoints</a>
 *
 * \sa SQSClient::changeMessageVisibilityBatch
 */

/*!
 * @brief  Constructs a new ChangeMessageVisibilityBatchRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ChangeMessageVisibilityBatchRequest::ChangeMessageVisibilityBatchRequest(const ChangeMessageVisibilityBatchRequest &other)
    : SQSRequest(new ChangeMessageVisibilityBatchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ChangeMessageVisibilityBatchRequest object.
 */
ChangeMessageVisibilityBatchRequest::ChangeMessageVisibilityBatchRequest()
    : SQSRequest(new ChangeMessageVisibilityBatchRequestPrivate(SQSRequest::ChangeMessageVisibilityBatchAction, this))
{

}

/*!
 * \reimp
 */
bool ChangeMessageVisibilityBatchRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ChangeMessageVisibilityBatchResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ChangeMessageVisibilityBatchResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SQSClient::send
 */
QtAws::Core::AwsAbstractResponse * ChangeMessageVisibilityBatchRequest::response(QNetworkReply * const reply) const
{
    return new ChangeMessageVisibilityBatchResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ChangeMessageVisibilityBatchRequestPrivate
 *
 * @brief  Private implementation for ChangeMessageVisibilityBatchRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ChangeMessageVisibilityBatchRequestPrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public ChangeMessageVisibilityBatchRequest instance.
 */
ChangeMessageVisibilityBatchRequestPrivate::ChangeMessageVisibilityBatchRequestPrivate(
    const SQSRequest::Action action, ChangeMessageVisibilityBatchRequest * const q)
    : SQSRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ChangeMessageVisibilityBatchRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ChangeMessageVisibilityBatchRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ChangeMessageVisibilityBatchRequest instance.
 */
ChangeMessageVisibilityBatchRequestPrivate::ChangeMessageVisibilityBatchRequestPrivate(
    const ChangeMessageVisibilityBatchRequestPrivate &other, ChangeMessageVisibilityBatchRequest * const q)
    : SQSRequestPrivate(other, q)
{

}

} // namespace SQS
} // namespace QtAws
