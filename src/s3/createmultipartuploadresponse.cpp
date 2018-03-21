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

#include "createmultipartuploadresponse.h"
#include "createmultipartuploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  CreateMultipartUploadResponse
 *
 * @brief  Handles S3 CreateMultipartUpload responses.
 *
 * @see    S3Client::createMultipartUpload
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateMultipartUploadResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new CreateMultipartUploadResponsePrivate(this), parent)
{
    setRequest(new CreateMultipartUploadRequest(request));
    setReply(reply);
}

const CreateMultipartUploadRequest * CreateMultipartUploadResponse::request() const
{
    Q_D(const CreateMultipartUploadResponse);
    return static_cast<const CreateMultipartUploadRequest *>(d->request);
}

/**
 * @brief  Parse a S3 CreateMultipartUpload response.
 *
 * @param  response  Response to parse.
 */
void CreateMultipartUploadResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateMultipartUploadResponsePrivate
 *
 * @brief  Private implementation for CreateMultipartUploadResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateMultipartUploadResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateMultipartUploadResponse instance.
 */
CreateMultipartUploadResponsePrivate::CreateMultipartUploadResponsePrivate(
    CreateMultipartUploadQueueResponse * const q) : CreateMultipartUploadPrivate(q)
{

}

/**
 * @brief  Parse an S3 CreateMultipartUploadResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateMultipartUploadResponsePrivate::CreateMultipartUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMultipartUploadResponse"));
    /// @todo
}
