/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listsubscriptionsbytopicresponse.h"
#include "listsubscriptionsbytopicresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SNS {

/**
 * @class  ListSubscriptionsByTopicResponse
 *
 * @brief  Handles SNS ListSubscriptionsByTopic responses.
 *
 * @see    SNSClient::listSubscriptionsByTopic
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListSubscriptionsByTopicResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SNSResponse(new ListSubscriptionsByTopicResponsePrivate(this), parent)
{
    setRequest(new ListSubscriptionsByTopicRequest(request));
    setReply(reply);
}

const ListSubscriptionsByTopicRequest * ListSubscriptionsByTopicResponse::request() const
{
    Q_D(const ListSubscriptionsByTopicResponse);
    return static_cast<const ListSubscriptionsByTopicRequest *>(d->request);
}

/**
 * @brief  Parse a SNS ListSubscriptionsByTopic response.
 *
 * @param  response  Response to parse.
 */
void ListSubscriptionsByTopicResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListSubscriptionsByTopicResponsePrivate
 *
 * @brief  Private implementation for ListSubscriptionsByTopicResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSubscriptionsByTopicResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListSubscriptionsByTopicResponse instance.
 */
ListSubscriptionsByTopicResponsePrivate::ListSubscriptionsByTopicResponsePrivate(
    ListSubscriptionsByTopicQueueResponse * const q) : ListSubscriptionsByTopicPrivate(q)
{

}

/**
 * @brief  Parse an SNS ListSubscriptionsByTopicResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListSubscriptionsByTopicResponsePrivate::ListSubscriptionsByTopicResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSubscriptionsByTopicResponse"));
    /// @todo
}

} // namespace SNS
} // namespace AWS
