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

#include "updateauthorizerresponse.h"
#include "updateauthorizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  UpdateAuthorizerResponse
 *
 * @brief  Handles APIGateway UpdateAuthorizer responses.
 *
 * @see    APIGatewayClient::updateAuthorizer
 */

/**
 * @brief  Constructs a new UpdateAuthorizerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateAuthorizerResponse::UpdateAuthorizerResponse(
        const UpdateAuthorizerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new UpdateAuthorizerResponsePrivate(this), parent)
{
    setRequest(new UpdateAuthorizerRequest(request));
    setReply(reply);
}

const UpdateAuthorizerRequest * UpdateAuthorizerResponse::request() const
{
    Q_D(const UpdateAuthorizerResponse);
    return static_cast<const UpdateAuthorizerRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway UpdateAuthorizer response.
 *
 * @param  response  Response to parse.
 */
void UpdateAuthorizerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateAuthorizerResponsePrivate
 *
 * @brief  Private implementation for UpdateAuthorizerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAuthorizerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateAuthorizerResponse instance.
 */
UpdateAuthorizerResponsePrivate::UpdateAuthorizerResponsePrivate(
    UpdateAuthorizerQueueResponse * const q) : UpdateAuthorizerPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway UpdateAuthorizerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateAuthorizerResponsePrivate::UpdateAuthorizerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAuthorizerResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
