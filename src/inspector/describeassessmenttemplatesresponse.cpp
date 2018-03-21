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

#include "describeassessmenttemplatesresponse.h"
#include "describeassessmenttemplatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Inspector {

/**
 * @class  DescribeAssessmentTemplatesResponse
 *
 * @brief  Handles Inspector DescribeAssessmentTemplates responses.
 *
 * @see    InspectorClient::describeAssessmentTemplates
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAssessmentTemplatesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new DescribeAssessmentTemplatesResponsePrivate(this), parent)
{
    setRequest(new DescribeAssessmentTemplatesRequest(request));
    setReply(reply);
}

const DescribeAssessmentTemplatesRequest * DescribeAssessmentTemplatesResponse::request() const
{
    Q_D(const DescribeAssessmentTemplatesResponse);
    return static_cast<const DescribeAssessmentTemplatesRequest *>(d->request);
}

/**
 * @brief  Parse a Inspector DescribeAssessmentTemplates response.
 *
 * @param  response  Response to parse.
 */
void DescribeAssessmentTemplatesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAssessmentTemplatesResponsePrivate
 *
 * @brief  Private implementation for DescribeAssessmentTemplatesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAssessmentTemplatesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAssessmentTemplatesResponse instance.
 */
DescribeAssessmentTemplatesResponsePrivate::DescribeAssessmentTemplatesResponsePrivate(
    DescribeAssessmentTemplatesQueueResponse * const q) : DescribeAssessmentTemplatesPrivate(q)
{

}

/**
 * @brief  Parse an Inspector DescribeAssessmentTemplatesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAssessmentTemplatesResponsePrivate::DescribeAssessmentTemplatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAssessmentTemplatesResponse"));
    /// @todo
}
