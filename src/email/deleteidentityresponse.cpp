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

#include "deleteidentityresponse.h"
#include "deleteidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/**
 * @class  DeleteIdentityResponse
 *
 * @brief  Handles SES DeleteIdentity responses.
 *
 * @see    SESClient::deleteIdentity
 */

/**
 * @brief  Constructs a new DeleteIdentityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteIdentityResponse::DeleteIdentityResponse(
        const DeleteIdentityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new DeleteIdentityResponsePrivate(this), parent)
{
    setRequest(new DeleteIdentityRequest(request));
    setReply(reply);
}

const DeleteIdentityRequest * DeleteIdentityResponse::request() const
{
    Q_D(const DeleteIdentityResponse);
    return static_cast<const DeleteIdentityRequest *>(d->request);
}

/**
 * @brief  Parse a SES DeleteIdentity response.
 *
 * @param  response  Response to parse.
 */
void DeleteIdentityResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteIdentityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteIdentityResponsePrivate
 *
 * @brief  Private implementation for DeleteIdentityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteIdentityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteIdentityResponse instance.
 */
DeleteIdentityResponsePrivate::DeleteIdentityResponsePrivate(
    DeleteIdentityResponse * const q) : SESResponsePrivate(q)
{

}

/**
 * @brief  Parse an SES DeleteIdentityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteIdentityResponsePrivate::parseDeleteIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIdentityResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
