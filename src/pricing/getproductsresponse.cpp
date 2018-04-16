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

#include "getproductsresponse.h"
#include "getproductsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pricing {

/*!
 * \class QtAws::Pricing::GetProductsResponse
 *
 * \brief The GetProductsResponse class provides an interace for Pricing GetProducts responses.
 *
 * \ingroup Pricing
 *
 *  AWS Price List Service API (AWS Price List Service) is a centralized and convenient way to programmatically query Amazon
 *  Web Services for services, products, and pricing information. The AWS Price List Service uses standardized product
 *  attributes such as <code>Location</code>, <code>Storage Class</code>, and <code>Operating System</code>, and provides
 *  prices at the SKU level. You can use the AWS Price List Service to build cost control and scenario planning tools,
 *  reconcile billing data, forecast future spend for budgeting purposes, and provide cost benefit analysis that compare
 *  your internal workloads with
 * 
 *  AWS>
 * 
 *  Use <code>GetServices</code> without a service code to retrieve the service codes for all AWS services, then
 *  <code>GetServices</code> with a service code to retreive the attribute names for that service. After you have the
 *  service code and attribute names, you can use <code>GetAttributeValues</code> to see what values are available for an
 *  attribute. With the service code and an attribute name and value, you can use <code>GetProducts</code> to find specific
 *  products that you're interested in, such as an <code>AmazonEC2</code> instance, with a <code>Provisioned IOPS</code>
 * 
 *  <code>volumeType</code>>
 * 
 *  Service
 * 
 *  Endpoin>
 * 
 *  AWS Price List Service API provides the following two
 * 
 *  endpoints> <ul> <li>
 * 
 *  https://api.pricing.us-east-1.amazonaws.co> </li> <li>
 *
 * \sa PricingClient::getProducts
 */

/*!
 * @brief  Constructs a new GetProductsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetProductsResponse::GetProductsResponse(
        const GetProductsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PricingResponse(new GetProductsResponsePrivate(this), parent)
{
    setRequest(new GetProductsRequest(request));
    setReply(reply);
}

const GetProductsRequest * GetProductsResponse::request() const
{
    Q_D(const GetProductsResponse);
    return static_cast<const GetProductsRequest *>(d->request);
}

/*!
 * @brief  Parse a Pricing GetProducts response.
 *
 * @param  response  Response to parse.
 */
void GetProductsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetProductsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetProductsResponsePrivate
 *
 * \brief Private implementation for GetProductsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetProductsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetProductsResponse instance.
 */
GetProductsResponsePrivate::GetProductsResponsePrivate(
    GetProductsResponse * const q) : PricingResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Pricing GetProductsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetProductsResponsePrivate::parseGetProductsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetProductsResponse"));
    /// @todo
}

} // namespace Pricing
} // namespace QtAws
