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

#include "createcustomergatewayresponse.h"
#include "createcustomergatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  CreateCustomerGatewayResponse
 *
 * @brief  Handles EC2 CreateCustomerGateway responses.
 *
 * @see    EC2Client::createCustomerGateway
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCustomerGatewayResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateCustomerGatewayResponsePrivate(this), parent)
{
    setRequest(new CreateCustomerGatewayRequest(request));
    setReply(reply);
}

const CreateCustomerGatewayRequest * CreateCustomerGatewayResponse::request() const
{
    Q_D(const CreateCustomerGatewayResponse);
    return static_cast<const CreateCustomerGatewayRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateCustomerGateway response.
 *
 * @param  response  Response to parse.
 */
void CreateCustomerGatewayResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateCustomerGatewayResponsePrivate
 *
 * @brief  Private implementation for CreateCustomerGatewayResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCustomerGatewayResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateCustomerGatewayResponse instance.
 */
CreateCustomerGatewayResponsePrivate::CreateCustomerGatewayResponsePrivate(
    CreateCustomerGatewayQueueResponse * const q) : CreateCustomerGatewayPrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateCustomerGatewayResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateCustomerGatewayResponsePrivate::CreateCustomerGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCustomerGatewayResponse"));
    /// @todo
}
