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

#include "disassociateconnectorresponse.h"
#include "disassociateconnectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SMS {

/**
 * @class  DisassociateConnectorResponse
 *
 * @brief  Handles SMS DisassociateConnector responses.
 *
 * @see    SMSClient::disassociateConnector
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateConnectorResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SMSResponse(new DisassociateConnectorResponsePrivate(this), parent)
{
    setRequest(new DisassociateConnectorRequest(request));
    setReply(reply);
}

const DisassociateConnectorRequest * DisassociateConnectorResponse::request() const
{
    Q_D(const DisassociateConnectorResponse);
    return static_cast<const DisassociateConnectorRequest *>(d->request);
}

/**
 * @brief  Parse a SMS DisassociateConnector response.
 *
 * @param  response  Response to parse.
 */
void DisassociateConnectorResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisassociateConnectorResponsePrivate
 *
 * @brief  Private implementation for DisassociateConnectorResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateConnectorResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisassociateConnectorResponse instance.
 */
DisassociateConnectorResponsePrivate::DisassociateConnectorResponsePrivate(
    DisassociateConnectorQueueResponse * const q) : DisassociateConnectorPrivate(q)
{

}

/**
 * @brief  Parse an SMS DisassociateConnectorResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisassociateConnectorResponsePrivate::DisassociateConnectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateConnectorResponse"));
    /// @todo
}
