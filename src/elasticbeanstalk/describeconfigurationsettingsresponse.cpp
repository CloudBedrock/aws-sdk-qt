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

#include "describeconfigurationsettingsresponse.h"
#include "describeconfigurationsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  DescribeConfigurationSettingsResponse
 *
 * @brief  Handles ElasticBeanstalk DescribeConfigurationSettings responses.
 *
 * @see    ElasticBeanstalkClient::describeConfigurationSettings
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeConfigurationSettingsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new DescribeConfigurationSettingsResponsePrivate(this), parent)
{
    setRequest(new DescribeConfigurationSettingsRequest(request));
    setReply(reply);
}

const DescribeConfigurationSettingsRequest * DescribeConfigurationSettingsResponse::request() const
{
    Q_D(const DescribeConfigurationSettingsResponse);
    return static_cast<const DescribeConfigurationSettingsRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk DescribeConfigurationSettings response.
 *
 * @param  response  Response to parse.
 */
void DescribeConfigurationSettingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeConfigurationSettingsResponsePrivate
 *
 * @brief  Private implementation for DescribeConfigurationSettingsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigurationSettingsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeConfigurationSettingsResponse instance.
 */
DescribeConfigurationSettingsResponsePrivate::DescribeConfigurationSettingsResponsePrivate(
    DescribeConfigurationSettingsQueueResponse * const q) : DescribeConfigurationSettingsPrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk DescribeConfigurationSettingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeConfigurationSettingsResponsePrivate::DescribeConfigurationSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConfigurationSettingsResponse"));
    /// @todo
}
