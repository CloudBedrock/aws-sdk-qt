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

#include "startreplicationtaskresponse.h"
#include "startreplicationtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  StartReplicationTaskResponse
 *
 * @brief  Handles DatabaseMigrationService StartReplicationTask responses.
 *
 * @see    DatabaseMigrationServiceClient::startReplicationTask
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartReplicationTaskResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new StartReplicationTaskResponsePrivate(this), parent)
{
    setRequest(new StartReplicationTaskRequest(request));
    setReply(reply);
}

const StartReplicationTaskRequest * StartReplicationTaskResponse::request() const
{
    Q_D(const StartReplicationTaskResponse);
    return static_cast<const StartReplicationTaskRequest *>(d->request);
}

/**
 * @brief  Parse a DatabaseMigrationService StartReplicationTask response.
 *
 * @param  response  Response to parse.
 */
void StartReplicationTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartReplicationTaskResponsePrivate
 *
 * @brief  Private implementation for StartReplicationTaskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartReplicationTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartReplicationTaskResponse instance.
 */
StartReplicationTaskResponsePrivate::StartReplicationTaskResponsePrivate(
    StartReplicationTaskQueueResponse * const q) : StartReplicationTaskPrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService StartReplicationTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartReplicationTaskResponsePrivate::StartReplicationTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartReplicationTaskResponse"));
    /// @todo
}
