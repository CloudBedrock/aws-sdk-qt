/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getblueprintsresponse.h"
#include "getblueprintsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  GetBlueprintsResponse
 *
 * @brief  Handles Lightsail GetBlueprints responses.
 *
 * @see    LightsailClient::getBlueprints
 */

/**
 * @brief  Constructs a new GetBlueprintsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBlueprintsResponse::GetBlueprintsResponse(
        const GetBlueprintsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetBlueprintsResponsePrivate(this), parent)
{
    setRequest(new GetBlueprintsRequest(request));
    setReply(reply);
}

const GetBlueprintsRequest * GetBlueprintsResponse::request() const
{
    Q_D(const GetBlueprintsResponse);
    return static_cast<const GetBlueprintsRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetBlueprints response.
 *
 * @param  response  Response to parse.
 */
void GetBlueprintsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetBlueprintsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBlueprintsResponsePrivate
 *
 * @brief  Private implementation for GetBlueprintsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBlueprintsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBlueprintsResponse instance.
 */
GetBlueprintsResponsePrivate::GetBlueprintsResponsePrivate(
    GetBlueprintsResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetBlueprintsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBlueprintsResponsePrivate::parseGetBlueprintsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBlueprintsResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
