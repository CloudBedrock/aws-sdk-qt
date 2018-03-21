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

#include "detachfromindexresponse.h"
#include "detachfromindexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudDirectory {

/**
 * @class  DetachFromIndexResponse
 *
 * @brief  Handles CloudDirectory DetachFromIndex responses.
 *
 * @see    CloudDirectoryClient::detachFromIndex
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetachFromIndexResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new DetachFromIndexResponsePrivate(this), parent)
{
    setRequest(new DetachFromIndexRequest(request));
    setReply(reply);
}

const DetachFromIndexRequest * DetachFromIndexResponse::request() const
{
    Q_D(const DetachFromIndexResponse);
    return static_cast<const DetachFromIndexRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory DetachFromIndex response.
 *
 * @param  response  Response to parse.
 */
void DetachFromIndexResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DetachFromIndexResponsePrivate
 *
 * @brief  Private implementation for DetachFromIndexResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachFromIndexResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetachFromIndexResponse instance.
 */
DetachFromIndexResponsePrivate::DetachFromIndexResponsePrivate(
    DetachFromIndexQueueResponse * const q) : DetachFromIndexPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory DetachFromIndexResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetachFromIndexResponsePrivate::DetachFromIndexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachFromIndexResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace AWS
