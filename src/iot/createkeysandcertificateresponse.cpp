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

#include "createkeysandcertificateresponse.h"
#include "createkeysandcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  CreateKeysAndCertificateResponse
 *
 * @brief  Handles IoT CreateKeysAndCertificate responses.
 *
 * @see    IoTClient::createKeysAndCertificate
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateKeysAndCertificateResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new CreateKeysAndCertificateResponsePrivate(this), parent)
{
    setRequest(new CreateKeysAndCertificateRequest(request));
    setReply(reply);
}

const CreateKeysAndCertificateRequest * CreateKeysAndCertificateResponse::request() const
{
    Q_D(const CreateKeysAndCertificateResponse);
    return static_cast<const CreateKeysAndCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a IoT CreateKeysAndCertificate response.
 *
 * @param  response  Response to parse.
 */
void CreateKeysAndCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateKeysAndCertificateResponsePrivate
 *
 * @brief  Private implementation for CreateKeysAndCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateKeysAndCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateKeysAndCertificateResponse instance.
 */
CreateKeysAndCertificateResponsePrivate::CreateKeysAndCertificateResponsePrivate(
    CreateKeysAndCertificateQueueResponse * const q) : CreateKeysAndCertificatePrivate(q)
{

}

/**
 * @brief  Parse an IoT CreateKeysAndCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateKeysAndCertificateResponsePrivate::CreateKeysAndCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateKeysAndCertificateResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS
