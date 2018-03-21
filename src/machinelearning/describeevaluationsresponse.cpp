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

#include "describeevaluationsresponse.h"
#include "describeevaluationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MachineLearning {

/**
 * @class  DescribeEvaluationsResponse
 *
 * @brief  Handles MachineLearning DescribeEvaluations responses.
 *
 * @see    MachineLearningClient::describeEvaluations
 */

/**
 * @brief  Constructs a new DescribeEvaluationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEvaluationsResponse::DescribeEvaluationsResponse(
        const DescribeEvaluationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new DescribeEvaluationsResponsePrivate(this), parent)
{
    setRequest(new DescribeEvaluationsRequest(request));
    setReply(reply);
}

const DescribeEvaluationsRequest * DescribeEvaluationsResponse::request() const
{
    Q_D(const DescribeEvaluationsResponse);
    return static_cast<const DescribeEvaluationsRequest *>(d->request);
}

/**
 * @brief  Parse a MachineLearning DescribeEvaluations response.
 *
 * @param  response  Response to parse.
 */
void DescribeEvaluationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeEvaluationsResponsePrivate
 *
 * @brief  Private implementation for DescribeEvaluationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEvaluationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeEvaluationsResponse instance.
 */
DescribeEvaluationsResponsePrivate::DescribeEvaluationsResponsePrivate(
    DescribeEvaluationsQueueResponse * const q) : DescribeEvaluationsPrivate(q)
{

}

/**
 * @brief  Parse an MachineLearning DescribeEvaluationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEvaluationsResponsePrivate::DescribeEvaluationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEvaluationsResponse"));
    /// @todo
}

} // namespace MachineLearning
} // namespace AWS
