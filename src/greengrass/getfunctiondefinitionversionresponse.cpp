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

#include "getfunctiondefinitionversionresponse.h"
#include "getfunctiondefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  GetFunctionDefinitionVersionResponse
 *
 * @brief  Handles Greengrass GetFunctionDefinitionVersion responses.
 *
 * @see    GreengrassClient::getFunctionDefinitionVersion
 */

/**
 * @brief  Constructs a new GetFunctionDefinitionVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetFunctionDefinitionVersionResponse::GetFunctionDefinitionVersionResponse(
        const GetFunctionDefinitionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetFunctionDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new GetFunctionDefinitionVersionRequest(request));
    setReply(reply);
}

const GetFunctionDefinitionVersionRequest * GetFunctionDefinitionVersionResponse::request() const
{
    Q_D(const GetFunctionDefinitionVersionResponse);
    return static_cast<const GetFunctionDefinitionVersionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass GetFunctionDefinitionVersion response.
 *
 * @param  response  Response to parse.
 */
void GetFunctionDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetFunctionDefinitionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetFunctionDefinitionVersionResponsePrivate
 *
 * @brief  Private implementation for GetFunctionDefinitionVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetFunctionDefinitionVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetFunctionDefinitionVersionResponse instance.
 */
GetFunctionDefinitionVersionResponsePrivate::GetFunctionDefinitionVersionResponsePrivate(
    GetFunctionDefinitionVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/**
 * @brief  Parse an Greengrass GetFunctionDefinitionVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetFunctionDefinitionVersionResponsePrivate::GetFunctionDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFunctionDefinitionVersionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
