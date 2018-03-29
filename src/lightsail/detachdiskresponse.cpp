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

#include "detachdiskresponse.h"
#include "detachdiskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  DetachDiskResponse
 *
 * @brief  Handles Lightsail DetachDisk responses.
 *
 * @see    LightsailClient::detachDisk
 */

/**
 * @brief  Constructs a new DetachDiskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetachDiskResponse::DetachDiskResponse(
        const DetachDiskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new DetachDiskResponsePrivate(this), parent)
{
    setRequest(new DetachDiskRequest(request));
    setReply(reply);
}

const DetachDiskRequest * DetachDiskResponse::request() const
{
    Q_D(const DetachDiskResponse);
    return static_cast<const DetachDiskRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail DetachDisk response.
 *
 * @param  response  Response to parse.
 */
void DetachDiskResponse::parseSuccess(QIODevice &response)
{
    Q_D(DetachDiskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DetachDiskResponsePrivate
 *
 * @brief  Private implementation for DetachDiskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachDiskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetachDiskResponse instance.
 */
DetachDiskResponsePrivate::DetachDiskResponsePrivate(
    DetachDiskResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail DetachDiskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetachDiskResponsePrivate::parseDetachDiskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachDiskResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
