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

#include "createuserpooldomainresponse.h"
#include "createuserpooldomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::CreateUserPoolDomainResponse
 *
 * \brief The CreateUserPoolDomainResponse class encapsulates CognitoIdentityProvider CreateUserPoolDomain responses.
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
 * \sa CognitoIdentityProviderClient::createUserPoolDomain
 */

/*!
 * @brief  Constructs a new CreateUserPoolDomainResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateUserPoolDomainResponse::CreateUserPoolDomainResponse(
        const CreateUserPoolDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new CreateUserPoolDomainResponsePrivate(this), parent)
{
    setRequest(new CreateUserPoolDomainRequest(request));
    setReply(reply);
}

const CreateUserPoolDomainRequest * CreateUserPoolDomainResponse::request() const
{
    Q_D(const CreateUserPoolDomainResponse);
    return static_cast<const CreateUserPoolDomainRequest *>(d->request);
}

/*!
 * @brief  Parse a CognitoIdentityProvider CreateUserPoolDomain response.
 *
 * @param  response  Response to parse.
 */
void CreateUserPoolDomainResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateUserPoolDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateUserPoolDomainResponsePrivate
 *
 * \brief Private implementation for CreateUserPoolDomainResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateUserPoolDomainResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateUserPoolDomainResponse instance.
 */
CreateUserPoolDomainResponsePrivate::CreateUserPoolDomainResponsePrivate(
    CreateUserPoolDomainResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CognitoIdentityProvider CreateUserPoolDomainResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateUserPoolDomainResponsePrivate::parseCreateUserPoolDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateUserPoolDomainResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
