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

#include "putslottyperesponse.h"
#include "putslottyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  PutSlotTypeResponse
 *
 * @brief  Handles LexModelBuildingService PutSlotType responses.
 *
 * @see    LexModelBuildingServiceClient::putSlotType
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutSlotTypeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new PutSlotTypeResponsePrivate(this), parent)
{
    setRequest(new PutSlotTypeRequest(request));
    setReply(reply);
}

const PutSlotTypeRequest * PutSlotTypeResponse::request() const
{
    Q_D(const PutSlotTypeResponse);
    return static_cast<const PutSlotTypeRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService PutSlotType response.
 *
 * @param  response  Response to parse.
 */
void PutSlotTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutSlotTypeResponsePrivate
 *
 * @brief  Private implementation for PutSlotTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutSlotTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutSlotTypeResponse instance.
 */
PutSlotTypeResponsePrivate::PutSlotTypeResponsePrivate(
    PutSlotTypeQueueResponse * const q) : PutSlotTypePrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService PutSlotTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutSlotTypeResponsePrivate::PutSlotTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutSlotTypeResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace AWS
