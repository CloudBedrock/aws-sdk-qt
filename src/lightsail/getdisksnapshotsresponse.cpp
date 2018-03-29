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

#include "getdisksnapshotsresponse.h"
#include "getdisksnapshotsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  GetDiskSnapshotsResponse
 *
 * @brief  Handles Lightsail GetDiskSnapshots responses.
 *
 * @see    LightsailClient::getDiskSnapshots
 */

/**
 * @brief  Constructs a new GetDiskSnapshotsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDiskSnapshotsResponse::GetDiskSnapshotsResponse(
        const GetDiskSnapshotsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetDiskSnapshotsResponse(new GetDiskSnapshotsResponsePrivate(this), parent)
{
    setRequest(new GetDiskSnapshotsRequest(request));
    setReply(reply);
}

const GetDiskSnapshotsRequest * GetDiskSnapshotsResponse::request() const
{
    Q_D(const GetDiskSnapshotsResponse);
    return static_cast<const GetDiskSnapshotsRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetDiskSnapshots response.
 *
 * @param  response  Response to parse.
 */
void GetDiskSnapshotsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDiskSnapshotsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDiskSnapshotsResponsePrivate
 *
 * @brief  Private implementation for GetDiskSnapshotsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDiskSnapshotsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDiskSnapshotsResponse instance.
 */
GetDiskSnapshotsResponsePrivate::GetDiskSnapshotsResponsePrivate(
    GetDiskSnapshotsResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetDiskSnapshotsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDiskSnapshotsResponsePrivate::parseGetDiskSnapshotsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDiskSnapshotsResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
