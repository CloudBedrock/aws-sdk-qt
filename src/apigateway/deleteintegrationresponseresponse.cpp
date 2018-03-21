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

#include "deleteintegrationresponseresponse.h"
#include "deleteintegrationresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  DeleteIntegrationResponseResponse
 *
 * @brief  Handles APIGateway DeleteIntegrationResponse responses.
 *
 * @see    APIGatewayClient::deleteIntegrationResponse
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteIntegrationResponseResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new DeleteIntegrationResponseResponsePrivate(this), parent)
{
    setRequest(new DeleteIntegrationResponseRequest(request));
    setReply(reply);
}

const DeleteIntegrationResponseRequest * DeleteIntegrationResponseResponse::request() const
{
    Q_D(const DeleteIntegrationResponseResponse);
    return static_cast<const DeleteIntegrationResponseRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway DeleteIntegrationResponse response.
 *
 * @param  response  Response to parse.
 */
void DeleteIntegrationResponseResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteIntegrationResponseResponsePrivate
 *
 * @brief  Private implementation for DeleteIntegrationResponseResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteIntegrationResponseResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteIntegrationResponseResponse instance.
 */
DeleteIntegrationResponseResponsePrivate::DeleteIntegrationResponseResponsePrivate(
    DeleteIntegrationResponseQueueResponse * const q) : DeleteIntegrationResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway DeleteIntegrationResponseResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteIntegrationResponseResponsePrivate::DeleteIntegrationResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIntegrationResponseResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
