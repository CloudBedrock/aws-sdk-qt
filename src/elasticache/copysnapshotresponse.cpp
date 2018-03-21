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

#include "copysnapshotresponse.h"
#include "copysnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElastiCache {

/**
 * @class  CopySnapshotResponse
 *
 * @brief  Handles ElastiCache CopySnapshot responses.
 *
 * @see    ElastiCacheClient::copySnapshot
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CopySnapshotResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new CopySnapshotResponsePrivate(this), parent)
{
    setRequest(new CopySnapshotRequest(request));
    setReply(reply);
}

const CopySnapshotRequest * CopySnapshotResponse::request() const
{
    Q_D(const CopySnapshotResponse);
    return static_cast<const CopySnapshotRequest *>(d->request);
}

/**
 * @brief  Parse a ElastiCache CopySnapshot response.
 *
 * @param  response  Response to parse.
 */
void CopySnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CopySnapshotResponsePrivate
 *
 * @brief  Private implementation for CopySnapshotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CopySnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CopySnapshotResponse instance.
 */
CopySnapshotResponsePrivate::CopySnapshotResponsePrivate(
    CopySnapshotQueueResponse * const q) : CopySnapshotPrivate(q)
{

}

/**
 * @brief  Parse an ElastiCache CopySnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CopySnapshotResponsePrivate::CopySnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CopySnapshotResponse"));
    /// @todo
}
