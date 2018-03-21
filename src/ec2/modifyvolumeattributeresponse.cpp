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

#include "modifyvolumeattributeresponse.h"
#include "modifyvolumeattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  ModifyVolumeAttributeResponse
 *
 * @brief  Handles EC2 ModifyVolumeAttribute responses.
 *
 * @see    EC2Client::modifyVolumeAttribute
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyVolumeAttributeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ModifyVolumeAttributeResponsePrivate(this), parent)
{
    setRequest(new ModifyVolumeAttributeRequest(request));
    setReply(reply);
}

const ModifyVolumeAttributeRequest * ModifyVolumeAttributeResponse::request() const
{
    Q_D(const ModifyVolumeAttributeResponse);
    return static_cast<const ModifyVolumeAttributeRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ModifyVolumeAttribute response.
 *
 * @param  response  Response to parse.
 */
void ModifyVolumeAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyVolumeAttributeResponsePrivate
 *
 * @brief  Private implementation for ModifyVolumeAttributeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyVolumeAttributeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyVolumeAttributeResponse instance.
 */
ModifyVolumeAttributeResponsePrivate::ModifyVolumeAttributeResponsePrivate(
    ModifyVolumeAttributeQueueResponse * const q) : ModifyVolumeAttributePrivate(q)
{

}

/**
 * @brief  Parse an EC2 ModifyVolumeAttributeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyVolumeAttributeResponsePrivate::ModifyVolumeAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyVolumeAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
