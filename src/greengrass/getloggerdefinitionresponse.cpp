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

#include "getloggerdefinitionresponse.h"
#include "getloggerdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  GetLoggerDefinitionResponse
 *
 * @brief  Handles Greengrass GetLoggerDefinition responses.
 *
 * @see    GreengrassClient::getLoggerDefinition
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetLoggerDefinitionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetLoggerDefinitionResponsePrivate(this), parent)
{
    setRequest(new GetLoggerDefinitionRequest(request));
    setReply(reply);
}

const GetLoggerDefinitionRequest * GetLoggerDefinitionResponse::request() const
{
    Q_D(const GetLoggerDefinitionResponse);
    return static_cast<const GetLoggerDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass GetLoggerDefinition response.
 *
 * @param  response  Response to parse.
 */
void GetLoggerDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetLoggerDefinitionResponsePrivate
 *
 * @brief  Private implementation for GetLoggerDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetLoggerDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetLoggerDefinitionResponse instance.
 */
GetLoggerDefinitionResponsePrivate::GetLoggerDefinitionResponsePrivate(
    GetLoggerDefinitionQueueResponse * const q) : GetLoggerDefinitionPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass GetLoggerDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetLoggerDefinitionResponsePrivate::GetLoggerDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLoggerDefinitionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace AWS
