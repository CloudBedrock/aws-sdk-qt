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

#include "createstageresponse.h"
#include "createstageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  CreateStageResponse
 *
 * @brief  Handles APIGateway CreateStage responses.
 *
 * @see    APIGatewayClient::createStage
 */

/**
 * @brief  Constructs a new CreateStageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateStageResponse::CreateStageResponse(
        const CreateStageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new CreateStageResponsePrivate(this), parent)
{
    setRequest(new CreateStageRequest(request));
    setReply(reply);
}

const CreateStageRequest * CreateStageResponse::request() const
{
    Q_D(const CreateStageResponse);
    return static_cast<const CreateStageRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway CreateStage response.
 *
 * @param  response  Response to parse.
 */
void CreateStageResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateStageResponsePrivate
 *
 * @brief  Private implementation for CreateStageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateStageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateStageResponse instance.
 */
CreateStageResponsePrivate::CreateStageResponsePrivate(
    CreateStageQueueResponse * const q) : CreateStagePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway CreateStageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateStageResponsePrivate::CreateStageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStageResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
