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

#include "updatemaintenancewindowresponse.h"
#include "updatemaintenancewindowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  UpdateMaintenanceWindowResponse
 *
 * @brief  Handles SSM UpdateMaintenanceWindow responses.
 *
 * @see    SSMClient::updateMaintenanceWindow
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateMaintenanceWindowResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new UpdateMaintenanceWindowResponsePrivate(this), parent)
{
    setRequest(new UpdateMaintenanceWindowRequest(request));
    setReply(reply);
}

const UpdateMaintenanceWindowRequest * UpdateMaintenanceWindowResponse::request() const
{
    Q_D(const UpdateMaintenanceWindowResponse);
    return static_cast<const UpdateMaintenanceWindowRequest *>(d->request);
}

/**
 * @brief  Parse a SSM UpdateMaintenanceWindow response.
 *
 * @param  response  Response to parse.
 */
void UpdateMaintenanceWindowResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateMaintenanceWindowResponsePrivate
 *
 * @brief  Private implementation for UpdateMaintenanceWindowResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateMaintenanceWindowResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateMaintenanceWindowResponse instance.
 */
UpdateMaintenanceWindowResponsePrivate::UpdateMaintenanceWindowResponsePrivate(
    UpdateMaintenanceWindowQueueResponse * const q) : UpdateMaintenanceWindowPrivate(q)
{

}

/**
 * @brief  Parse an SSM UpdateMaintenanceWindowResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateMaintenanceWindowResponsePrivate::UpdateMaintenanceWindowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMaintenanceWindowResponse"));
    /// @todo
}
