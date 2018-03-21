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

#include "resyncmfadeviceresponse.h"
#include "resyncmfadeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  ResyncMFADeviceResponse
 *
 * @brief  Handles IAM ResyncMFADevice responses.
 *
 * @see    IAMClient::resyncMFADevice
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ResyncMFADeviceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new ResyncMFADeviceResponsePrivate(this), parent)
{
    setRequest(new ResyncMFADeviceRequest(request));
    setReply(reply);
}

const ResyncMFADeviceRequest * ResyncMFADeviceResponse::request() const
{
    Q_D(const ResyncMFADeviceResponse);
    return static_cast<const ResyncMFADeviceRequest *>(d->request);
}

/**
 * @brief  Parse a IAM ResyncMFADevice response.
 *
 * @param  response  Response to parse.
 */
void ResyncMFADeviceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ResyncMFADeviceResponsePrivate
 *
 * @brief  Private implementation for ResyncMFADeviceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResyncMFADeviceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ResyncMFADeviceResponse instance.
 */
ResyncMFADeviceResponsePrivate::ResyncMFADeviceResponsePrivate(
    ResyncMFADeviceQueueResponse * const q) : ResyncMFADevicePrivate(q)
{

}

/**
 * @brief  Parse an IAM ResyncMFADeviceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ResyncMFADeviceResponsePrivate::ResyncMFADeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResyncMFADeviceResponse"));
    /// @todo
}
