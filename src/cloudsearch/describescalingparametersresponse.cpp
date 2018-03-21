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

#include "describescalingparametersresponse.h"
#include "describescalingparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudSearch {

/**
 * @class  DescribeScalingParametersResponse
 *
 * @brief  Handles CloudSearch DescribeScalingParameters responses.
 *
 * @see    CloudSearchClient::describeScalingParameters
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeScalingParametersResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DescribeScalingParametersResponsePrivate(this), parent)
{
    setRequest(new DescribeScalingParametersRequest(request));
    setReply(reply);
}

const DescribeScalingParametersRequest * DescribeScalingParametersResponse::request() const
{
    Q_D(const DescribeScalingParametersResponse);
    return static_cast<const DescribeScalingParametersRequest *>(d->request);
}

/**
 * @brief  Parse a CloudSearch DescribeScalingParameters response.
 *
 * @param  response  Response to parse.
 */
void DescribeScalingParametersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeScalingParametersResponsePrivate
 *
 * @brief  Private implementation for DescribeScalingParametersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeScalingParametersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeScalingParametersResponse instance.
 */
DescribeScalingParametersResponsePrivate::DescribeScalingParametersResponsePrivate(
    DescribeScalingParametersQueueResponse * const q) : DescribeScalingParametersPrivate(q)
{

}

/**
 * @brief  Parse an CloudSearch DescribeScalingParametersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeScalingParametersResponsePrivate::DescribeScalingParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeScalingParametersResponse"));
    /// @todo
}

} // namespace CloudSearch
} // namespace AWS
