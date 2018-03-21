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

#include "installtoremoteaccesssessionresponse.h"
#include "installtoremoteaccesssessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DeviceFarm {

/**
 * @class  InstallToRemoteAccessSessionResponse
 *
 * @brief  Handles DeviceFarm InstallToRemoteAccessSession responses.
 *
 * @see    DeviceFarmClient::installToRemoteAccessSession
 */

/**
 * @brief  Constructs a new InstallToRemoteAccessSessionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
InstallToRemoteAccessSessionResponse::InstallToRemoteAccessSessionResponse(
        const InstallToRemoteAccessSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new InstallToRemoteAccessSessionResponsePrivate(this), parent)
{
    setRequest(new InstallToRemoteAccessSessionRequest(request));
    setReply(reply);
}

const InstallToRemoteAccessSessionRequest * InstallToRemoteAccessSessionResponse::request() const
{
    Q_D(const InstallToRemoteAccessSessionResponse);
    return static_cast<const InstallToRemoteAccessSessionRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm InstallToRemoteAccessSession response.
 *
 * @param  response  Response to parse.
 */
void InstallToRemoteAccessSessionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  InstallToRemoteAccessSessionResponsePrivate
 *
 * @brief  Private implementation for InstallToRemoteAccessSessionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new InstallToRemoteAccessSessionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public InstallToRemoteAccessSessionResponse instance.
 */
InstallToRemoteAccessSessionResponsePrivate::InstallToRemoteAccessSessionResponsePrivate(
    InstallToRemoteAccessSessionQueueResponse * const q) : InstallToRemoteAccessSessionPrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm InstallToRemoteAccessSessionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void InstallToRemoteAccessSessionResponsePrivate::InstallToRemoteAccessSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InstallToRemoteAccessSessionResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace AWS
