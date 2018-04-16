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

#include "removetargetsresponse.h"
#include "removetargetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::RemoveTargetsResponse
 *
 * \brief The RemoveTargetsResponse class provides an interace for CloudWatchEvents RemoveTargets responses.
 *
 * \ingroup CloudWatchEvents
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
 * \sa CloudWatchEventsClient::removeTargets
 */

/*!
 * @brief  Constructs a new RemoveTargetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemoveTargetsResponse::RemoveTargetsResponse(
        const RemoveTargetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchEventsResponse(new RemoveTargetsResponsePrivate(this), parent)
{
    setRequest(new RemoveTargetsRequest(request));
    setReply(reply);
}

const RemoveTargetsRequest * RemoveTargetsResponse::request() const
{
    Q_D(const RemoveTargetsResponse);
    return static_cast<const RemoveTargetsRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudWatchEvents RemoveTargets response.
 *
 * @param  response  Response to parse.
 */
void RemoveTargetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(RemoveTargetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class RemoveTargetsResponsePrivate
 *
 * \brief Private implementation for RemoveTargetsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new RemoveTargetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RemoveTargetsResponse instance.
 */
RemoveTargetsResponsePrivate::RemoveTargetsResponsePrivate(
    RemoveTargetsResponse * const q) : CloudWatchEventsResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudWatchEvents RemoveTargetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RemoveTargetsResponsePrivate::parseRemoveTargetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveTargetsResponse"));
    /// @todo
}

} // namespace CloudWatchEvents
} // namespace QtAws
