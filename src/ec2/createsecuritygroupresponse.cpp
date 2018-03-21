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

#include "createsecuritygroupresponse.h"
#include "createsecuritygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  CreateSecurityGroupResponse
 *
 * @brief  Handles EC2 CreateSecurityGroup responses.
 *
 * @see    EC2Client::createSecurityGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSecurityGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateSecurityGroupResponsePrivate(this), parent)
{
    setRequest(new CreateSecurityGroupRequest(request));
    setReply(reply);
}

const CreateSecurityGroupRequest * CreateSecurityGroupResponse::request() const
{
    Q_D(const CreateSecurityGroupResponse);
    return static_cast<const CreateSecurityGroupRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateSecurityGroup response.
 *
 * @param  response  Response to parse.
 */
void CreateSecurityGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateSecurityGroupResponsePrivate
 *
 * @brief  Private implementation for CreateSecurityGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSecurityGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateSecurityGroupResponse instance.
 */
CreateSecurityGroupResponsePrivate::CreateSecurityGroupResponsePrivate(
    CreateSecurityGroupQueueResponse * const q) : CreateSecurityGroupPrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateSecurityGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateSecurityGroupResponsePrivate::CreateSecurityGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSecurityGroupResponse"));
    /// @todo
}
