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

#include "deletebucketencryptionresponse.h"
#include "deletebucketencryptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  DeleteBucketEncryptionResponse
 *
 * @brief  Handles S3 DeleteBucketEncryption responses.
 *
 * @see    S3Client::deleteBucketEncryption
 */

/**
 * @brief  Constructs a new DeleteBucketEncryptionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBucketEncryptionResponse::DeleteBucketEncryptionResponse(
        const DeleteBucketEncryptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteBucketEncryptionResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketEncryptionRequest(request));
    setReply(reply);
}

const DeleteBucketEncryptionRequest * DeleteBucketEncryptionResponse::request() const
{
    Q_D(const DeleteBucketEncryptionResponse);
    return static_cast<const DeleteBucketEncryptionRequest *>(d->request);
}

/**
 * @brief  Parse a S3 DeleteBucketEncryption response.
 *
 * @param  response  Response to parse.
 */
void DeleteBucketEncryptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteBucketEncryptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteBucketEncryptionResponsePrivate
 *
 * @brief  Private implementation for DeleteBucketEncryptionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBucketEncryptionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteBucketEncryptionResponse instance.
 */
DeleteBucketEncryptionResponsePrivate::DeleteBucketEncryptionResponsePrivate(
    DeleteBucketEncryptionResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 DeleteBucketEncryptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteBucketEncryptionResponsePrivate::parseDeleteBucketEncryptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketEncryptionResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
