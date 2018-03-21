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

#include "creatediskfromsnapshotresponse.h"
#include "creatediskfromsnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  CreateDiskFromSnapshotResponse
 *
 * @brief  Handles Lightsail CreateDiskFromSnapshot responses.
 *
 * @see    LightsailClient::createDiskFromSnapshot
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDiskFromSnapshotResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new CreateDiskFromSnapshotResponsePrivate(this), parent)
{
    setRequest(new CreateDiskFromSnapshotRequest(request));
    setReply(reply);
}

const CreateDiskFromSnapshotRequest * CreateDiskFromSnapshotResponse::request() const
{
    Q_D(const CreateDiskFromSnapshotResponse);
    return static_cast<const CreateDiskFromSnapshotRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail CreateDiskFromSnapshot response.
 *
 * @param  response  Response to parse.
 */
void CreateDiskFromSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDiskFromSnapshotResponsePrivate
 *
 * @brief  Private implementation for CreateDiskFromSnapshotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDiskFromSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDiskFromSnapshotResponse instance.
 */
CreateDiskFromSnapshotResponsePrivate::CreateDiskFromSnapshotResponsePrivate(
    CreateDiskFromSnapshotQueueResponse * const q) : CreateDiskFromSnapshotPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail CreateDiskFromSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDiskFromSnapshotResponsePrivate::CreateDiskFromSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDiskFromSnapshotResponse"));
    /// @todo
}
