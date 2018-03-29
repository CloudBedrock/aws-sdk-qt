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

#include "describeenvironmentsresponse.h"
#include "describeenvironmentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticBeanstalk {

/**
 * @class  DescribeEnvironmentsResponse
 *
 * @brief  Handles ElasticBeanstalk DescribeEnvironments responses.
 *
 * @see    ElasticBeanstalkClient::describeEnvironments
 */

/**
 * @brief  Constructs a new DescribeEnvironmentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEnvironmentsResponse::DescribeEnvironmentsResponse(
        const DescribeEnvironmentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new DescribeEnvironmentsResponsePrivate(this), parent)
{
    setRequest(new DescribeEnvironmentsRequest(request));
    setReply(reply);
}

const DescribeEnvironmentsRequest * DescribeEnvironmentsResponse::request() const
{
    Q_D(const DescribeEnvironmentsResponse);
    return static_cast<const DescribeEnvironmentsRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk DescribeEnvironments response.
 *
 * @param  response  Response to parse.
 */
void DescribeEnvironmentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeEnvironmentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeEnvironmentsResponsePrivate
 *
 * @brief  Private implementation for DescribeEnvironmentsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEnvironmentsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeEnvironmentsResponse instance.
 */
DescribeEnvironmentsResponsePrivate::DescribeEnvironmentsResponsePrivate(
    DescribeEnvironmentsResponse * const q) : ElasticBeanstalkResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk DescribeEnvironmentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEnvironmentsResponsePrivate::parseDescribeEnvironmentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEnvironmentsResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace QtAws
