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

#include "encryptresponse.h"
#include "encryptresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KMS {

/**
 * @class  EncryptResponse
 *
 * @brief  Handles KMS Encrypt responses.
 *
 * @see    KMSClient::encrypt
 */

/**
 * @brief  Constructs a new EncryptResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EncryptResponse::EncryptResponse(
        const EncryptRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EncryptResponse(new EncryptResponsePrivate(this), parent)
{
    setRequest(new EncryptRequest(request));
    setReply(reply);
}

const EncryptRequest * EncryptResponse::request() const
{
    Q_D(const EncryptResponse);
    return static_cast<const EncryptRequest *>(d->request);
}

/**
 * @brief  Parse a KMS Encrypt response.
 *
 * @param  response  Response to parse.
 */
void EncryptResponse::parseSuccess(QIODevice &response)
{
    Q_D(EncryptResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  EncryptResponsePrivate
 *
 * @brief  Private implementation for EncryptResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EncryptResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EncryptResponse instance.
 */
EncryptResponsePrivate::EncryptResponsePrivate(
    EncryptResponse * const q) : KMSResponsePrivate(q)
{

}

/**
 * @brief  Parse an KMS EncryptResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void EncryptResponsePrivate::parseEncryptResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EncryptResponse"));
    /// @todo
}

} // namespace KMS
} // namespace QtAws
