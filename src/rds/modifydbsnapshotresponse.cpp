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

#include "modifydbsnapshotresponse.h"
#include "modifydbsnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  ModifyDBSnapshotResponse
 *
 * @brief  Handles RDS ModifyDBSnapshot responses.
 *
 * @see    RDSClient::modifyDBSnapshot
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyDBSnapshotResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new ModifyDBSnapshotResponsePrivate(this), parent)
{
    setRequest(new ModifyDBSnapshotRequest(request));
    setReply(reply);
}

const ModifyDBSnapshotRequest * ModifyDBSnapshotResponse::request() const
{
    Q_D(const ModifyDBSnapshotResponse);
    return static_cast<const ModifyDBSnapshotRequest *>(d->request);
}

/**
 * @brief  Parse a RDS ModifyDBSnapshot response.
 *
 * @param  response  Response to parse.
 */
void ModifyDBSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyDBSnapshotResponsePrivate
 *
 * @brief  Private implementation for ModifyDBSnapshotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyDBSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyDBSnapshotResponse instance.
 */
ModifyDBSnapshotResponsePrivate::ModifyDBSnapshotResponsePrivate(
    ModifyDBSnapshotQueueResponse * const q) : ModifyDBSnapshotPrivate(q)
{

}

/**
 * @brief  Parse an RDS ModifyDBSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyDBSnapshotResponsePrivate::ModifyDBSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyDBSnapshotResponse"));
    /// @todo
}
