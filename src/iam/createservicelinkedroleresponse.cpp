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

#include "createservicelinkedroleresponse.h"
#include "createservicelinkedroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  CreateServiceLinkedRoleResponse
 *
 * @brief  Handles IAM CreateServiceLinkedRole responses.
 *
 * @see    IAMClient::createServiceLinkedRole
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateServiceLinkedRoleResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new CreateServiceLinkedRoleResponsePrivate(this), parent)
{
    setRequest(new CreateServiceLinkedRoleRequest(request));
    setReply(reply);
}

const CreateServiceLinkedRoleRequest * CreateServiceLinkedRoleResponse::request() const
{
    Q_D(const CreateServiceLinkedRoleResponse);
    return static_cast<const CreateServiceLinkedRoleRequest *>(d->request);
}

/**
 * @brief  Parse a IAM CreateServiceLinkedRole response.
 *
 * @param  response  Response to parse.
 */
void CreateServiceLinkedRoleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateServiceLinkedRoleResponsePrivate
 *
 * @brief  Private implementation for CreateServiceLinkedRoleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateServiceLinkedRoleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateServiceLinkedRoleResponse instance.
 */
CreateServiceLinkedRoleResponsePrivate::CreateServiceLinkedRoleResponsePrivate(
    CreateServiceLinkedRoleQueueResponse * const q) : CreateServiceLinkedRolePrivate(q)
{

}

/**
 * @brief  Parse an IAM CreateServiceLinkedRoleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateServiceLinkedRoleResponsePrivate::CreateServiceLinkedRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateServiceLinkedRoleResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
