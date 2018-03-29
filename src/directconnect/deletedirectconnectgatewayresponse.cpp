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

#include "deletedirectconnectgatewayresponse.h"
#include "deletedirectconnectgatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/**
 * @class  DeleteDirectConnectGatewayResponse
 *
 * @brief  Handles DirectConnect DeleteDirectConnectGateway responses.
 *
 * @see    DirectConnectClient::deleteDirectConnectGateway
 */

/**
 * @brief  Constructs a new DeleteDirectConnectGatewayResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDirectConnectGatewayResponse::DeleteDirectConnectGatewayResponse(
        const DeleteDirectConnectGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DeleteDirectConnectGatewayResponsePrivate(this), parent)
{
    setRequest(new DeleteDirectConnectGatewayRequest(request));
    setReply(reply);
}

const DeleteDirectConnectGatewayRequest * DeleteDirectConnectGatewayResponse::request() const
{
    Q_D(const DeleteDirectConnectGatewayResponse);
    return static_cast<const DeleteDirectConnectGatewayRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect DeleteDirectConnectGateway response.
 *
 * @param  response  Response to parse.
 */
void DeleteDirectConnectGatewayResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDirectConnectGatewayResponsePrivate
 *
 * @brief  Private implementation for DeleteDirectConnectGatewayResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDirectConnectGatewayResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDirectConnectGatewayResponse instance.
 */
DeleteDirectConnectGatewayResponsePrivate::DeleteDirectConnectGatewayResponsePrivate(
    DeleteDirectConnectGatewayResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect DeleteDirectConnectGatewayResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDirectConnectGatewayResponsePrivate::DeleteDirectConnectGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDirectConnectGatewayResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace QtAws
