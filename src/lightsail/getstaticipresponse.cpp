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

#include "getstaticipresponse.h"
#include "getstaticipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  GetStaticIpResponse
 *
 * @brief  Handles Lightsail GetStaticIp responses.
 *
 * @see    LightsailClient::getStaticIp
 */

/**
 * @brief  Constructs a new GetStaticIpResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetStaticIpResponse::GetStaticIpResponse(
        const GetStaticIpRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetStaticIpResponsePrivate(this), parent)
{
    setRequest(new GetStaticIpRequest(request));
    setReply(reply);
}

const GetStaticIpRequest * GetStaticIpResponse::request() const
{
    Q_D(const GetStaticIpResponse);
    return static_cast<const GetStaticIpRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetStaticIp response.
 *
 * @param  response  Response to parse.
 */
void GetStaticIpResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetStaticIpResponsePrivate
 *
 * @brief  Private implementation for GetStaticIpResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetStaticIpResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetStaticIpResponse instance.
 */
GetStaticIpResponsePrivate::GetStaticIpResponsePrivate(
    GetStaticIpQueueResponse * const q) : GetStaticIpPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetStaticIpResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetStaticIpResponsePrivate::GetStaticIpResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStaticIpResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace AWS
