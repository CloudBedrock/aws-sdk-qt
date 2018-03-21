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

#include "describescalingactivitiesresponse.h"
#include "describescalingactivitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AutoScaling {

/**
 * @class  DescribeScalingActivitiesResponse
 *
 * @brief  Handles AutoScaling DescribeScalingActivities responses.
 *
 * @see    AutoScalingClient::describeScalingActivities
 */

/**
 * @brief  Constructs a new DescribeScalingActivitiesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeScalingActivitiesResponse::DescribeScalingActivitiesResponse(
        const DescribeScalingActivitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeScalingActivitiesResponsePrivate(this), parent)
{
    setRequest(new DescribeScalingActivitiesRequest(request));
    setReply(reply);
}

const DescribeScalingActivitiesRequest * DescribeScalingActivitiesResponse::request() const
{
    Q_D(const DescribeScalingActivitiesResponse);
    return static_cast<const DescribeScalingActivitiesRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling DescribeScalingActivities response.
 *
 * @param  response  Response to parse.
 */
void DescribeScalingActivitiesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeScalingActivitiesResponsePrivate
 *
 * @brief  Private implementation for DescribeScalingActivitiesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeScalingActivitiesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeScalingActivitiesResponse instance.
 */
DescribeScalingActivitiesResponsePrivate::DescribeScalingActivitiesResponsePrivate(
    DescribeScalingActivitiesQueueResponse * const q) : DescribeScalingActivitiesPrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling DescribeScalingActivitiesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeScalingActivitiesResponsePrivate::DescribeScalingActivitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeScalingActivitiesResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace AWS
