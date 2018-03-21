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

#include "describesubscribersfornotificationresponse.h"
#include "describesubscribersfornotificationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Budgets {

/**
 * @class  DescribeSubscribersForNotificationResponse
 *
 * @brief  Handles Budgets DescribeSubscribersForNotification responses.
 *
 * @see    BudgetsClient::describeSubscribersForNotification
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeSubscribersForNotificationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BudgetsResponse(new DescribeSubscribersForNotificationResponsePrivate(this), parent)
{
    setRequest(new DescribeSubscribersForNotificationRequest(request));
    setReply(reply);
}

const DescribeSubscribersForNotificationRequest * DescribeSubscribersForNotificationResponse::request() const
{
    Q_D(const DescribeSubscribersForNotificationResponse);
    return static_cast<const DescribeSubscribersForNotificationRequest *>(d->request);
}

/**
 * @brief  Parse a Budgets DescribeSubscribersForNotification response.
 *
 * @param  response  Response to parse.
 */
void DescribeSubscribersForNotificationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeSubscribersForNotificationResponsePrivate
 *
 * @brief  Private implementation for DescribeSubscribersForNotificationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSubscribersForNotificationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeSubscribersForNotificationResponse instance.
 */
DescribeSubscribersForNotificationResponsePrivate::DescribeSubscribersForNotificationResponsePrivate(
    DescribeSubscribersForNotificationQueueResponse * const q) : DescribeSubscribersForNotificationPrivate(q)
{

}

/**
 * @brief  Parse an Budgets DescribeSubscribersForNotificationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeSubscribersForNotificationResponsePrivate::DescribeSubscribersForNotificationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSubscribersForNotificationResponse"));
    /// @todo
}

} // namespace Budgets
} // namespace AWS
