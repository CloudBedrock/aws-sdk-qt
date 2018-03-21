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

#include "describelaunchconfigurationsresponse.h"
#include "describelaunchconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AutoScaling {

/**
 * @class  DescribeLaunchConfigurationsResponse
 *
 * @brief  Handles AutoScaling DescribeLaunchConfigurations responses.
 *
 * @see    AutoScalingClient::describeLaunchConfigurations
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeLaunchConfigurationsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeLaunchConfigurationsResponsePrivate(this), parent)
{
    setRequest(new DescribeLaunchConfigurationsRequest(request));
    setReply(reply);
}

const DescribeLaunchConfigurationsRequest * DescribeLaunchConfigurationsResponse::request() const
{
    Q_D(const DescribeLaunchConfigurationsResponse);
    return static_cast<const DescribeLaunchConfigurationsRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling DescribeLaunchConfigurations response.
 *
 * @param  response  Response to parse.
 */
void DescribeLaunchConfigurationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeLaunchConfigurationsResponsePrivate
 *
 * @brief  Private implementation for DescribeLaunchConfigurationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLaunchConfigurationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeLaunchConfigurationsResponse instance.
 */
DescribeLaunchConfigurationsResponsePrivate::DescribeLaunchConfigurationsResponsePrivate(
    DescribeLaunchConfigurationsQueueResponse * const q) : DescribeLaunchConfigurationsPrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling DescribeLaunchConfigurationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeLaunchConfigurationsResponsePrivate::DescribeLaunchConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLaunchConfigurationsResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace AWS
