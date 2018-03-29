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

#include "generatedatakeywithoutplaintextresponse.h"
#include "generatedatakeywithoutplaintextresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KMS {

/**
 * @class  GenerateDataKeyWithoutPlaintextResponse
 *
 * @brief  Handles KMS GenerateDataKeyWithoutPlaintext responses.
 *
 * @see    KMSClient::generateDataKeyWithoutPlaintext
 */

/**
 * @brief  Constructs a new GenerateDataKeyWithoutPlaintextResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GenerateDataKeyWithoutPlaintextResponse::GenerateDataKeyWithoutPlaintextResponse(
        const GenerateDataKeyWithoutPlaintextRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new GenerateDataKeyWithoutPlaintextResponsePrivate(this), parent)
{
    setRequest(new GenerateDataKeyWithoutPlaintextRequest(request));
    setReply(reply);
}

const GenerateDataKeyWithoutPlaintextRequest * GenerateDataKeyWithoutPlaintextResponse::request() const
{
    Q_D(const GenerateDataKeyWithoutPlaintextResponse);
    return static_cast<const GenerateDataKeyWithoutPlaintextRequest *>(d->request);
}

/**
 * @brief  Parse a KMS GenerateDataKeyWithoutPlaintext response.
 *
 * @param  response  Response to parse.
 */
void GenerateDataKeyWithoutPlaintextResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GenerateDataKeyWithoutPlaintextResponsePrivate
 *
 * @brief  Private implementation for GenerateDataKeyWithoutPlaintextResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GenerateDataKeyWithoutPlaintextResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GenerateDataKeyWithoutPlaintextResponse instance.
 */
GenerateDataKeyWithoutPlaintextResponsePrivate::GenerateDataKeyWithoutPlaintextResponsePrivate(
    GenerateDataKeyWithoutPlaintextResponse * const q) : KMSResponsePrivate(q)
{

}

/**
 * @brief  Parse an KMS GenerateDataKeyWithoutPlaintextResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GenerateDataKeyWithoutPlaintextResponsePrivate::GenerateDataKeyWithoutPlaintextResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GenerateDataKeyWithoutPlaintextResponse"));
    /// @todo
}

} // namespace KMS
} // namespace QtAws
