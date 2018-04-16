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

#include "listqueuetagsrequest.h"
#include "listqueuetagsrequest_p.h"
#include "listqueuetagsresponse.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SQS {

/*!
 * \class QtAws::SQS::ListQueueTagsRequest
 *
 * \brief The ListQueueTagsRequest class encapsulates SQS ListQueueTags requests.
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
 * \sa SQSClient::listQueueTags
 */

/*!
 * @brief  Constructs a new ListQueueTagsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListQueueTagsRequest::ListQueueTagsRequest(const ListQueueTagsRequest &other)
    : SQSRequest(new ListQueueTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListQueueTagsRequest object.
 */
ListQueueTagsRequest::ListQueueTagsRequest()
    : SQSRequest(new ListQueueTagsRequestPrivate(SQSRequest::ListQueueTagsAction, this))
{

}

/*!
 * \reimp
 */
bool ListQueueTagsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListQueueTagsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListQueueTagsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SQSClient::send
 */
QtAws::Core::AwsAbstractResponse * ListQueueTagsRequest::response(QNetworkReply * const reply) const
{
    return new ListQueueTagsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListQueueTagsRequestPrivate
 *
 * @brief  Private implementation for ListQueueTagsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListQueueTagsRequestPrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public ListQueueTagsRequest instance.
 */
ListQueueTagsRequestPrivate::ListQueueTagsRequestPrivate(
    const SQSRequest::Action action, ListQueueTagsRequest * const q)
    : SQSRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListQueueTagsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListQueueTagsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListQueueTagsRequest instance.
 */
ListQueueTagsRequestPrivate::ListQueueTagsRequestPrivate(
    const ListQueueTagsRequestPrivate &other, ListQueueTagsRequest * const q)
    : SQSRequestPrivate(other, q)
{

}

} // namespace SQS
} // namespace QtAws
