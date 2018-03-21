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

#include "getresourcedefinitionresponse.h"
#include "getresourcedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  GetResourceDefinitionResponse
 *
 * @brief  Handles Greengrass GetResourceDefinition responses.
 *
 * @see    GreengrassClient::getResourceDefinition
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetResourceDefinitionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
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
    Q_D(Response);
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
    GetResourceDefinitionQueueResponse * const q) : GetResourceDefinitionPrivate(q)
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
