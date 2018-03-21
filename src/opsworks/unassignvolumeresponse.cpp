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

#include "unassignvolumeresponse.h"
#include "unassignvolumeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  UnassignVolumeResponse
 *
 * @brief  Handles OpsWorks UnassignVolume responses.
 *
 * @see    OpsWorksClient::unassignVolume
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UnassignVolumeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new UnassignVolumeResponsePrivate(this), parent)
{
    setRequest(new UnassignVolumeRequest(request));
    setReply(reply);
}

const UnassignVolumeRequest * UnassignVolumeResponse::request() const
{
    Q_D(const UnassignVolumeResponse);
    return static_cast<const UnassignVolumeRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks UnassignVolume response.
 *
 * @param  response  Response to parse.
 */
void UnassignVolumeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UnassignVolumeResponsePrivate
 *
 * @brief  Private implementation for UnassignVolumeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UnassignVolumeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UnassignVolumeResponse instance.
 */
UnassignVolumeResponsePrivate::UnassignVolumeResponsePrivate(
    UnassignVolumeQueueResponse * const q) : UnassignVolumePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks UnassignVolumeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UnassignVolumeResponsePrivate::UnassignVolumeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UnassignVolumeResponse"));
    /// @todo
}
