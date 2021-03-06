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

#include "setqueueattributesresponse.h"
#include "setqueueattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SQS {

/*!
 * \class QtAws::SQS::SetQueueAttributesResponse
 * \brief The SetQueueAttributesResponse class provides an interace for SQS SetQueueAttributes responses.
 *
 * \inmodule QtAwsSQS
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
 * \sa SqsClient::setQueueAttributes
 */

/*!
 * Constructs a SetQueueAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
SetQueueAttributesResponse::SetQueueAttributesResponse(
        const SetQueueAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SqsResponse(new SetQueueAttributesResponsePrivate(this), parent)
{
    setRequest(new SetQueueAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetQueueAttributesRequest * SetQueueAttributesResponse::request() const
{
    Q_D(const SetQueueAttributesResponse);
    return static_cast<const SetQueueAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SQS SetQueueAttributes \a response.
 */
void SetQueueAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(SetQueueAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SQS::SetQueueAttributesResponsePrivate
 * \brief The SetQueueAttributesResponsePrivate class provides private implementation for SetQueueAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsSQS
 */

/*!
 * Constructs a SetQueueAttributesResponsePrivate object with public implementation \a q.
 */
SetQueueAttributesResponsePrivate::SetQueueAttributesResponsePrivate(
    SetQueueAttributesResponse * const q) : SqsResponsePrivate(q)
{

}

/*!
 * Parses a SQS SetQueueAttributes response element from \a xml.
 */
void SetQueueAttributesResponsePrivate::parseSetQueueAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetQueueAttributesResponse"));
    /// @todo
}

} // namespace SQS
} // namespace QtAws
