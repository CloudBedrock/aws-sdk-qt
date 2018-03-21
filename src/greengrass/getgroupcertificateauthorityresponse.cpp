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

#include "getgroupcertificateauthorityresponse.h"
#include "getgroupcertificateauthorityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  GetGroupCertificateAuthorityResponse
 *
 * @brief  Handles Greengrass GetGroupCertificateAuthority responses.
 *
 * @see    GreengrassClient::getGroupCertificateAuthority
 */

/**
 * @brief  Constructs a new GetGroupCertificateAuthorityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetGroupCertificateAuthorityResponse::GetGroupCertificateAuthorityResponse(
        const GetGroupCertificateAuthorityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetGroupCertificateAuthorityResponsePrivate(this), parent)
{
    setRequest(new GetGroupCertificateAuthorityRequest(request));
    setReply(reply);
}

const GetGroupCertificateAuthorityRequest * GetGroupCertificateAuthorityResponse::request() const
{
    Q_D(const GetGroupCertificateAuthorityResponse);
    return static_cast<const GetGroupCertificateAuthorityRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass GetGroupCertificateAuthority response.
 *
 * @param  response  Response to parse.
 */
void GetGroupCertificateAuthorityResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetGroupCertificateAuthorityResponsePrivate
 *
 * @brief  Private implementation for GetGroupCertificateAuthorityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetGroupCertificateAuthorityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetGroupCertificateAuthorityResponse instance.
 */
GetGroupCertificateAuthorityResponsePrivate::GetGroupCertificateAuthorityResponsePrivate(
    GetGroupCertificateAuthorityQueueResponse * const q) : GetGroupCertificateAuthorityPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass GetGroupCertificateAuthorityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetGroupCertificateAuthorityResponsePrivate::GetGroupCertificateAuthorityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGroupCertificateAuthorityResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace AWS
