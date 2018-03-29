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

#include "stopreplicationtaskresponse.h"
#include "stopreplicationtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/**
 * @class  StopReplicationTaskResponse
 *
 * @brief  Handles DatabaseMigrationService StopReplicationTask responses.
 *
 * @see    DatabaseMigrationServiceClient::stopReplicationTask
 */

/**
 * @brief  Constructs a new StopReplicationTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopReplicationTaskResponse::StopReplicationTaskResponse(
        const StopReplicationTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new StopReplicationTaskResponsePrivate(this), parent)
{
    setRequest(new StopReplicationTaskRequest(request));
    setReply(reply);
}

const StopReplicationTaskRequest * StopReplicationTaskResponse::request() const
{
    Q_D(const StopReplicationTaskResponse);
    return static_cast<const StopReplicationTaskRequest *>(d->request);
}

/**
 * @brief  Parse a DatabaseMigrationService StopReplicationTask response.
 *
 * @param  response  Response to parse.
 */
void StopReplicationTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(StopReplicationTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopReplicationTaskResponsePrivate
 *
 * @brief  Private implementation for StopReplicationTaskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopReplicationTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopReplicationTaskResponse instance.
 */
StopReplicationTaskResponsePrivate::StopReplicationTaskResponsePrivate(
    StopReplicationTaskResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService StopReplicationTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopReplicationTaskResponsePrivate::StopReplicationTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopReplicationTaskResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
