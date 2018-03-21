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

#include "getassociatedroleresponse.h"
#include "getassociatedroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  GetAssociatedRoleResponse
 *
 * @brief  Handles Greengrass GetAssociatedRole responses.
 *
 * @see    GreengrassClient::getAssociatedRole
 */

/**
 * @brief  Constructs a new GetAssociatedRoleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAssociatedRoleResponse::GetAssociatedRoleResponse(
        const GetAssociatedRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetAssociatedRoleResponsePrivate(this), parent)
{
    setRequest(new GetAssociatedRoleRequest(request));
    setReply(reply);
}

const GetAssociatedRoleRequest * GetAssociatedRoleResponse::request() const
{
    Q_D(const GetAssociatedRoleResponse);
    return static_cast<const GetAssociatedRoleRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass GetAssociatedRole response.
 *
 * @param  response  Response to parse.
 */
void GetAssociatedRoleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetAssociatedRoleResponsePrivate
 *
 * @brief  Private implementation for GetAssociatedRoleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAssociatedRoleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetAssociatedRoleResponse instance.
 */
GetAssociatedRoleResponsePrivate::GetAssociatedRoleResponsePrivate(
    GetAssociatedRoleQueueResponse * const q) : GetAssociatedRolePrivate(q)
{

}

/**
 * @brief  Parse an Greengrass GetAssociatedRoleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetAssociatedRoleResponsePrivate::GetAssociatedRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAssociatedRoleResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace AWS
