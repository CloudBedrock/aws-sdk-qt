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

#include "getresourcedefinitionresponse.h"
#include "getresourcedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  GetResourceDefinitionResponse
 *
 * @brief  Handles Greengrass GetResourceDefinition responses.
 *
 * @see    GreengrassClient::getResourceDefinition
 */

/**
 * @brief  Constructs a new GetResourceDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetResourceDefinitionResponse::GetResourceDefinitionResponse(
        const GetResourceDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetResourceDefinitionResponsePrivate(this), parent)
{
    setRequest(new GetResourceDefinitionRequest(request));
    setReply(reply);
}

const GetResourceDefinitionRequest * GetResourceDefinitionResponse::request() const
{
    Q_D(const GetResourceDefinitionResponse);
    return static_cast<const GetResourceDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass GetResourceDefinition response.
 *
 * @param  response  Response to parse.
 */
void GetResourceDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetResourceDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetResourceDefinitionResponsePrivate
 *
 * @brief  Private implementation for GetResourceDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetResourceDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetResourceDefinitionResponse instance.
 */
GetResourceDefinitionResponsePrivate::GetResourceDefinitionResponsePrivate(
    GetResourceDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/**
 * @brief  Parse an Greengrass GetResourceDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetResourceDefinitionResponsePrivate::GetResourceDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourceDefinitionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
