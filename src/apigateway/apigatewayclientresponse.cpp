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

#include "apigatewayclientresponse.h"
#include "apigatewayclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace  {

/**
 * @class  APIGatewayClientResponse
 *
 * @brief  Handles  APIGatewayClient responses.
 *
 * @see    Client::aPIGatewayClient
 */

/**
 * @brief  Constructs a new APIGatewayClientResponse object.
 *
 * @param  parent   This object's parent.
 */
APIGatewayClientResponse::APIGatewayClientResponse(QObject * const parent)
    : AwsAbstractResponse(new APIGatewayClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  APIGatewayClientResponsePrivate
 *
 * @brief  Private implementation for APIGatewayClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new APIGatewayClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public APIGatewayClientResponse instance.
 */
APIGatewayClientResponsePrivate::APIGatewayClientResponsePrivate(
    APIGatewayClientQueueResponse * const q) : APIGatewayClientPrivate(q)
{

}

} // namespace 
} // namespace AWS
