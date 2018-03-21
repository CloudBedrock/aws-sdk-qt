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

#include "scanprovisionedproductsresponse.h"
#include "scanprovisionedproductsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  ScanProvisionedProductsResponse
 *
 * @brief  Handles ServiceCatalog ScanProvisionedProducts responses.
 *
 * @see    ServiceCatalogClient::scanProvisionedProducts
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ScanProvisionedProductsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ScanProvisionedProductsResponsePrivate(this), parent)
{
    setRequest(new ScanProvisionedProductsRequest(request));
    setReply(reply);
}

const ScanProvisionedProductsRequest * ScanProvisionedProductsResponse::request() const
{
    Q_D(const ScanProvisionedProductsResponse);
    return static_cast<const ScanProvisionedProductsRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog ScanProvisionedProducts response.
 *
 * @param  response  Response to parse.
 */
void ScanProvisionedProductsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ScanProvisionedProductsResponsePrivate
 *
 * @brief  Private implementation for ScanProvisionedProductsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ScanProvisionedProductsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ScanProvisionedProductsResponse instance.
 */
ScanProvisionedProductsResponsePrivate::ScanProvisionedProductsResponsePrivate(
    ScanProvisionedProductsQueueResponse * const q) : ScanProvisionedProductsPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog ScanProvisionedProductsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ScanProvisionedProductsResponsePrivate::ScanProvisionedProductsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ScanProvisionedProductsResponse"));
    /// @todo
}
