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

#include "purchasereservedinstancesofferingresponse.h"
#include "purchasereservedinstancesofferingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  PurchaseReservedInstancesOfferingResponse
 *
 * @brief  Handles EC2 PurchaseReservedInstancesOffering responses.
 *
 * @see    EC2Client::purchaseReservedInstancesOffering
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PurchaseReservedInstancesOfferingResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new PurchaseReservedInstancesOfferingResponsePrivate(this), parent)
{
    setRequest(new PurchaseReservedInstancesOfferingRequest(request));
    setReply(reply);
}

const PurchaseReservedInstancesOfferingRequest * PurchaseReservedInstancesOfferingResponse::request() const
{
    Q_D(const PurchaseReservedInstancesOfferingResponse);
    return static_cast<const PurchaseReservedInstancesOfferingRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 PurchaseReservedInstancesOffering response.
 *
 * @param  response  Response to parse.
 */
void PurchaseReservedInstancesOfferingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PurchaseReservedInstancesOfferingResponsePrivate
 *
 * @brief  Private implementation for PurchaseReservedInstancesOfferingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PurchaseReservedInstancesOfferingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PurchaseReservedInstancesOfferingResponse instance.
 */
PurchaseReservedInstancesOfferingResponsePrivate::PurchaseReservedInstancesOfferingResponsePrivate(
    PurchaseReservedInstancesOfferingQueueResponse * const q) : PurchaseReservedInstancesOfferingPrivate(q)
{

}

/**
 * @brief  Parse an EC2 PurchaseReservedInstancesOfferingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PurchaseReservedInstancesOfferingResponsePrivate::PurchaseReservedInstancesOfferingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PurchaseReservedInstancesOfferingResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
