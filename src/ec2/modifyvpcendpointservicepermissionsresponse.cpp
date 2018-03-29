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

#include "modifyvpcendpointservicepermissionsresponse.h"
#include "modifyvpcendpointservicepermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  ModifyVpcEndpointServicePermissionsResponse
 *
 * @brief  Handles EC2 ModifyVpcEndpointServicePermissions responses.
 *
 * @see    EC2Client::modifyVpcEndpointServicePermissions
 */

/**
 * @brief  Constructs a new ModifyVpcEndpointServicePermissionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyVpcEndpointServicePermissionsResponse::ModifyVpcEndpointServicePermissionsResponse(
        const ModifyVpcEndpointServicePermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ModifyVpcEndpointServicePermissionsResponsePrivate(this), parent)
{
    setRequest(new ModifyVpcEndpointServicePermissionsRequest(request));
    setReply(reply);
}

const ModifyVpcEndpointServicePermissionsRequest * ModifyVpcEndpointServicePermissionsResponse::request() const
{
    Q_D(const ModifyVpcEndpointServicePermissionsResponse);
    return static_cast<const ModifyVpcEndpointServicePermissionsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ModifyVpcEndpointServicePermissions response.
 *
 * @param  response  Response to parse.
 */
void ModifyVpcEndpointServicePermissionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyVpcEndpointServicePermissionsResponsePrivate
 *
 * @brief  Private implementation for ModifyVpcEndpointServicePermissionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyVpcEndpointServicePermissionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyVpcEndpointServicePermissionsResponse instance.
 */
ModifyVpcEndpointServicePermissionsResponsePrivate::ModifyVpcEndpointServicePermissionsResponsePrivate(
    ModifyVpcEndpointServicePermissionsQueueResponse * const q) : ModifyVpcEndpointServicePermissionsPrivate(q)
{

}

/**
 * @brief  Parse an EC2 ModifyVpcEndpointServicePermissionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyVpcEndpointServicePermissionsResponsePrivate::ModifyVpcEndpointServicePermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyVpcEndpointServicePermissionsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
