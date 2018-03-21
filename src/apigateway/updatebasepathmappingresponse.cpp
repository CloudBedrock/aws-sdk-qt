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

#include "updatebasepathmappingresponse.h"
#include "updatebasepathmappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  UpdateBasePathMappingResponse
 *
 * @brief  Handles APIGateway UpdateBasePathMapping responses.
 *
 * @see    APIGatewayClient::updateBasePathMapping
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateBasePathMappingResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new UpdateBasePathMappingResponsePrivate(this), parent)
{
    setRequest(new UpdateBasePathMappingRequest(request));
    setReply(reply);
}

const UpdateBasePathMappingRequest * UpdateBasePathMappingResponse::request() const
{
    Q_D(const UpdateBasePathMappingResponse);
    return static_cast<const UpdateBasePathMappingRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway UpdateBasePathMapping response.
 *
 * @param  response  Response to parse.
 */
void UpdateBasePathMappingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateBasePathMappingResponsePrivate
 *
 * @brief  Private implementation for UpdateBasePathMappingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateBasePathMappingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateBasePathMappingResponse instance.
 */
UpdateBasePathMappingResponsePrivate::UpdateBasePathMappingResponsePrivate(
    UpdateBasePathMappingQueueResponse * const q) : UpdateBasePathMappingPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway UpdateBasePathMappingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateBasePathMappingResponsePrivate::UpdateBasePathMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBasePathMappingResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
