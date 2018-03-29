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

#include "getsnowballusageresponse.h"
#include "getsnowballusageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/**
 * @class  GetSnowballUsageResponse
 *
 * @brief  Handles Snowball GetSnowballUsage responses.
 *
 * @see    SnowballClient::getSnowballUsage
 */

/**
 * @brief  Constructs a new GetSnowballUsageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSnowballUsageResponse::GetSnowballUsageResponse(
        const GetSnowballUsageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new GetSnowballUsageResponsePrivate(this), parent)
{
    setRequest(new GetSnowballUsageRequest(request));
    setReply(reply);
}

const GetSnowballUsageRequest * GetSnowballUsageResponse::request() const
{
    Q_D(const GetSnowballUsageResponse);
    return static_cast<const GetSnowballUsageRequest *>(d->request);
}

/**
 * @brief  Parse a Snowball GetSnowballUsage response.
 *
 * @param  response  Response to parse.
 */
void GetSnowballUsageResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetSnowballUsageResponsePrivate
 *
 * @brief  Private implementation for GetSnowballUsageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSnowballUsageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSnowballUsageResponse instance.
 */
GetSnowballUsageResponsePrivate::GetSnowballUsageResponsePrivate(
    GetSnowballUsageResponse * const q) : SnowballResponsePrivate(q)
{

}

/**
 * @brief  Parse an Snowball GetSnowballUsageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSnowballUsageResponsePrivate::GetSnowballUsageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSnowballUsageResponse"));
    /// @todo
}

} // namespace Snowball
} // namespace QtAws
