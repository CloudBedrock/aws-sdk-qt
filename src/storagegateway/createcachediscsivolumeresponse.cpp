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

#include "createcachediscsivolumeresponse.h"
#include "createcachediscsivolumeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  CreateCachediSCSIVolumeResponse
 *
 * @brief  Handles StorageGateway CreateCachediSCSIVolume responses.
 *
 * @see    StorageGatewayClient::createCachediSCSIVolume
 */

/**
 * @brief  Constructs a new CreateCachediSCSIVolumeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCachediSCSIVolumeResponse::CreateCachediSCSIVolumeResponse(
        const CreateCachediSCSIVolumeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new CreateCachediSCSIVolumeResponsePrivate(this), parent)
{
    setRequest(new CreateCachediSCSIVolumeRequest(request));
    setReply(reply);
}

const CreateCachediSCSIVolumeRequest * CreateCachediSCSIVolumeResponse::request() const
{
    Q_D(const CreateCachediSCSIVolumeResponse);
    return static_cast<const CreateCachediSCSIVolumeRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway CreateCachediSCSIVolume response.
 *
 * @param  response  Response to parse.
 */
void CreateCachediSCSIVolumeResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateCachediSCSIVolumeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateCachediSCSIVolumeResponsePrivate
 *
 * @brief  Private implementation for CreateCachediSCSIVolumeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCachediSCSIVolumeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateCachediSCSIVolumeResponse instance.
 */
CreateCachediSCSIVolumeResponsePrivate::CreateCachediSCSIVolumeResponsePrivate(
    CreateCachediSCSIVolumeResponse * const q) : StorageGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway CreateCachediSCSIVolumeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateCachediSCSIVolumeResponsePrivate::parseCreateCachediSCSIVolumeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCachediSCSIVolumeResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
