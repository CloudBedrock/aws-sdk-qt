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

#include "putintegrationresponse.h"
#include "putintegrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  PutIntegrationResponse
 *
 * @brief  Handles APIGateway PutIntegration responses.
 *
 * @see    APIGatewayClient::putIntegration
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutIntegrationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new PutIntegrationResponsePrivate(this), parent)
{
    setRequest(new PutIntegrationRequest(request));
    setReply(reply);
}

const PutIntegrationRequest * PutIntegrationResponse::request() const
{
    Q_D(const PutIntegrationResponse);
    return static_cast<const PutIntegrationRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway PutIntegration response.
 *
 * @param  response  Response to parse.
 */
void PutIntegrationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutIntegrationResponsePrivate
 *
 * @brief  Private implementation for PutIntegrationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutIntegrationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutIntegrationResponse instance.
 */
PutIntegrationResponsePrivate::PutIntegrationResponsePrivate(
    PutIntegrationQueueResponse * const q) : PutIntegrationPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway PutIntegrationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutIntegrationResponsePrivate::PutIntegrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutIntegrationResponse"));
    /// @todo
}
