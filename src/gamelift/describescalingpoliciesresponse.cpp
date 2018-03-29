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

#include "describescalingpoliciesresponse.h"
#include "describescalingpoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  DescribeScalingPoliciesResponse
 *
 * @brief  Handles GameLift DescribeScalingPolicies responses.
 *
 * @see    GameLiftClient::describeScalingPolicies
 */

/**
 * @brief  Constructs a new DescribeScalingPoliciesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeScalingPoliciesResponse::DescribeScalingPoliciesResponse(
        const DescribeScalingPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new DescribeScalingPoliciesResponsePrivate(this), parent)
{
    setRequest(new DescribeScalingPoliciesRequest(request));
    setReply(reply);
}

const DescribeScalingPoliciesRequest * DescribeScalingPoliciesResponse::request() const
{
    Q_D(const DescribeScalingPoliciesResponse);
    return static_cast<const DescribeScalingPoliciesRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift DescribeScalingPolicies response.
 *
 * @param  response  Response to parse.
 */
void DescribeScalingPoliciesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeScalingPoliciesResponsePrivate
 *
 * @brief  Private implementation for DescribeScalingPoliciesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeScalingPoliciesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeScalingPoliciesResponse instance.
 */
DescribeScalingPoliciesResponsePrivate::DescribeScalingPoliciesResponsePrivate(
    DescribeScalingPoliciesResponse * const q) : GameLiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an GameLift DescribeScalingPoliciesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeScalingPoliciesResponsePrivate::DescribeScalingPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeScalingPoliciesResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws
