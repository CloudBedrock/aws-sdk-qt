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

#include "modifylaunchtemplateresponse.h"
#include "modifylaunchtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  ModifyLaunchTemplateResponse
 *
 * @brief  Handles EC2 ModifyLaunchTemplate responses.
 *
 * @see    EC2Client::modifyLaunchTemplate
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyLaunchTemplateResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ModifyLaunchTemplateResponsePrivate(this), parent)
{
    setRequest(new ModifyLaunchTemplateRequest(request));
    setReply(reply);
}

const ModifyLaunchTemplateRequest * ModifyLaunchTemplateResponse::request() const
{
    Q_D(const ModifyLaunchTemplateResponse);
    return static_cast<const ModifyLaunchTemplateRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ModifyLaunchTemplate response.
 *
 * @param  response  Response to parse.
 */
void ModifyLaunchTemplateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyLaunchTemplateResponsePrivate
 *
 * @brief  Private implementation for ModifyLaunchTemplateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyLaunchTemplateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyLaunchTemplateResponse instance.
 */
ModifyLaunchTemplateResponsePrivate::ModifyLaunchTemplateResponsePrivate(
    ModifyLaunchTemplateQueueResponse * const q) : ModifyLaunchTemplatePrivate(q)
{

}

/**
 * @brief  Parse an EC2 ModifyLaunchTemplateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyLaunchTemplateResponsePrivate::ModifyLaunchTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyLaunchTemplateResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
