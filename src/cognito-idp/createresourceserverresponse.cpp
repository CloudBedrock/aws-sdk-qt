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

#include "createresourceserverresponse.h"
#include "createresourceserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  CreateResourceServerResponse
 *
 * @brief  Handles CognitoIdentityProvider CreateResourceServer responses.
 *
 * @see    CognitoIdentityProviderClient::createResourceServer
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateResourceServerResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new CreateResourceServerResponsePrivate(this), parent)
{
    setRequest(new CreateResourceServerRequest(request));
    setReply(reply);
}

const CreateResourceServerRequest * CreateResourceServerResponse::request() const
{
    Q_D(const CreateResourceServerResponse);
    return static_cast<const CreateResourceServerRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider CreateResourceServer response.
 *
 * @param  response  Response to parse.
 */
void CreateResourceServerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateResourceServerResponsePrivate
 *
 * @brief  Private implementation for CreateResourceServerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateResourceServerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateResourceServerResponse instance.
 */
CreateResourceServerResponsePrivate::CreateResourceServerResponsePrivate(
    CreateResourceServerQueueResponse * const q) : CreateResourceServerPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider CreateResourceServerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateResourceServerResponsePrivate::CreateResourceServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateResourceServerResponse"));
    /// @todo
}
