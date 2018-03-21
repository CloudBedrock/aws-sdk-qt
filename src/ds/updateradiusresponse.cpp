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

#include "updateradiusresponse.h"
#include "updateradiusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectoryService {

/**
 * @class  UpdateRadiusResponse
 *
 * @brief  Handles DirectoryService UpdateRadius responses.
 *
 * @see    DirectoryServiceClient::updateRadius
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateRadiusResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new UpdateRadiusResponsePrivate(this), parent)
{
    setRequest(new UpdateRadiusRequest(request));
    setReply(reply);
}

const UpdateRadiusRequest * UpdateRadiusResponse::request() const
{
    Q_D(const UpdateRadiusResponse);
    return static_cast<const UpdateRadiusRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService UpdateRadius response.
 *
 * @param  response  Response to parse.
 */
void UpdateRadiusResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateRadiusResponsePrivate
 *
 * @brief  Private implementation for UpdateRadiusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRadiusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateRadiusResponse instance.
 */
UpdateRadiusResponsePrivate::UpdateRadiusResponsePrivate(
    UpdateRadiusQueueResponse * const q) : UpdateRadiusPrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService UpdateRadiusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateRadiusResponsePrivate::UpdateRadiusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRadiusResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace AWS
