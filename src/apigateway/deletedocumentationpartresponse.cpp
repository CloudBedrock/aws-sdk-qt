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

#include "deletedocumentationpartresponse.h"
#include "deletedocumentationpartresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  DeleteDocumentationPartResponse
 *
 * @brief  Handles APIGateway DeleteDocumentationPart responses.
 *
 * @see    APIGatewayClient::deleteDocumentationPart
 */

/**
 * @brief  Constructs a new DeleteDocumentationPartResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDocumentationPartResponse::DeleteDocumentationPartResponse(
        const DeleteDocumentationPartRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new DeleteDocumentationPartResponsePrivate(this), parent)
{
    setRequest(new DeleteDocumentationPartRequest(request));
    setReply(reply);
}

const DeleteDocumentationPartRequest * DeleteDocumentationPartResponse::request() const
{
    Q_D(const DeleteDocumentationPartResponse);
    return static_cast<const DeleteDocumentationPartRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway DeleteDocumentationPart response.
 *
 * @param  response  Response to parse.
 */
void DeleteDocumentationPartResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDocumentationPartResponsePrivate
 *
 * @brief  Private implementation for DeleteDocumentationPartResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDocumentationPartResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDocumentationPartResponse instance.
 */
DeleteDocumentationPartResponsePrivate::DeleteDocumentationPartResponsePrivate(
    DeleteDocumentationPartQueueResponse * const q) : DeleteDocumentationPartPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway DeleteDocumentationPartResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDocumentationPartResponsePrivate::DeleteDocumentationPartResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDocumentationPartResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
