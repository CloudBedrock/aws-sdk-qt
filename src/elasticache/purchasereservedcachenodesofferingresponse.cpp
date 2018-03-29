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

#include "purchasereservedcachenodesofferingresponse.h"
#include "purchasereservedcachenodesofferingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/**
 * @class  PurchaseReservedCacheNodesOfferingResponse
 *
 * @brief  Handles ElastiCache PurchaseReservedCacheNodesOffering responses.
 *
 * @see    ElastiCacheClient::purchaseReservedCacheNodesOffering
 */

/**
 * @brief  Constructs a new PurchaseReservedCacheNodesOfferingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PurchaseReservedCacheNodesOfferingResponse::PurchaseReservedCacheNodesOfferingResponse(
        const PurchaseReservedCacheNodesOfferingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PurchaseReservedCacheNodesOfferingResponse(new PurchaseReservedCacheNodesOfferingResponsePrivate(this), parent)
{
    setRequest(new PurchaseReservedCacheNodesOfferingRequest(request));
    setReply(reply);
}

const PurchaseReservedCacheNodesOfferingRequest * PurchaseReservedCacheNodesOfferingResponse::request() const
{
    Q_D(const PurchaseReservedCacheNodesOfferingResponse);
    return static_cast<const PurchaseReservedCacheNodesOfferingRequest *>(d->request);
}

/**
 * @brief  Parse a ElastiCache PurchaseReservedCacheNodesOffering response.
 *
 * @param  response  Response to parse.
 */
void PurchaseReservedCacheNodesOfferingResponse::parseSuccess(QIODevice &response)
{
    Q_D(PurchaseReservedCacheNodesOfferingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PurchaseReservedCacheNodesOfferingResponsePrivate
 *
 * @brief  Private implementation for PurchaseReservedCacheNodesOfferingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PurchaseReservedCacheNodesOfferingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PurchaseReservedCacheNodesOfferingResponse instance.
 */
PurchaseReservedCacheNodesOfferingResponsePrivate::PurchaseReservedCacheNodesOfferingResponsePrivate(
    PurchaseReservedCacheNodesOfferingResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElastiCache PurchaseReservedCacheNodesOfferingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PurchaseReservedCacheNodesOfferingResponsePrivate::parsePurchaseReservedCacheNodesOfferingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PurchaseReservedCacheNodesOfferingResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace QtAws
