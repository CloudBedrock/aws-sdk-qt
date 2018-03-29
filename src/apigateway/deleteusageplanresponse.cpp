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

#include "deleteusageplanresponse.h"
#include "deleteusageplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  DeleteUsagePlanResponse
 *
 * @brief  Handles APIGateway DeleteUsagePlan responses.
 *
 * @see    APIGatewayClient::deleteUsagePlan
 */

/**
 * @brief  Constructs a new DeleteUsagePlanResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteUsagePlanResponse::DeleteUsagePlanResponse(
        const DeleteUsagePlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new DeleteUsagePlanResponsePrivate(this), parent)
{
    setRequest(new DeleteUsagePlanRequest(request));
    setReply(reply);
}

const DeleteUsagePlanRequest * DeleteUsagePlanResponse::request() const
{
    Q_D(const DeleteUsagePlanResponse);
    return static_cast<const DeleteUsagePlanRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway DeleteUsagePlan response.
 *
 * @param  response  Response to parse.
 */
void DeleteUsagePlanResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteUsagePlanResponsePrivate
 *
 * @brief  Private implementation for DeleteUsagePlanResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUsagePlanResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteUsagePlanResponse instance.
 */
DeleteUsagePlanResponsePrivate::DeleteUsagePlanResponsePrivate(
    DeleteUsagePlanQueueResponse * const q) : DeleteUsagePlanPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway DeleteUsagePlanResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteUsagePlanResponsePrivate::DeleteUsagePlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUsagePlanResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
