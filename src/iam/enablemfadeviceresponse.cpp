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

#include "enablemfadeviceresponse.h"
#include "enablemfadeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  EnableMFADeviceResponse
 *
 * @brief  Handles IAM EnableMFADevice responses.
 *
 * @see    IAMClient::enableMFADevice
 */

/**
 * @brief  Constructs a new EnableMFADeviceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnableMFADeviceResponse::EnableMFADeviceResponse(
        const EnableMFADeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EnableMFADeviceResponse(new EnableMFADeviceResponsePrivate(this), parent)
{
    setRequest(new EnableMFADeviceRequest(request));
    setReply(reply);
}

const EnableMFADeviceRequest * EnableMFADeviceResponse::request() const
{
    Q_D(const EnableMFADeviceResponse);
    return static_cast<const EnableMFADeviceRequest *>(d->request);
}

/**
 * @brief  Parse a IAM EnableMFADevice response.
 *
 * @param  response  Response to parse.
 */
void EnableMFADeviceResponse::parseSuccess(QIODevice &response)
{
    Q_D(EnableMFADeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  EnableMFADeviceResponsePrivate
 *
 * @brief  Private implementation for EnableMFADeviceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableMFADeviceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EnableMFADeviceResponse instance.
 */
EnableMFADeviceResponsePrivate::EnableMFADeviceResponsePrivate(
    EnableMFADeviceResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM EnableMFADeviceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void EnableMFADeviceResponsePrivate::parseEnableMFADeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableMFADeviceResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
