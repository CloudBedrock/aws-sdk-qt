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

#include "creategroupcertificateauthorityresponse.h"
#include "creategroupcertificateauthorityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  CreateGroupCertificateAuthorityResponse
 *
 * @brief  Handles Greengrass CreateGroupCertificateAuthority responses.
 *
 * @see    GreengrassClient::createGroupCertificateAuthority
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateGroupCertificateAuthorityResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateGroupCertificateAuthorityResponsePrivate(this), parent)
{
    setRequest(new CreateGroupCertificateAuthorityRequest(request));
    setReply(reply);
}

const CreateGroupCertificateAuthorityRequest * CreateGroupCertificateAuthorityResponse::request() const
{
    Q_D(const CreateGroupCertificateAuthorityResponse);
    return static_cast<const CreateGroupCertificateAuthorityRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass CreateGroupCertificateAuthority response.
 *
 * @param  response  Response to parse.
 */
void CreateGroupCertificateAuthorityResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateGroupCertificateAuthorityResponsePrivate
 *
 * @brief  Private implementation for CreateGroupCertificateAuthorityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateGroupCertificateAuthorityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateGroupCertificateAuthorityResponse instance.
 */
CreateGroupCertificateAuthorityResponsePrivate::CreateGroupCertificateAuthorityResponsePrivate(
    CreateGroupCertificateAuthorityQueueResponse * const q) : CreateGroupCertificateAuthorityPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass CreateGroupCertificateAuthorityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateGroupCertificateAuthorityResponsePrivate::CreateGroupCertificateAuthorityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateGroupCertificateAuthorityResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace AWS
