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

#include "getkeypairsresponse.h"
#include "getkeypairsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  GetKeyPairsResponse
 *
 * @brief  Handles Lightsail GetKeyPairs responses.
 *
 * @see    LightsailClient::getKeyPairs
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetKeyPairsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetKeyPairsResponsePrivate(this), parent)
{
    setRequest(new GetKeyPairsRequest(request));
    setReply(reply);
}

const GetKeyPairsRequest * GetKeyPairsResponse::request() const
{
    Q_D(const GetKeyPairsResponse);
    return static_cast<const GetKeyPairsRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetKeyPairs response.
 *
 * @param  response  Response to parse.
 */
void GetKeyPairsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetKeyPairsResponsePrivate
 *
 * @brief  Private implementation for GetKeyPairsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetKeyPairsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetKeyPairsResponse instance.
 */
GetKeyPairsResponsePrivate::GetKeyPairsResponsePrivate(
    GetKeyPairsQueueResponse * const q) : GetKeyPairsPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetKeyPairsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetKeyPairsResponsePrivate::GetKeyPairsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetKeyPairsResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace AWS
