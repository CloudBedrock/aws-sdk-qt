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

#include "createthingtyperesponse.h"
#include "createthingtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  CreateThingTypeResponse
 *
 * @brief  Handles IoT CreateThingType responses.
 *
 * @see    IoTClient::createThingType
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateThingTypeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new CreateThingTypeResponsePrivate(this), parent)
{
    setRequest(new CreateThingTypeRequest(request));
    setReply(reply);
}

const CreateThingTypeRequest * CreateThingTypeResponse::request() const
{
    Q_D(const CreateThingTypeResponse);
    return static_cast<const CreateThingTypeRequest *>(d->request);
}

/**
 * @brief  Parse a IoT CreateThingType response.
 *
 * @param  response  Response to parse.
 */
void CreateThingTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateThingTypeResponsePrivate
 *
 * @brief  Private implementation for CreateThingTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateThingTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateThingTypeResponse instance.
 */
CreateThingTypeResponsePrivate::CreateThingTypeResponsePrivate(
    CreateThingTypeQueueResponse * const q) : CreateThingTypePrivate(q)
{

}

/**
 * @brief  Parse an IoT CreateThingTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateThingTypeResponsePrivate::CreateThingTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateThingTypeResponse"));
    /// @todo
}
