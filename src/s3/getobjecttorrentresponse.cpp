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

#include "getobjecttorrentresponse.h"
#include "getobjecttorrentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  GetObjectTorrentResponse
 *
 * @brief  Handles S3 GetObjectTorrent responses.
 *
 * @see    S3Client::getObjectTorrent
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetObjectTorrentResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetObjectTorrentResponsePrivate(this), parent)
{
    setRequest(new GetObjectTorrentRequest(request));
    setReply(reply);
}

const GetObjectTorrentRequest * GetObjectTorrentResponse::request() const
{
    Q_D(const GetObjectTorrentResponse);
    return static_cast<const GetObjectTorrentRequest *>(d->request);
}

/**
 * @brief  Parse a S3 GetObjectTorrent response.
 *
 * @param  response  Response to parse.
 */
void GetObjectTorrentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetObjectTorrentResponsePrivate
 *
 * @brief  Private implementation for GetObjectTorrentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetObjectTorrentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetObjectTorrentResponse instance.
 */
GetObjectTorrentResponsePrivate::GetObjectTorrentResponsePrivate(
    GetObjectTorrentQueueResponse * const q) : GetObjectTorrentPrivate(q)
{

}

/**
 * @brief  Parse an S3 GetObjectTorrentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetObjectTorrentResponsePrivate::GetObjectTorrentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetObjectTorrentResponse"));
    /// @todo
}
