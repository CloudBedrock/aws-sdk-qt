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

#include "updateconnectivityinforesponse.h"
#include "updateconnectivityinforesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  UpdateConnectivityInfoResponse
 *
 * @brief  Handles Greengrass UpdateConnectivityInfo responses.
 *
 * @see    GreengrassClient::updateConnectivityInfo
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateConnectivityInfoResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new UpdateConnectivityInfoResponsePrivate(this), parent)
{
    setRequest(new UpdateConnectivityInfoRequest(request));
    setReply(reply);
}

const UpdateConnectivityInfoRequest * UpdateConnectivityInfoResponse::request() const
{
    Q_D(const UpdateConnectivityInfoResponse);
    return static_cast<const UpdateConnectivityInfoRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass UpdateConnectivityInfo response.
 *
 * @param  response  Response to parse.
 */
void UpdateConnectivityInfoResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateConnectivityInfoResponsePrivate
 *
 * @brief  Private implementation for UpdateConnectivityInfoResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateConnectivityInfoResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateConnectivityInfoResponse instance.
 */
UpdateConnectivityInfoResponsePrivate::UpdateConnectivityInfoResponsePrivate(
    UpdateConnectivityInfoQueueResponse * const q) : UpdateConnectivityInfoPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass UpdateConnectivityInfoResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateConnectivityInfoResponsePrivate::UpdateConnectivityInfoResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConnectivityInfoResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace AWS
