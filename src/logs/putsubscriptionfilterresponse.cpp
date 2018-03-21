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

#include "putsubscriptionfilterresponse.h"
#include "putsubscriptionfilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  PutSubscriptionFilterResponse
 *
 * @brief  Handles CloudWatchLogs PutSubscriptionFilter responses.
 *
 * @see    CloudWatchLogsClient::putSubscriptionFilter
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutSubscriptionFilterResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new PutSubscriptionFilterResponsePrivate(this), parent)
{
    setRequest(new PutSubscriptionFilterRequest(request));
    setReply(reply);
}

const PutSubscriptionFilterRequest * PutSubscriptionFilterResponse::request() const
{
    Q_D(const PutSubscriptionFilterResponse);
    return static_cast<const PutSubscriptionFilterRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs PutSubscriptionFilter response.
 *
 * @param  response  Response to parse.
 */
void PutSubscriptionFilterResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutSubscriptionFilterResponsePrivate
 *
 * @brief  Private implementation for PutSubscriptionFilterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutSubscriptionFilterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutSubscriptionFilterResponse instance.
 */
PutSubscriptionFilterResponsePrivate::PutSubscriptionFilterResponsePrivate(
    PutSubscriptionFilterQueueResponse * const q) : PutSubscriptionFilterPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs PutSubscriptionFilterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutSubscriptionFilterResponsePrivate::PutSubscriptionFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutSubscriptionFilterResponse"));
    /// @todo
}

} // namespace CloudWatchLogs
} // namespace AWS
