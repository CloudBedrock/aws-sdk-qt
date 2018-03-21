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

#include "describeprovisionedproductresponse.h"
#include "describeprovisionedproductresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  DescribeProvisionedProductResponse
 *
 * @brief  Handles ServiceCatalog DescribeProvisionedProduct responses.
 *
 * @see    ServiceCatalogClient::describeProvisionedProduct
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeProvisionedProductResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DescribeProvisionedProductResponsePrivate(this), parent)
{
    setRequest(new DescribeProvisionedProductRequest(request));
    setReply(reply);
}

const DescribeProvisionedProductRequest * DescribeProvisionedProductResponse::request() const
{
    Q_D(const DescribeProvisionedProductResponse);
    return static_cast<const DescribeProvisionedProductRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog DescribeProvisionedProduct response.
 *
 * @param  response  Response to parse.
 */
void DescribeProvisionedProductResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeProvisionedProductResponsePrivate
 *
 * @brief  Private implementation for DescribeProvisionedProductResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeProvisionedProductResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeProvisionedProductResponse instance.
 */
DescribeProvisionedProductResponsePrivate::DescribeProvisionedProductResponsePrivate(
    DescribeProvisionedProductQueueResponse * const q) : DescribeProvisionedProductPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog DescribeProvisionedProductResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeProvisionedProductResponsePrivate::DescribeProvisionedProductResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProvisionedProductResponse"));
    /// @todo
}
