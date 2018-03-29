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

#include "copydbclustersnapshotresponse.h"
#include "copydbclustersnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  CopyDBClusterSnapshotResponse
 *
 * @brief  Handles RDS CopyDBClusterSnapshot responses.
 *
 * @see    RDSClient::copyDBClusterSnapshot
 */

/**
 * @brief  Constructs a new CopyDBClusterSnapshotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CopyDBClusterSnapshotResponse::CopyDBClusterSnapshotResponse(
        const CopyDBClusterSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new CopyDBClusterSnapshotResponsePrivate(this), parent)
{
    setRequest(new CopyDBClusterSnapshotRequest(request));
    setReply(reply);
}

const CopyDBClusterSnapshotRequest * CopyDBClusterSnapshotResponse::request() const
{
    Q_D(const CopyDBClusterSnapshotResponse);
    return static_cast<const CopyDBClusterSnapshotRequest *>(d->request);
}

/**
 * @brief  Parse a RDS CopyDBClusterSnapshot response.
 *
 * @param  response  Response to parse.
 */
void CopyDBClusterSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(CopyDBClusterSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CopyDBClusterSnapshotResponsePrivate
 *
 * @brief  Private implementation for CopyDBClusterSnapshotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CopyDBClusterSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CopyDBClusterSnapshotResponse instance.
 */
CopyDBClusterSnapshotResponsePrivate::CopyDBClusterSnapshotResponsePrivate(
    CopyDBClusterSnapshotResponse * const q) : RDSResponsePrivate(q)
{

}

/**
 * @brief  Parse an RDS CopyDBClusterSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CopyDBClusterSnapshotResponsePrivate::CopyDBClusterSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CopyDBClusterSnapshotResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
