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

#include "createdbsecuritygroupresponse.h"
#include "createdbsecuritygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  CreateDBSecurityGroupResponse
 *
 * @brief  Handles RDS CreateDBSecurityGroup responses.
 *
 * @see    RDSClient::createDBSecurityGroup
 */

/**
 * @brief  Constructs a new CreateDBSecurityGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDBSecurityGroupResponse::CreateDBSecurityGroupResponse(
        const CreateDBSecurityGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateDBSecurityGroupResponse(new CreateDBSecurityGroupResponsePrivate(this), parent)
{
    setRequest(new CreateDBSecurityGroupRequest(request));
    setReply(reply);
}

const CreateDBSecurityGroupRequest * CreateDBSecurityGroupResponse::request() const
{
    Q_D(const CreateDBSecurityGroupResponse);
    return static_cast<const CreateDBSecurityGroupRequest *>(d->request);
}

/**
 * @brief  Parse a RDS CreateDBSecurityGroup response.
 *
 * @param  response  Response to parse.
 */
void CreateDBSecurityGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateDBSecurityGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDBSecurityGroupResponsePrivate
 *
 * @brief  Private implementation for CreateDBSecurityGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDBSecurityGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDBSecurityGroupResponse instance.
 */
CreateDBSecurityGroupResponsePrivate::CreateDBSecurityGroupResponsePrivate(
    CreateDBSecurityGroupResponse * const q) : RDSResponsePrivate(q)
{

}

/**
 * @brief  Parse an RDS CreateDBSecurityGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDBSecurityGroupResponsePrivate::parseCreateDBSecurityGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDBSecurityGroupResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
