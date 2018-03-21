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

#include "getdisksresponse.h"
#include "getdisksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  GetDisksResponse
 *
 * @brief  Handles Lightsail GetDisks responses.
 *
 * @see    LightsailClient::getDisks
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDisksResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetDisksResponsePrivate(this), parent)
{
    setRequest(new GetDisksRequest(request));
    setReply(reply);
}

const GetDisksRequest * GetDisksResponse::request() const
{
    Q_D(const GetDisksResponse);
    return static_cast<const GetDisksRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetDisks response.
 *
 * @param  response  Response to parse.
 */
void GetDisksResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDisksResponsePrivate
 *
 * @brief  Private implementation for GetDisksResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDisksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDisksResponse instance.
 */
GetDisksResponsePrivate::GetDisksResponsePrivate(
    GetDisksQueueResponse * const q) : GetDisksPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetDisksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDisksResponsePrivate::GetDisksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDisksResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace AWS
