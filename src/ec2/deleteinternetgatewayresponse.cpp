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

#include "deleteinternetgatewayresponse.h"
#include "deleteinternetgatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DeleteInternetGatewayResponse
 *
 * @brief  Handles EC2 DeleteInternetGateway responses.
 *
 * @see    EC2Client::deleteInternetGateway
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteInternetGatewayResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DeleteInternetGatewayResponsePrivate(this), parent)
{
    setRequest(new DeleteInternetGatewayRequest(request));
    setReply(reply);
}

const DeleteInternetGatewayRequest * DeleteInternetGatewayResponse::request() const
{
    Q_D(const DeleteInternetGatewayResponse);
    return static_cast<const DeleteInternetGatewayRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DeleteInternetGateway response.
 *
 * @param  response  Response to parse.
 */
void DeleteInternetGatewayResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteInternetGatewayResponsePrivate
 *
 * @brief  Private implementation for DeleteInternetGatewayResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteInternetGatewayResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteInternetGatewayResponse instance.
 */
DeleteInternetGatewayResponsePrivate::DeleteInternetGatewayResponsePrivate(
    DeleteInternetGatewayQueueResponse * const q) : DeleteInternetGatewayPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DeleteInternetGatewayResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteInternetGatewayResponsePrivate::DeleteInternetGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInternetGatewayResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
