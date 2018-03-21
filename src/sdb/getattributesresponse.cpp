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

#include "getattributesresponse.h"
#include "getattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SimpleDB {

/**
 * @class  GetAttributesResponse
 *
 * @brief  Handles SimpleDB GetAttributes responses.
 *
 * @see    SimpleDBClient::getAttributes
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAttributesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SimpleDBResponse(new GetAttributesResponsePrivate(this), parent)
{
    setRequest(new GetAttributesRequest(request));
    setReply(reply);
}

const GetAttributesRequest * GetAttributesResponse::request() const
{
    Q_D(const GetAttributesResponse);
    return static_cast<const GetAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a SimpleDB GetAttributes response.
 *
 * @param  response  Response to parse.
 */
void GetAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetAttributesResponsePrivate
 *
 * @brief  Private implementation for GetAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetAttributesResponse instance.
 */
GetAttributesResponsePrivate::GetAttributesResponsePrivate(
    GetAttributesQueueResponse * const q) : GetAttributesPrivate(q)
{

}

/**
 * @brief  Parse an SimpleDB GetAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetAttributesResponsePrivate::GetAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAttributesResponse"));
    /// @todo
}

} // namespace SimpleDB
} // namespace AWS
