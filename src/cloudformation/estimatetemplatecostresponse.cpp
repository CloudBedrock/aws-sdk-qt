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

#include "estimatetemplatecostresponse.h"
#include "estimatetemplatecostresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/**
 * @class  EstimateTemplateCostResponse
 *
 * @brief  Handles CloudFormation EstimateTemplateCost responses.
 *
 * @see    CloudFormationClient::estimateTemplateCost
 */

/**
 * @brief  Constructs a new EstimateTemplateCostResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EstimateTemplateCostResponse::EstimateTemplateCostResponse(
        const EstimateTemplateCostRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new EstimateTemplateCostResponsePrivate(this), parent)
{
    setRequest(new EstimateTemplateCostRequest(request));
    setReply(reply);
}

const EstimateTemplateCostRequest * EstimateTemplateCostResponse::request() const
{
    Q_D(const EstimateTemplateCostResponse);
    return static_cast<const EstimateTemplateCostRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation EstimateTemplateCost response.
 *
 * @param  response  Response to parse.
 */
void EstimateTemplateCostResponse::parseSuccess(QIODevice &response)
{
    Q_D(EstimateTemplateCostResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  EstimateTemplateCostResponsePrivate
 *
 * @brief  Private implementation for EstimateTemplateCostResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EstimateTemplateCostResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EstimateTemplateCostResponse instance.
 */
EstimateTemplateCostResponsePrivate::EstimateTemplateCostResponsePrivate(
    EstimateTemplateCostResponse * const q) : CloudFormationResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation EstimateTemplateCostResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void EstimateTemplateCostResponsePrivate::parseEstimateTemplateCostResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EstimateTemplateCostResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace QtAws
