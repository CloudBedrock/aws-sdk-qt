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

#include "updatecoredefinitionresponse.h"
#include "updatecoredefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  UpdateCoreDefinitionResponse
 *
 * @brief  Handles Greengrass UpdateCoreDefinition responses.
 *
 * @see    GreengrassClient::updateCoreDefinition
 */

/**
 * @brief  Constructs a new UpdateCoreDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateCoreDefinitionResponse::UpdateCoreDefinitionResponse(
        const UpdateCoreDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new UpdateCoreDefinitionResponsePrivate(this), parent)
{
    setRequest(new UpdateCoreDefinitionRequest(request));
    setReply(reply);
}

const UpdateCoreDefinitionRequest * UpdateCoreDefinitionResponse::request() const
{
    Q_D(const UpdateCoreDefinitionResponse);
    return static_cast<const UpdateCoreDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass UpdateCoreDefinition response.
 *
 * @param  response  Response to parse.
 */
void UpdateCoreDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateCoreDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateCoreDefinitionResponsePrivate
 *
 * @brief  Private implementation for UpdateCoreDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateCoreDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateCoreDefinitionResponse instance.
 */
UpdateCoreDefinitionResponsePrivate::UpdateCoreDefinitionResponsePrivate(
    UpdateCoreDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/**
 * @brief  Parse an Greengrass UpdateCoreDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateCoreDefinitionResponsePrivate::UpdateCoreDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCoreDefinitionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
