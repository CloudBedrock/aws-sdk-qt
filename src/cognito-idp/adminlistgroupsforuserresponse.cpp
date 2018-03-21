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

#include "adminlistgroupsforuserresponse.h"
#include "adminlistgroupsforuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  AdminListGroupsForUserResponse
 *
 * @brief  Handles CognitoIdentityProvider AdminListGroupsForUser responses.
 *
 * @see    CognitoIdentityProviderClient::adminListGroupsForUser
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AdminListGroupsForUserResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminListGroupsForUserResponsePrivate(this), parent)
{
    setRequest(new AdminListGroupsForUserRequest(request));
    setReply(reply);
}

const AdminListGroupsForUserRequest * AdminListGroupsForUserResponse::request() const
{
    Q_D(const AdminListGroupsForUserResponse);
    return static_cast<const AdminListGroupsForUserRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider AdminListGroupsForUser response.
 *
 * @param  response  Response to parse.
 */
void AdminListGroupsForUserResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AdminListGroupsForUserResponsePrivate
 *
 * @brief  Private implementation for AdminListGroupsForUserResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminListGroupsForUserResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AdminListGroupsForUserResponse instance.
 */
AdminListGroupsForUserResponsePrivate::AdminListGroupsForUserResponsePrivate(
    AdminListGroupsForUserQueueResponse * const q) : AdminListGroupsForUserPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider AdminListGroupsForUserResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AdminListGroupsForUserResponsePrivate::AdminListGroupsForUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminListGroupsForUserResponse"));
    /// @todo
}
