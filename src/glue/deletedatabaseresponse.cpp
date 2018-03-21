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

#include "deletedatabaseresponse.h"
#include "deletedatabaseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  DeleteDatabaseResponse
 *
 * @brief  Handles Glue DeleteDatabase responses.
 *
 * @see    GlueClient::deleteDatabase
 */

/**
 * @brief  Constructs a new DeleteDatabaseResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDatabaseResponse::DeleteDatabaseResponse(
        const DeleteDatabaseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteDatabaseResponsePrivate(this), parent)
{
    setRequest(new DeleteDatabaseRequest(request));
    setReply(reply);
}

const DeleteDatabaseRequest * DeleteDatabaseResponse::request() const
{
    Q_D(const DeleteDatabaseResponse);
    return static_cast<const DeleteDatabaseRequest *>(d->request);
}

/**
 * @brief  Parse a Glue DeleteDatabase response.
 *
 * @param  response  Response to parse.
 */
void DeleteDatabaseResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDatabaseResponsePrivate
 *
 * @brief  Private implementation for DeleteDatabaseResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDatabaseResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDatabaseResponse instance.
 */
DeleteDatabaseResponsePrivate::DeleteDatabaseResponsePrivate(
    DeleteDatabaseQueueResponse * const q) : DeleteDatabasePrivate(q)
{

}

/**
 * @brief  Parse an Glue DeleteDatabaseResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDatabaseResponsePrivate::DeleteDatabaseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDatabaseResponse"));
    /// @todo
}

} // namespace Glue
} // namespace AWS
