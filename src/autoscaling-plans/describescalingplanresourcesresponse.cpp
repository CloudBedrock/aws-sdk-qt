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

#include "describescalingplanresourcesresponse.h"
#include "describescalingplanresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScalingPlans {

/**
 * @class  DescribeScalingPlanResourcesResponse
 *
 * @brief  Handles AutoScalingPlans DescribeScalingPlanResources responses.
 *
 * @see    AutoScalingPlansClient::describeScalingPlanResources
 */

/**
 * @brief  Constructs a new DescribeScalingPlanResourcesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeScalingPlanResourcesResponse::DescribeScalingPlanResourcesResponse(
        const DescribeScalingPlanResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeScalingPlanResourcesResponse(new DescribeScalingPlanResourcesResponsePrivate(this), parent)
{
    setRequest(new DescribeScalingPlanResourcesRequest(request));
    setReply(reply);
}

const DescribeScalingPlanResourcesRequest * DescribeScalingPlanResourcesResponse::request() const
{
    Q_D(const DescribeScalingPlanResourcesResponse);
    return static_cast<const DescribeScalingPlanResourcesRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScalingPlans DescribeScalingPlanResources response.
 *
 * @param  response  Response to parse.
 */
void DescribeScalingPlanResourcesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeScalingPlanResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeScalingPlanResourcesResponsePrivate
 *
 * @brief  Private implementation for DescribeScalingPlanResourcesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeScalingPlanResourcesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeScalingPlanResourcesResponse instance.
 */
DescribeScalingPlanResourcesResponsePrivate::DescribeScalingPlanResourcesResponsePrivate(
    DescribeScalingPlanResourcesResponse * const q) : AutoScalingPlansResponsePrivate(q)
{

}

/**
 * @brief  Parse an AutoScalingPlans DescribeScalingPlanResourcesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeScalingPlanResourcesResponsePrivate::parseDescribeScalingPlanResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeScalingPlanResourcesResponse"));
    /// @todo
}

} // namespace AutoScalingPlans
} // namespace QtAws
