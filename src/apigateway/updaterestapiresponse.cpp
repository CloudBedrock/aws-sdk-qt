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

#include "updaterestapiresponse.h"
#include "updaterestapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  UpdateRestApiResponse
 *
 * @brief  Handles APIGateway UpdateRestApi responses.
 *
 * @see    APIGatewayClient::updateRestApi
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateRestApiResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new UpdateRestApiResponsePrivate(this), parent)
{
    setRequest(new UpdateRestApiRequest(request));
    setReply(reply);
}

const UpdateRestApiRequest * UpdateRestApiResponse::request() const
{
    Q_D(const UpdateRestApiResponse);
    return static_cast<const UpdateRestApiRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway UpdateRestApi response.
 *
 * @param  response  Response to parse.
 */
void UpdateRestApiResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateRestApiResponsePrivate
 *
 * @brief  Private implementation for UpdateRestApiResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRestApiResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateRestApiResponse instance.
 */
UpdateRestApiResponsePrivate::UpdateRestApiResponsePrivate(
    UpdateRestApiQueueResponse * const q) : UpdateRestApiPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway UpdateRestApiResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateRestApiResponsePrivate::UpdateRestApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRestApiResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
