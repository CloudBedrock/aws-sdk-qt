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

#include "getthirdpartyjobdetailsresponse.h"
#include "getthirdpartyjobdetailsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodePipeline {

/**
 * @class  GetThirdPartyJobDetailsResponse
 *
 * @brief  Handles CodePipeline GetThirdPartyJobDetails responses.
 *
 * @see    CodePipelineClient::getThirdPartyJobDetails
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetThirdPartyJobDetailsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodePipelineResponse(new GetThirdPartyJobDetailsResponsePrivate(this), parent)
{
    setRequest(new GetThirdPartyJobDetailsRequest(request));
    setReply(reply);
}

const GetThirdPartyJobDetailsRequest * GetThirdPartyJobDetailsResponse::request() const
{
    Q_D(const GetThirdPartyJobDetailsResponse);
    return static_cast<const GetThirdPartyJobDetailsRequest *>(d->request);
}

/**
 * @brief  Parse a CodePipeline GetThirdPartyJobDetails response.
 *
 * @param  response  Response to parse.
 */
void GetThirdPartyJobDetailsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetThirdPartyJobDetailsResponsePrivate
 *
 * @brief  Private implementation for GetThirdPartyJobDetailsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetThirdPartyJobDetailsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetThirdPartyJobDetailsResponse instance.
 */
GetThirdPartyJobDetailsResponsePrivate::GetThirdPartyJobDetailsResponsePrivate(
    GetThirdPartyJobDetailsQueueResponse * const q) : GetThirdPartyJobDetailsPrivate(q)
{

}

/**
 * @brief  Parse an CodePipeline GetThirdPartyJobDetailsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetThirdPartyJobDetailsResponsePrivate::GetThirdPartyJobDetailsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetThirdPartyJobDetailsResponse"));
    /// @todo
}

} // namespace CodePipeline
} // namespace AWS
