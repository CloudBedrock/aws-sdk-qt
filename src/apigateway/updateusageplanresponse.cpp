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

#include "updateusageplanresponse.h"
#include "updateusageplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  UpdateUsagePlanResponse
 *
 * @brief  Handles APIGateway UpdateUsagePlan responses.
 *
 * @see    APIGatewayClient::updateUsagePlan
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateUsagePlanResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new UpdateUsagePlanResponsePrivate(this), parent)
{
    setRequest(new UpdateUsagePlanRequest(request));
    setReply(reply);
}

const UpdateUsagePlanRequest * UpdateUsagePlanResponse::request() const
{
    Q_D(const UpdateUsagePlanResponse);
    return static_cast<const UpdateUsagePlanRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway UpdateUsagePlan response.
 *
 * @param  response  Response to parse.
 */
void UpdateUsagePlanResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateUsagePlanResponsePrivate
 *
 * @brief  Private implementation for UpdateUsagePlanResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateUsagePlanResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateUsagePlanResponse instance.
 */
UpdateUsagePlanResponsePrivate::UpdateUsagePlanResponsePrivate(
    UpdateUsagePlanQueueResponse * const q) : UpdateUsagePlanPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway UpdateUsagePlanResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateUsagePlanResponsePrivate::UpdateUsagePlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateUsagePlanResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
