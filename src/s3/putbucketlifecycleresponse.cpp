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

#include "putbucketlifecycleresponse.h"
#include "putbucketlifecycleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  PutBucketLifecycleResponse
 *
 * @brief  Handles S3 PutBucketLifecycle responses.
 *
 * @see    S3Client::putBucketLifecycle
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutBucketLifecycleResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketLifecycleResponsePrivate(this), parent)
{
    setRequest(new PutBucketLifecycleRequest(request));
    setReply(reply);
}

const PutBucketLifecycleRequest * PutBucketLifecycleResponse::request() const
{
    Q_D(const PutBucketLifecycleResponse);
    return static_cast<const PutBucketLifecycleRequest *>(d->request);
}

/**
 * @brief  Parse a S3 PutBucketLifecycle response.
 *
 * @param  response  Response to parse.
 */
void PutBucketLifecycleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutBucketLifecycleResponsePrivate
 *
 * @brief  Private implementation for PutBucketLifecycleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketLifecycleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutBucketLifecycleResponse instance.
 */
PutBucketLifecycleResponsePrivate::PutBucketLifecycleResponsePrivate(
    PutBucketLifecycleQueueResponse * const q) : PutBucketLifecyclePrivate(q)
{

}

/**
 * @brief  Parse an S3 PutBucketLifecycleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutBucketLifecycleResponsePrivate::PutBucketLifecycleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketLifecycleResponse"));
    /// @todo
}
