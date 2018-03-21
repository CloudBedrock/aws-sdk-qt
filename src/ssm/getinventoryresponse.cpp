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

#include "getinventoryresponse.h"
#include "getinventoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  GetInventoryResponse
 *
 * @brief  Handles SSM GetInventory responses.
 *
 * @see    SSMClient::getInventory
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetInventoryResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new GetInventoryResponsePrivate(this), parent)
{
    setRequest(new GetInventoryRequest(request));
    setReply(reply);
}

const GetInventoryRequest * GetInventoryResponse::request() const
{
    Q_D(const GetInventoryResponse);
    return static_cast<const GetInventoryRequest *>(d->request);
}

/**
 * @brief  Parse a SSM GetInventory response.
 *
 * @param  response  Response to parse.
 */
void GetInventoryResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetInventoryResponsePrivate
 *
 * @brief  Private implementation for GetInventoryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetInventoryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetInventoryResponse instance.
 */
GetInventoryResponsePrivate::GetInventoryResponsePrivate(
    GetInventoryQueueResponse * const q) : GetInventoryPrivate(q)
{

}

/**
 * @brief  Parse an SSM GetInventoryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetInventoryResponsePrivate::GetInventoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInventoryResponse"));
    /// @todo
}
