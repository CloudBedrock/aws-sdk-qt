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

#include "updatedocumentdefaultversionresponse.h"
#include "updatedocumentdefaultversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  UpdateDocumentDefaultVersionResponse
 *
 * @brief  Handles SSM UpdateDocumentDefaultVersion responses.
 *
 * @see    SSMClient::updateDocumentDefaultVersion
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDocumentDefaultVersionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new UpdateDocumentDefaultVersionResponsePrivate(this), parent)
{
    setRequest(new UpdateDocumentDefaultVersionRequest(request));
    setReply(reply);
}

const UpdateDocumentDefaultVersionRequest * UpdateDocumentDefaultVersionResponse::request() const
{
    Q_D(const UpdateDocumentDefaultVersionResponse);
    return static_cast<const UpdateDocumentDefaultVersionRequest *>(d->request);
}

/**
 * @brief  Parse a SSM UpdateDocumentDefaultVersion response.
 *
 * @param  response  Response to parse.
 */
void UpdateDocumentDefaultVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateDocumentDefaultVersionResponsePrivate
 *
 * @brief  Private implementation for UpdateDocumentDefaultVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDocumentDefaultVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateDocumentDefaultVersionResponse instance.
 */
UpdateDocumentDefaultVersionResponsePrivate::UpdateDocumentDefaultVersionResponsePrivate(
    UpdateDocumentDefaultVersionQueueResponse * const q) : UpdateDocumentDefaultVersionPrivate(q)
{

}

/**
 * @brief  Parse an SSM UpdateDocumentDefaultVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateDocumentDefaultVersionResponsePrivate::UpdateDocumentDefaultVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDocumentDefaultVersionResponse"));
    /// @todo
}
