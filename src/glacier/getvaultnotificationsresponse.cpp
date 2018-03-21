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

#include "getvaultnotificationsresponse.h"
#include "getvaultnotificationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glacier {

/**
 * @class  GetVaultNotificationsResponse
 *
 * @brief  Handles Glacier GetVaultNotifications responses.
 *
 * @see    GlacierClient::getVaultNotifications
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetVaultNotificationsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new GetVaultNotificationsResponsePrivate(this), parent)
{
    setRequest(new GetVaultNotificationsRequest(request));
    setReply(reply);
}

const GetVaultNotificationsRequest * GetVaultNotificationsResponse::request() const
{
    Q_D(const GetVaultNotificationsResponse);
    return static_cast<const GetVaultNotificationsRequest *>(d->request);
}

/**
 * @brief  Parse a Glacier GetVaultNotifications response.
 *
 * @param  response  Response to parse.
 */
void GetVaultNotificationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetVaultNotificationsResponsePrivate
 *
 * @brief  Private implementation for GetVaultNotificationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetVaultNotificationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetVaultNotificationsResponse instance.
 */
GetVaultNotificationsResponsePrivate::GetVaultNotificationsResponsePrivate(
    GetVaultNotificationsQueueResponse * const q) : GetVaultNotificationsPrivate(q)
{

}

/**
 * @brief  Parse an Glacier GetVaultNotificationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetVaultNotificationsResponsePrivate::GetVaultNotificationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetVaultNotificationsResponse"));
    /// @todo
}
