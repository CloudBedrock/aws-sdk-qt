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

#include "createapikeyresponse.h"
#include "createapikeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/**
 * @class  CreateApiKeyResponse
 *
 * @brief  Handles AppSync CreateApiKey responses.
 *
 * @see    AppSyncClient::createApiKey
 */

/**
 * @brief  Constructs a new CreateApiKeyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateApiKeyResponse::CreateApiKeyResponse(
        const CreateApiKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new CreateApiKeyResponsePrivate(this), parent)
{
    setRequest(new CreateApiKeyRequest(request));
    setReply(reply);
}

const CreateApiKeyRequest * CreateApiKeyResponse::request() const
{
    Q_D(const CreateApiKeyResponse);
    return static_cast<const CreateApiKeyRequest *>(d->request);
}

/**
 * @brief  Parse a AppSync CreateApiKey response.
 *
 * @param  response  Response to parse.
 */
void CreateApiKeyResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateApiKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateApiKeyResponsePrivate
 *
 * @brief  Private implementation for CreateApiKeyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateApiKeyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateApiKeyResponse instance.
 */
CreateApiKeyResponsePrivate::CreateApiKeyResponsePrivate(
    CreateApiKeyResponse * const q) : AppSyncResponsePrivate(q)
{

}

/**
 * @brief  Parse an AppSync CreateApiKeyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateApiKeyResponsePrivate::CreateApiKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateApiKeyResponse"));
    /// @todo
}

} // namespace AppSync
} // namespace QtAws
