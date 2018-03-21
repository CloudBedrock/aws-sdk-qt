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

#include "batchmeterusageresponse.h"
#include "batchmeterusageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MarketplaceMetering {

/**
 * @class  BatchMeterUsageResponse
 *
 * @brief  Handles MarketplaceMetering BatchMeterUsage responses.
 *
 * @see    MarketplaceMeteringClient::batchMeterUsage
 */

/**
 * @brief  Constructs a new BatchMeterUsageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchMeterUsageResponse::BatchMeterUsageResponse(
        const BatchMeterUsageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MarketplaceMeteringResponse(new BatchMeterUsageResponsePrivate(this), parent)
{
    setRequest(new BatchMeterUsageRequest(request));
    setReply(reply);
}

const BatchMeterUsageRequest * BatchMeterUsageResponse::request() const
{
    Q_D(const BatchMeterUsageResponse);
    return static_cast<const BatchMeterUsageRequest *>(d->request);
}

/**
 * @brief  Parse a MarketplaceMetering BatchMeterUsage response.
 *
 * @param  response  Response to parse.
 */
void BatchMeterUsageResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchMeterUsageResponsePrivate
 *
 * @brief  Private implementation for BatchMeterUsageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchMeterUsageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchMeterUsageResponse instance.
 */
BatchMeterUsageResponsePrivate::BatchMeterUsageResponsePrivate(
    BatchMeterUsageQueueResponse * const q) : BatchMeterUsagePrivate(q)
{

}

/**
 * @brief  Parse an MarketplaceMetering BatchMeterUsageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchMeterUsageResponsePrivate::BatchMeterUsageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchMeterUsageResponse"));
    /// @todo
}

} // namespace MarketplaceMetering
} // namespace AWS
