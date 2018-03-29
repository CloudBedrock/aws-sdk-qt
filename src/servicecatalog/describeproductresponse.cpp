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

#include "describeproductresponse.h"
#include "describeproductresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  DescribeProductResponse
 *
 * @brief  Handles ServiceCatalog DescribeProduct responses.
 *
 * @see    ServiceCatalogClient::describeProduct
 */

/**
 * @brief  Constructs a new DescribeProductResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeProductResponse::DescribeProductResponse(
        const DescribeProductRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeProductResponse(new DescribeProductResponsePrivate(this), parent)
{
    setRequest(new DescribeProductRequest(request));
    setReply(reply);
}

const DescribeProductRequest * DescribeProductResponse::request() const
{
    Q_D(const DescribeProductResponse);
    return static_cast<const DescribeProductRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog DescribeProduct response.
 *
 * @param  response  Response to parse.
 */
void DescribeProductResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeProductResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeProductResponsePrivate
 *
 * @brief  Private implementation for DescribeProductResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeProductResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeProductResponse instance.
 */
DescribeProductResponsePrivate::DescribeProductResponsePrivate(
    DescribeProductResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog DescribeProductResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeProductResponsePrivate::parseDescribeProductResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProductResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
