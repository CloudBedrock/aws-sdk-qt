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

#include "deletefolderresponse.h"
#include "deletefolderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkDocs {

/**
 * @class  DeleteFolderResponse
 *
 * @brief  Handles WorkDocs DeleteFolder responses.
 *
 * @see    WorkDocsClient::deleteFolder
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteFolderResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new DeleteFolderResponsePrivate(this), parent)
{
    setRequest(new DeleteFolderRequest(request));
    setReply(reply);
}

const DeleteFolderRequest * DeleteFolderResponse::request() const
{
    Q_D(const DeleteFolderResponse);
    return static_cast<const DeleteFolderRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs DeleteFolder response.
 *
 * @param  response  Response to parse.
 */
void DeleteFolderResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteFolderResponsePrivate
 *
 * @brief  Private implementation for DeleteFolderResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFolderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteFolderResponse instance.
 */
DeleteFolderResponsePrivate::DeleteFolderResponsePrivate(
    DeleteFolderQueueResponse * const q) : DeleteFolderPrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs DeleteFolderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteFolderResponsePrivate::DeleteFolderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFolderResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace AWS
