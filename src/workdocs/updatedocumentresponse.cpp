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

#include "updatedocumentresponse.h"
#include "updatedocumentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/**
 * @class  UpdateDocumentResponse
 *
 * @brief  Handles WorkDocs UpdateDocument responses.
 *
 * @see    WorkDocsClient::updateDocument
 */

/**
 * @brief  Constructs a new UpdateDocumentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDocumentResponse::UpdateDocumentResponse(
        const UpdateDocumentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new UpdateDocumentResponsePrivate(this), parent)
{
    setRequest(new UpdateDocumentRequest(request));
    setReply(reply);
}

const UpdateDocumentRequest * UpdateDocumentResponse::request() const
{
    Q_D(const UpdateDocumentResponse);
    return static_cast<const UpdateDocumentRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs UpdateDocument response.
 *
 * @param  response  Response to parse.
 */
void UpdateDocumentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateDocumentResponsePrivate
 *
 * @brief  Private implementation for UpdateDocumentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDocumentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateDocumentResponse instance.
 */
UpdateDocumentResponsePrivate::UpdateDocumentResponsePrivate(
    UpdateDocumentQueueResponse * const q) : UpdateDocumentPrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs UpdateDocumentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateDocumentResponsePrivate::UpdateDocumentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDocumentResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace QtAws
