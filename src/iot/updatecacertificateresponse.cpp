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

#include "updatecacertificateresponse.h"
#include "updatecacertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  UpdateCACertificateResponse
 *
 * @brief  Handles IoT UpdateCACertificate responses.
 *
 * @see    IoTClient::updateCACertificate
 */

/**
 * @brief  Constructs a new UpdateCACertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateCACertificateResponse::UpdateCACertificateResponse(
        const UpdateCACertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new UpdateCACertificateResponsePrivate(this), parent)
{
    setRequest(new UpdateCACertificateRequest(request));
    setReply(reply);
}

const UpdateCACertificateRequest * UpdateCACertificateResponse::request() const
{
    Q_D(const UpdateCACertificateResponse);
    return static_cast<const UpdateCACertificateRequest *>(d->request);
}

/**
 * @brief  Parse a IoT UpdateCACertificate response.
 *
 * @param  response  Response to parse.
 */
void UpdateCACertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateCACertificateResponsePrivate
 *
 * @brief  Private implementation for UpdateCACertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateCACertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateCACertificateResponse instance.
 */
UpdateCACertificateResponsePrivate::UpdateCACertificateResponsePrivate(
    UpdateCACertificateQueueResponse * const q) : UpdateCACertificatePrivate(q)
{

}

/**
 * @brief  Parse an IoT UpdateCACertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateCACertificateResponsePrivate::UpdateCACertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCACertificateResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS
