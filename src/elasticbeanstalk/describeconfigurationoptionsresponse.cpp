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

#include "describeconfigurationoptionsresponse.h"
#include "describeconfigurationoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticBeanstalk {

/**
 * @class  DescribeConfigurationOptionsResponse
 *
 * @brief  Handles ElasticBeanstalk DescribeConfigurationOptions responses.
 *
 * @see    ElasticBeanstalkClient::describeConfigurationOptions
 */

/**
 * @brief  Constructs a new DescribeConfigurationOptionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeConfigurationOptionsResponse::DescribeConfigurationOptionsResponse(
        const DescribeConfigurationOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeConfigurationOptionsResponse(new DescribeConfigurationOptionsResponsePrivate(this), parent)
{
    setRequest(new DescribeConfigurationOptionsRequest(request));
    setReply(reply);
}

const DescribeConfigurationOptionsRequest * DescribeConfigurationOptionsResponse::request() const
{
    Q_D(const DescribeConfigurationOptionsResponse);
    return static_cast<const DescribeConfigurationOptionsRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk DescribeConfigurationOptions response.
 *
 * @param  response  Response to parse.
 */
void DescribeConfigurationOptionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeConfigurationOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeConfigurationOptionsResponsePrivate
 *
 * @brief  Private implementation for DescribeConfigurationOptionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigurationOptionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeConfigurationOptionsResponse instance.
 */
DescribeConfigurationOptionsResponsePrivate::DescribeConfigurationOptionsResponsePrivate(
    DescribeConfigurationOptionsResponse * const q) : ElasticBeanstalkResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk DescribeConfigurationOptionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeConfigurationOptionsResponsePrivate::parseDescribeConfigurationOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConfigurationOptionsResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace QtAws
