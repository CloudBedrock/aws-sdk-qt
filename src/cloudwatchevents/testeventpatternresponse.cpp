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

#include "testeventpatternresponse.h"
#include "testeventpatternresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::TestEventPatternResponse
 * \brief The TestEventPatternResponse class provides an interace for CloudWatchEvents TestEventPattern responses.
 *
 * \inmodule QtAwsCloudWatchEvents
 *
 *  Amazon CloudWatch Events helps you to respond to state changes in your AWS resources. When your resources change state,
 *  they automatically send events into an event stream. You can create rules that match selected events in the stream and
 *  route them to targets to take action. You can also use rules to take action on a pre-determined schedule. For example,
 *  you can configure rules
 * 
 *  to> <ul> <li>
 * 
 *  Automatically invoke an AWS Lambda function to update DNS entries when an event notifies you that Amazon EC2 instance
 *  enters the running
 * 
 *  state> </li> <li>
 * 
 *  Direct specific API records from CloudTrail to an Amazon Kinesis stream for detailed analysis of potential security or
 *  availability
 * 
 *  risks> </li> <li>
 * 
 *  Periodically invoke a built-in target to create a snapshot of an Amazon EBS
 * 
 *  volume> </li> </ul>
 * 
 *  For more information about the features of Amazon CloudWatch Events, see the <a
 *  href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events">Amazon CloudWatch Events User
 *
 * \sa CloudWatchEventsClient::testEventPattern
 */

/*!
 * Constructs a TestEventPatternResponse object for \a reply to \a request, with parent \a parent.
 */
TestEventPatternResponse::TestEventPatternResponse(
        const TestEventPatternRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchEventsResponse(new TestEventPatternResponsePrivate(this), parent)
{
    setRequest(new TestEventPatternRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TestEventPatternRequest * TestEventPatternResponse::request() const
{
    Q_D(const TestEventPatternResponse);
    return static_cast<const TestEventPatternRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatchEvents TestEventPattern \a response.
 */
void TestEventPatternResponse::parseSuccess(QIODevice &response)
{
    Q_D(TestEventPatternResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatchEvents::TestEventPatternResponsePrivate
 * \brief The TestEventPatternResponsePrivate class provides private implementation for TestEventPatternResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a TestEventPatternResponsePrivate object with public implementation \a q.
 */
TestEventPatternResponsePrivate::TestEventPatternResponsePrivate(
    TestEventPatternResponse * const q) : CloudWatchEventsResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatchEvents TestEventPattern response element from \a xml.
 */
void TestEventPatternResponsePrivate::parseTestEventPatternResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestEventPatternResponse"));
    /// @todo
}

} // namespace CloudWatchEvents
} // namespace QtAws
