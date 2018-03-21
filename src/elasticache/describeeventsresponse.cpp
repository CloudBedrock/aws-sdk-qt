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

#include "describeeventsresponse.h"
#include "describeeventsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElastiCache {

/**
 * @class  DescribeEventsResponse
 *
 * @brief  Handles ElastiCache DescribeEvents responses.
 *
 * @see    ElastiCacheClient::describeEvents
 */

/**
 * @brief  Constructs a new DescribeEventsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEventsResponse::DescribeEventsResponse(
        const DescribeEventsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DescribeEventsResponsePrivate(this), parent)
{
    setRequest(new DescribeEventsRequest(request));
    setReply(reply);
}

const DescribeEventsRequest * DescribeEventsResponse::request() const
{
    Q_D(const DescribeEventsResponse);
    return static_cast<const DescribeEventsRequest *>(d->request);
}

/**
 * @brief  Parse a ElastiCache DescribeEvents response.
 *
 * @param  response  Response to parse.
 */
void DescribeEventsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeEventsResponsePrivate
 *
 * @brief  Private implementation for DescribeEventsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEventsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeEventsResponse instance.
 */
DescribeEventsResponsePrivate::DescribeEventsResponsePrivate(
    DescribeEventsQueueResponse * const q) : DescribeEventsPrivate(q)
{

}

/**
 * @brief  Parse an ElastiCache DescribeEventsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEventsResponsePrivate::DescribeEventsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEventsResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace AWS
