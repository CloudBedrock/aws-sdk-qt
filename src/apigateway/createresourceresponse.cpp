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

#include "createresourceresponse.h"
#include "createresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  CreateResourceResponse
 *
 * @brief  Handles APIGateway CreateResource responses.
 *
 * @see    APIGatewayClient::createResource
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateResourceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new CreateResourceResponsePrivate(this), parent)
{
    setRequest(new CreateResourceRequest(request));
    setReply(reply);
}

const CreateResourceRequest * CreateResourceResponse::request() const
{
    Q_D(const CreateResourceResponse);
    return static_cast<const CreateResourceRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway CreateResource response.
 *
 * @param  response  Response to parse.
 */
void CreateResourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateResourceResponsePrivate
 *
 * @brief  Private implementation for CreateResourceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateResourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateResourceResponse instance.
 */
CreateResourceResponsePrivate::CreateResourceResponsePrivate(
    CreateResourceQueueResponse * const q) : CreateResourcePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway CreateResourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateResourceResponsePrivate::CreateResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateResourceResponse"));
    /// @todo
}
