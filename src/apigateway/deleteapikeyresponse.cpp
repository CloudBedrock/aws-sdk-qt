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

#include "deleteapikeyresponse.h"
#include "deleteapikeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  DeleteApiKeyResponse
 *
 * @brief  Handles APIGateway DeleteApiKey responses.
 *
 * @see    APIGatewayClient::deleteApiKey
 */

/**
 * @brief  Constructs a new DeleteApiKeyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteApiKeyResponse::DeleteApiKeyResponse(
        const DeleteApiKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new DeleteApiKeyResponsePrivate(this), parent)
{
    setRequest(new DeleteApiKeyRequest(request));
    setReply(reply);
}

const DeleteApiKeyRequest * DeleteApiKeyResponse::request() const
{
    Q_D(const DeleteApiKeyResponse);
    return static_cast<const DeleteApiKeyRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway DeleteApiKey response.
 *
 * @param  response  Response to parse.
 */
void DeleteApiKeyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteApiKeyResponsePrivate
 *
 * @brief  Private implementation for DeleteApiKeyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteApiKeyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteApiKeyResponse instance.
 */
DeleteApiKeyResponsePrivate::DeleteApiKeyResponsePrivate(
    DeleteApiKeyQueueResponse * const q) : DeleteApiKeyPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway DeleteApiKeyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteApiKeyResponsePrivate::DeleteApiKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApiKeyResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
