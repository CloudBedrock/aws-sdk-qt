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

#include "describeelasticsearchdomainconfigresponse.h"
#include "describeelasticsearchdomainconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticsearchService {

/**
 * @class  DescribeElasticsearchDomainConfigResponse
 *
 * @brief  Handles ElasticsearchService DescribeElasticsearchDomainConfig responses.
 *
 * @see    ElasticsearchServiceClient::describeElasticsearchDomainConfig
 */

/**
 * @brief  Constructs a new DescribeElasticsearchDomainConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeElasticsearchDomainConfigResponse::DescribeElasticsearchDomainConfigResponse(
        const DescribeElasticsearchDomainConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchServiceResponse(new DescribeElasticsearchDomainConfigResponsePrivate(this), parent)
{
    setRequest(new DescribeElasticsearchDomainConfigRequest(request));
    setReply(reply);
}

const DescribeElasticsearchDomainConfigRequest * DescribeElasticsearchDomainConfigResponse::request() const
{
    Q_D(const DescribeElasticsearchDomainConfigResponse);
    return static_cast<const DescribeElasticsearchDomainConfigRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticsearchService DescribeElasticsearchDomainConfig response.
 *
 * @param  response  Response to parse.
 */
void DescribeElasticsearchDomainConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeElasticsearchDomainConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeElasticsearchDomainConfigResponsePrivate
 *
 * @brief  Private implementation for DescribeElasticsearchDomainConfigResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeElasticsearchDomainConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeElasticsearchDomainConfigResponse instance.
 */
DescribeElasticsearchDomainConfigResponsePrivate::DescribeElasticsearchDomainConfigResponsePrivate(
    DescribeElasticsearchDomainConfigResponse * const q) : ElasticsearchServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticsearchService DescribeElasticsearchDomainConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeElasticsearchDomainConfigResponsePrivate::parseDescribeElasticsearchDomainConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeElasticsearchDomainConfigResponse"));
    /// @todo
}

} // namespace ElasticsearchService
} // namespace QtAws
