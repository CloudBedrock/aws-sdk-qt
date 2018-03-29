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

#include "deletereplicationtaskresponse.h"
#include "deletereplicationtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/**
 * @class  DeleteReplicationTaskResponse
 *
 * @brief  Handles DatabaseMigrationService DeleteReplicationTask responses.
 *
 * @see    DatabaseMigrationServiceClient::deleteReplicationTask
 */

/**
 * @brief  Constructs a new DeleteReplicationTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteReplicationTaskResponse::DeleteReplicationTaskResponse(
        const DeleteReplicationTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new DeleteReplicationTaskResponsePrivate(this), parent)
{
    setRequest(new DeleteReplicationTaskRequest(request));
    setReply(reply);
}

const DeleteReplicationTaskRequest * DeleteReplicationTaskResponse::request() const
{
    Q_D(const DeleteReplicationTaskResponse);
    return static_cast<const DeleteReplicationTaskRequest *>(d->request);
}

/**
 * @brief  Parse a DatabaseMigrationService DeleteReplicationTask response.
 *
 * @param  response  Response to parse.
 */
void DeleteReplicationTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteReplicationTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteReplicationTaskResponsePrivate
 *
 * @brief  Private implementation for DeleteReplicationTaskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteReplicationTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteReplicationTaskResponse instance.
 */
DeleteReplicationTaskResponsePrivate::DeleteReplicationTaskResponsePrivate(
    DeleteReplicationTaskResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService DeleteReplicationTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteReplicationTaskResponsePrivate::parseDeleteReplicationTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReplicationTaskResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
