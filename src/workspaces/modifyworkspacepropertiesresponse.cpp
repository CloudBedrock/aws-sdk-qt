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

#include "modifyworkspacepropertiesresponse.h"
#include "modifyworkspacepropertiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/**
 * @class  ModifyWorkspacePropertiesResponse
 *
 * @brief  Handles WorkSpaces ModifyWorkspaceProperties responses.
 *
 * @see    WorkSpacesClient::modifyWorkspaceProperties
 */

/**
 * @brief  Constructs a new ModifyWorkspacePropertiesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyWorkspacePropertiesResponse::ModifyWorkspacePropertiesResponse(
        const ModifyWorkspacePropertiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ModifyWorkspacePropertiesResponse(new ModifyWorkspacePropertiesResponsePrivate(this), parent)
{
    setRequest(new ModifyWorkspacePropertiesRequest(request));
    setReply(reply);
}

const ModifyWorkspacePropertiesRequest * ModifyWorkspacePropertiesResponse::request() const
{
    Q_D(const ModifyWorkspacePropertiesResponse);
    return static_cast<const ModifyWorkspacePropertiesRequest *>(d->request);
}

/**
 * @brief  Parse a WorkSpaces ModifyWorkspaceProperties response.
 *
 * @param  response  Response to parse.
 */
void ModifyWorkspacePropertiesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ModifyWorkspacePropertiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyWorkspacePropertiesResponsePrivate
 *
 * @brief  Private implementation for ModifyWorkspacePropertiesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyWorkspacePropertiesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyWorkspacePropertiesResponse instance.
 */
ModifyWorkspacePropertiesResponsePrivate::ModifyWorkspacePropertiesResponsePrivate(
    ModifyWorkspacePropertiesResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkSpaces ModifyWorkspacePropertiesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyWorkspacePropertiesResponsePrivate::parseModifyWorkspacePropertiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyWorkspacePropertiesResponse"));
    /// @todo
}

} // namespace WorkSpaces
} // namespace QtAws
