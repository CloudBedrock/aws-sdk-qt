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

#include "getstaticipsresponse.h"
#include "getstaticipsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  GetStaticIpsResponse
 *
 * @brief  Handles Lightsail GetStaticIps responses.
 *
 * @see    LightsailClient::getStaticIps
 */

/**
 * @brief  Constructs a new GetStaticIpsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetStaticIpsResponse::GetStaticIpsResponse(
        const GetStaticIpsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetStaticIpsResponsePrivate(this), parent)
{
    setRequest(new GetStaticIpsRequest(request));
    setReply(reply);
}

const GetStaticIpsRequest * GetStaticIpsResponse::request() const
{
    Q_D(const GetStaticIpsResponse);
    return static_cast<const GetStaticIpsRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetStaticIps response.
 *
 * @param  response  Response to parse.
 */
void GetStaticIpsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetStaticIpsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetStaticIpsResponsePrivate
 *
 * @brief  Private implementation for GetStaticIpsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetStaticIpsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetStaticIpsResponse instance.
 */
GetStaticIpsResponsePrivate::GetStaticIpsResponsePrivate(
    GetStaticIpsResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetStaticIpsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetStaticIpsResponsePrivate::GetStaticIpsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStaticIpsResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
