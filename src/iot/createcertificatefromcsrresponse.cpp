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

#include "createcertificatefromcsrresponse.h"
#include "createcertificatefromcsrresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  CreateCertificateFromCsrResponse
 *
 * @brief  Handles IoT CreateCertificateFromCsr responses.
 *
 * @see    IoTClient::createCertificateFromCsr
 */

/**
 * @brief  Constructs a new CreateCertificateFromCsrResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCertificateFromCsrResponse::CreateCertificateFromCsrResponse(
        const CreateCertificateFromCsrRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new CreateCertificateFromCsrResponsePrivate(this), parent)
{
    setRequest(new CreateCertificateFromCsrRequest(request));
    setReply(reply);
}

const CreateCertificateFromCsrRequest * CreateCertificateFromCsrResponse::request() const
{
    Q_D(const CreateCertificateFromCsrResponse);
    return static_cast<const CreateCertificateFromCsrRequest *>(d->request);
}

/**
 * @brief  Parse a IoT CreateCertificateFromCsr response.
 *
 * @param  response  Response to parse.
 */
void CreateCertificateFromCsrResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateCertificateFromCsrResponsePrivate
 *
 * @brief  Private implementation for CreateCertificateFromCsrResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCertificateFromCsrResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateCertificateFromCsrResponse instance.
 */
CreateCertificateFromCsrResponsePrivate::CreateCertificateFromCsrResponsePrivate(
    CreateCertificateFromCsrResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT CreateCertificateFromCsrResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateCertificateFromCsrResponsePrivate::CreateCertificateFromCsrResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCertificateFromCsrResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
