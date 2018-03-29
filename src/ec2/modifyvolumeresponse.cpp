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

#include "modifyvolumeresponse.h"
#include "modifyvolumeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  ModifyVolumeResponse
 *
 * @brief  Handles EC2 ModifyVolume responses.
 *
 * @see    EC2Client::modifyVolume
 */

/**
 * @brief  Constructs a new ModifyVolumeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyVolumeResponse::ModifyVolumeResponse(
        const ModifyVolumeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ModifyVolumeResponsePrivate(this), parent)
{
    setRequest(new ModifyVolumeRequest(request));
    setReply(reply);
}

const ModifyVolumeRequest * ModifyVolumeResponse::request() const
{
    Q_D(const ModifyVolumeResponse);
    return static_cast<const ModifyVolumeRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ModifyVolume response.
 *
 * @param  response  Response to parse.
 */
void ModifyVolumeResponse::parseSuccess(QIODevice &response)
{
    Q_D(ModifyVolumeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyVolumeResponsePrivate
 *
 * @brief  Private implementation for ModifyVolumeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyVolumeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyVolumeResponse instance.
 */
ModifyVolumeResponsePrivate::ModifyVolumeResponsePrivate(
    ModifyVolumeResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 ModifyVolumeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyVolumeResponsePrivate::ModifyVolumeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyVolumeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
