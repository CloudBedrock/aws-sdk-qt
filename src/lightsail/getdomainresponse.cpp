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

#include "getdomainresponse.h"
#include "getdomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  GetDomainResponse
 *
 * @brief  Handles Lightsail GetDomain responses.
 *
 * @see    LightsailClient::getDomain
 */

/**
 * @brief  Constructs a new GetDomainResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDomainResponse::GetDomainResponse(
        const GetDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetDomainResponsePrivate(this), parent)
{
    setRequest(new GetDomainRequest(request));
    setReply(reply);
}

const GetDomainRequest * GetDomainResponse::request() const
{
    Q_D(const GetDomainResponse);
    return static_cast<const GetDomainRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetDomain response.
 *
 * @param  response  Response to parse.
 */
void GetDomainResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDomainResponsePrivate
 *
 * @brief  Private implementation for GetDomainResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDomainResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDomainResponse instance.
 */
GetDomainResponsePrivate::GetDomainResponsePrivate(
    GetDomainResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetDomainResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDomainResponsePrivate::parseGetDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDomainResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
