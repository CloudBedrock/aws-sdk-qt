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

#include "getutterancesviewresponse.h"
#include "getutterancesviewresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  GetUtterancesViewResponse
 *
 * @brief  Handles LexModelBuildingService GetUtterancesView responses.
 *
 * @see    LexModelBuildingServiceClient::getUtterancesView
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetUtterancesViewResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetUtterancesViewResponsePrivate(this), parent)
{
    setRequest(new GetUtterancesViewRequest(request));
    setReply(reply);
}

const GetUtterancesViewRequest * GetUtterancesViewResponse::request() const
{
    Q_D(const GetUtterancesViewResponse);
    return static_cast<const GetUtterancesViewRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService GetUtterancesView response.
 *
 * @param  response  Response to parse.
 */
void GetUtterancesViewResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetUtterancesViewResponsePrivate
 *
 * @brief  Private implementation for GetUtterancesViewResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetUtterancesViewResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetUtterancesViewResponse instance.
 */
GetUtterancesViewResponsePrivate::GetUtterancesViewResponsePrivate(
    GetUtterancesViewQueueResponse * const q) : GetUtterancesViewPrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService GetUtterancesViewResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetUtterancesViewResponsePrivate::GetUtterancesViewResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUtterancesViewResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace AWS
