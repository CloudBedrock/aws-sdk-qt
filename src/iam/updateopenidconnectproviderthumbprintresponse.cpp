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

#include "updateopenidconnectproviderthumbprintresponse.h"
#include "updateopenidconnectproviderthumbprintresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  UpdateOpenIDConnectProviderThumbprintResponse
 *
 * @brief  Handles IAM UpdateOpenIDConnectProviderThumbprint responses.
 *
 * @see    IAMClient::updateOpenIDConnectProviderThumbprint
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateOpenIDConnectProviderThumbprintResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new UpdateOpenIDConnectProviderThumbprintResponsePrivate(this), parent)
{
    setRequest(new UpdateOpenIDConnectProviderThumbprintRequest(request));
    setReply(reply);
}

const UpdateOpenIDConnectProviderThumbprintRequest * UpdateOpenIDConnectProviderThumbprintResponse::request() const
{
    Q_D(const UpdateOpenIDConnectProviderThumbprintResponse);
    return static_cast<const UpdateOpenIDConnectProviderThumbprintRequest *>(d->request);
}

/**
 * @brief  Parse a IAM UpdateOpenIDConnectProviderThumbprint response.
 *
 * @param  response  Response to parse.
 */
void UpdateOpenIDConnectProviderThumbprintResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateOpenIDConnectProviderThumbprintResponsePrivate
 *
 * @brief  Private implementation for UpdateOpenIDConnectProviderThumbprintResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateOpenIDConnectProviderThumbprintResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateOpenIDConnectProviderThumbprintResponse instance.
 */
UpdateOpenIDConnectProviderThumbprintResponsePrivate::UpdateOpenIDConnectProviderThumbprintResponsePrivate(
    UpdateOpenIDConnectProviderThumbprintQueueResponse * const q) : UpdateOpenIDConnectProviderThumbprintPrivate(q)
{

}

/**
 * @brief  Parse an IAM UpdateOpenIDConnectProviderThumbprintResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateOpenIDConnectProviderThumbprintResponsePrivate::UpdateOpenIDConnectProviderThumbprintResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateOpenIDConnectProviderThumbprintResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
