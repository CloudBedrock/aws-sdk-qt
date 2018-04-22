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

#include "adminupdateuserattributesresponse.h"
#include "adminupdateuserattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminUpdateUserAttributesResponse
 * \brief The AdminUpdateUserAttributesResponse class provides an interace for CognitoIdentityProvider AdminUpdateUserAttributes responses.
 *
 * \inmodule QtAwsCognitoIdentityProvider
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
 * \sa CognitoIdentityProviderClient::adminUpdateUserAttributes
 */

/*!
 * Constructs a AdminUpdateUserAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
AdminUpdateUserAttributesResponse::AdminUpdateUserAttributesResponse(
        const AdminUpdateUserAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminUpdateUserAttributesResponsePrivate(this), parent)
{
    setRequest(new AdminUpdateUserAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminUpdateUserAttributesRequest * AdminUpdateUserAttributesResponse::request() const
{
    Q_D(const AdminUpdateUserAttributesResponse);
    return static_cast<const AdminUpdateUserAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminUpdateUserAttributes \a response.
 */
void AdminUpdateUserAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(AdminUpdateUserAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminUpdateUserAttributesResponsePrivate
 * \brief The AdminUpdateUserAttributesResponsePrivate class provides private implementation for AdminUpdateUserAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminUpdateUserAttributesResponsePrivate object with public implementation \a q.
 */
AdminUpdateUserAttributesResponsePrivate::AdminUpdateUserAttributesResponsePrivate(
    AdminUpdateUserAttributesResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminUpdateUserAttributes response element from \a xml.
 */
void AdminUpdateUserAttributesResponsePrivate::parseAdminUpdateUserAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminUpdateUserAttributesResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws