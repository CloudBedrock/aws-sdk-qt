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

#include "startgatewayresponse.h"
#include "startgatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace StorageGateway {

/**
 * @class  StartGatewayResponse
 *
 * @brief  Handles StorageGateway StartGateway responses.
 *
 * @see    StorageGatewayClient::startGateway
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartGatewayResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new StartGatewayResponsePrivate(this), parent)
{
    setRequest(new StartGatewayRequest(request));
    setReply(reply);
}

const StartGatewayRequest * StartGatewayResponse::request() const
{
    Q_D(const StartGatewayResponse);
    return static_cast<const StartGatewayRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway StartGateway response.
 *
 * @param  response  Response to parse.
 */
void StartGatewayResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartGatewayResponsePrivate
 *
 * @brief  Private implementation for StartGatewayResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartGatewayResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartGatewayResponse instance.
 */
StartGatewayResponsePrivate::StartGatewayResponsePrivate(
    StartGatewayQueueResponse * const q) : StartGatewayPrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway StartGatewayResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartGatewayResponsePrivate::StartGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartGatewayResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace AWS
