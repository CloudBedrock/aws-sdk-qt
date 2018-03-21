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

#include "enablemetricscollectionresponse.h"
#include "enablemetricscollectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AutoScaling {

/**
 * @class  EnableMetricsCollectionResponse
 *
 * @brief  Handles AutoScaling EnableMetricsCollection responses.
 *
 * @see    AutoScalingClient::enableMetricsCollection
 */

/**
 * @brief  Constructs a new EnableMetricsCollectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnableMetricsCollectionResponse::EnableMetricsCollectionResponse(
        const EnableMetricsCollectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new EnableMetricsCollectionResponsePrivate(this), parent)
{
    setRequest(new EnableMetricsCollectionRequest(request));
    setReply(reply);
}

const EnableMetricsCollectionRequest * EnableMetricsCollectionResponse::request() const
{
    Q_D(const EnableMetricsCollectionResponse);
    return static_cast<const EnableMetricsCollectionRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling EnableMetricsCollection response.
 *
 * @param  response  Response to parse.
 */
void EnableMetricsCollectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  EnableMetricsCollectionResponsePrivate
 *
 * @brief  Private implementation for EnableMetricsCollectionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableMetricsCollectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EnableMetricsCollectionResponse instance.
 */
EnableMetricsCollectionResponsePrivate::EnableMetricsCollectionResponsePrivate(
    EnableMetricsCollectionQueueResponse * const q) : EnableMetricsCollectionPrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling EnableMetricsCollectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void EnableMetricsCollectionResponsePrivate::EnableMetricsCollectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableMetricsCollectionResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace AWS
