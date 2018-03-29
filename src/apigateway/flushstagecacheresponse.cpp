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

#include "flushstagecacheresponse.h"
#include "flushstagecacheresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  FlushStageCacheResponse
 *
 * @brief  Handles APIGateway FlushStageCache responses.
 *
 * @see    APIGatewayClient::flushStageCache
 */

/**
 * @brief  Constructs a new FlushStageCacheResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
FlushStageCacheResponse::FlushStageCacheResponse(
        const FlushStageCacheRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FlushStageCacheResponse(new FlushStageCacheResponsePrivate(this), parent)
{
    setRequest(new FlushStageCacheRequest(request));
    setReply(reply);
}

const FlushStageCacheRequest * FlushStageCacheResponse::request() const
{
    Q_D(const FlushStageCacheResponse);
    return static_cast<const FlushStageCacheRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway FlushStageCache response.
 *
 * @param  response  Response to parse.
 */
void FlushStageCacheResponse::parseSuccess(QIODevice &response)
{
    Q_D(FlushStageCacheResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  FlushStageCacheResponsePrivate
 *
 * @brief  Private implementation for FlushStageCacheResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new FlushStageCacheResponsePrivate object.
 *
 * @param  q  Pointer to this object's public FlushStageCacheResponse instance.
 */
FlushStageCacheResponsePrivate::FlushStageCacheResponsePrivate(
    FlushStageCacheResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway FlushStageCacheResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void FlushStageCacheResponsePrivate::parseFlushStageCacheResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("FlushStageCacheResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
