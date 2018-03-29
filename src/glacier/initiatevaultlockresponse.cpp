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

#include "initiatevaultlockresponse.h"
#include "initiatevaultlockresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glacier {

/**
 * @class  InitiateVaultLockResponse
 *
 * @brief  Handles Glacier InitiateVaultLock responses.
 *
 * @see    GlacierClient::initiateVaultLock
 */

/**
 * @brief  Constructs a new InitiateVaultLockResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
InitiateVaultLockResponse::InitiateVaultLockResponse(
        const InitiateVaultLockRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new InitiateVaultLockResponsePrivate(this), parent)
{
    setRequest(new InitiateVaultLockRequest(request));
    setReply(reply);
}

const InitiateVaultLockRequest * InitiateVaultLockResponse::request() const
{
    Q_D(const InitiateVaultLockResponse);
    return static_cast<const InitiateVaultLockRequest *>(d->request);
}

/**
 * @brief  Parse a Glacier InitiateVaultLock response.
 *
 * @param  response  Response to parse.
 */
void InitiateVaultLockResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  InitiateVaultLockResponsePrivate
 *
 * @brief  Private implementation for InitiateVaultLockResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new InitiateVaultLockResponsePrivate object.
 *
 * @param  q  Pointer to this object's public InitiateVaultLockResponse instance.
 */
InitiateVaultLockResponsePrivate::InitiateVaultLockResponsePrivate(
    InitiateVaultLockQueueResponse * const q) : InitiateVaultLockPrivate(q)
{

}

/**
 * @brief  Parse an Glacier InitiateVaultLockResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void InitiateVaultLockResponsePrivate::InitiateVaultLockResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InitiateVaultLockResponse"));
    /// @todo
}

} // namespace Glacier
} // namespace QtAws
