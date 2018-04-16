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

#include "adminremoveuserfromgroupresponse.h"
#include "adminremoveuserfromgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminRemoveUserFromGroupResponse
 *
 * \brief The AdminRemoveUserFromGroupResponse class encapsulates CognitoIdentityProvider AdminRemoveUserFromGroup responses.
 *
 * \ingroup CognitoIdentityProvider
 *
 *  Using the Amazon Cognito User Pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito User
 * 
 *  Pools>
 * 
 *  For more information, see the Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::adminRemoveUserFromGroup
 */

/*!
 * @brief  Constructs a new AdminRemoveUserFromGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AdminRemoveUserFromGroupResponse::AdminRemoveUserFromGroupResponse(
        const AdminRemoveUserFromGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminRemoveUserFromGroupResponsePrivate(this), parent)
{
    setRequest(new AdminRemoveUserFromGroupRequest(request));
    setReply(reply);
}

const AdminRemoveUserFromGroupRequest * AdminRemoveUserFromGroupResponse::request() const
{
    Q_D(const AdminRemoveUserFromGroupResponse);
    return static_cast<const AdminRemoveUserFromGroupRequest *>(d->request);
}

/*!
 * @brief  Parse a CognitoIdentityProvider AdminRemoveUserFromGroup response.
 *
 * @param  response  Response to parse.
 */
void AdminRemoveUserFromGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(AdminRemoveUserFromGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class AdminRemoveUserFromGroupResponsePrivate
 *
 * \brief Private implementation for AdminRemoveUserFromGroupResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AdminRemoveUserFromGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AdminRemoveUserFromGroupResponse instance.
 */
AdminRemoveUserFromGroupResponsePrivate::AdminRemoveUserFromGroupResponsePrivate(
    AdminRemoveUserFromGroupResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CognitoIdentityProvider AdminRemoveUserFromGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AdminRemoveUserFromGroupResponsePrivate::parseAdminRemoveUserFromGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminRemoveUserFromGroupResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
