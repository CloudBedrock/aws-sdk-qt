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

#include "describetagoptionresponse.h"
#include "describetagoptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  DescribeTagOptionResponse
 *
 * @brief  Handles ServiceCatalog DescribeTagOption responses.
 *
 * @see    ServiceCatalogClient::describeTagOption
 */

/**
 * @brief  Constructs a new DescribeTagOptionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTagOptionResponse::DescribeTagOptionResponse(
        const DescribeTagOptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DescribeTagOptionResponsePrivate(this), parent)
{
    setRequest(new DescribeTagOptionRequest(request));
    setReply(reply);
}

const DescribeTagOptionRequest * DescribeTagOptionResponse::request() const
{
    Q_D(const DescribeTagOptionResponse);
    return static_cast<const DescribeTagOptionRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog DescribeTagOption response.
 *
 * @param  response  Response to parse.
 */
void DescribeTagOptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeTagOptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeTagOptionResponsePrivate
 *
 * @brief  Private implementation for DescribeTagOptionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTagOptionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeTagOptionResponse instance.
 */
DescribeTagOptionResponsePrivate::DescribeTagOptionResponsePrivate(
    DescribeTagOptionResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog DescribeTagOptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeTagOptionResponsePrivate::parseDescribeTagOptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTagOptionResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
