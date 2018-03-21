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

#include "setuserpoolmfaconfigresponse.h"
#include "setuserpoolmfaconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  SetUserPoolMfaConfigResponse
 *
 * @brief  Handles CognitoIdentityProvider SetUserPoolMfaConfig responses.
 *
 * @see    CognitoIdentityProviderClient::setUserPoolMfaConfig
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetUserPoolMfaConfigResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new SetUserPoolMfaConfigResponsePrivate(this), parent)
{
    setRequest(new SetUserPoolMfaConfigRequest(request));
    setReply(reply);
}

const SetUserPoolMfaConfigRequest * SetUserPoolMfaConfigResponse::request() const
{
    Q_D(const SetUserPoolMfaConfigResponse);
    return static_cast<const SetUserPoolMfaConfigRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider SetUserPoolMfaConfig response.
 *
 * @param  response  Response to parse.
 */
void SetUserPoolMfaConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetUserPoolMfaConfigResponsePrivate
 *
 * @brief  Private implementation for SetUserPoolMfaConfigResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetUserPoolMfaConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetUserPoolMfaConfigResponse instance.
 */
SetUserPoolMfaConfigResponsePrivate::SetUserPoolMfaConfigResponsePrivate(
    SetUserPoolMfaConfigQueueResponse * const q) : SetUserPoolMfaConfigPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider SetUserPoolMfaConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetUserPoolMfaConfigResponsePrivate::SetUserPoolMfaConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetUserPoolMfaConfigResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace AWS
