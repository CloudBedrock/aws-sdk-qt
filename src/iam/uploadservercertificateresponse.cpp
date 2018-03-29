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

#include "uploadservercertificateresponse.h"
#include "uploadservercertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  UploadServerCertificateResponse
 *
 * @brief  Handles IAM UploadServerCertificate responses.
 *
 * @see    IAMClient::uploadServerCertificate
 */

/**
 * @brief  Constructs a new UploadServerCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UploadServerCertificateResponse::UploadServerCertificateResponse(
        const UploadServerCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UploadServerCertificateResponse(new UploadServerCertificateResponsePrivate(this), parent)
{
    setRequest(new UploadServerCertificateRequest(request));
    setReply(reply);
}

const UploadServerCertificateRequest * UploadServerCertificateResponse::request() const
{
    Q_D(const UploadServerCertificateResponse);
    return static_cast<const UploadServerCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a IAM UploadServerCertificate response.
 *
 * @param  response  Response to parse.
 */
void UploadServerCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(UploadServerCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UploadServerCertificateResponsePrivate
 *
 * @brief  Private implementation for UploadServerCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UploadServerCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UploadServerCertificateResponse instance.
 */
UploadServerCertificateResponsePrivate::UploadServerCertificateResponsePrivate(
    UploadServerCertificateResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM UploadServerCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UploadServerCertificateResponsePrivate::parseUploadServerCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UploadServerCertificateResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
