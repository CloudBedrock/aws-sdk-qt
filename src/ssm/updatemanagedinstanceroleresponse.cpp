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

#include "updatemanagedinstanceroleresponse.h"
#include "updatemanagedinstanceroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  UpdateManagedInstanceRoleResponse
 *
 * @brief  Handles SSM UpdateManagedInstanceRole responses.
 *
 * @see    SSMClient::updateManagedInstanceRole
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateManagedInstanceRoleResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new UpdateManagedInstanceRoleResponsePrivate(this), parent)
{
    setRequest(new UpdateManagedInstanceRoleRequest(request));
    setReply(reply);
}

const UpdateManagedInstanceRoleRequest * UpdateManagedInstanceRoleResponse::request() const
{
    Q_D(const UpdateManagedInstanceRoleResponse);
    return static_cast<const UpdateManagedInstanceRoleRequest *>(d->request);
}

/**
 * @brief  Parse a SSM UpdateManagedInstanceRole response.
 *
 * @param  response  Response to parse.
 */
void UpdateManagedInstanceRoleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateManagedInstanceRoleResponsePrivate
 *
 * @brief  Private implementation for UpdateManagedInstanceRoleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateManagedInstanceRoleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateManagedInstanceRoleResponse instance.
 */
UpdateManagedInstanceRoleResponsePrivate::UpdateManagedInstanceRoleResponsePrivate(
    UpdateManagedInstanceRoleQueueResponse * const q) : UpdateManagedInstanceRolePrivate(q)
{

}

/**
 * @brief  Parse an SSM UpdateManagedInstanceRoleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateManagedInstanceRoleResponsePrivate::UpdateManagedInstanceRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateManagedInstanceRoleResponse"));
    /// @todo
}
