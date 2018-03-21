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

#include "adminconfirmsignupresponse.h"
#include "adminconfirmsignupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  AdminConfirmSignUpResponse
 *
 * @brief  Handles CognitoIdentityProvider AdminConfirmSignUp responses.
 *
 * @see    CognitoIdentityProviderClient::adminConfirmSignUp
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AdminConfirmSignUpResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminConfirmSignUpResponsePrivate(this), parent)
{
    setRequest(new AdminConfirmSignUpRequest(request));
    setReply(reply);
}

const AdminConfirmSignUpRequest * AdminConfirmSignUpResponse::request() const
{
    Q_D(const AdminConfirmSignUpResponse);
    return static_cast<const AdminConfirmSignUpRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider AdminConfirmSignUp response.
 *
 * @param  response  Response to parse.
 */
void AdminConfirmSignUpResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AdminConfirmSignUpResponsePrivate
 *
 * @brief  Private implementation for AdminConfirmSignUpResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminConfirmSignUpResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AdminConfirmSignUpResponse instance.
 */
AdminConfirmSignUpResponsePrivate::AdminConfirmSignUpResponsePrivate(
    AdminConfirmSignUpQueueResponse * const q) : AdminConfirmSignUpPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider AdminConfirmSignUpResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AdminConfirmSignUpResponsePrivate::AdminConfirmSignUpResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminConfirmSignUpResponse"));
    /// @todo
}
