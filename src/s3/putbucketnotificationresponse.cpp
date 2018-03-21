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

#include "putbucketnotificationresponse.h"
#include "putbucketnotificationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  PutBucketNotificationResponse
 *
 * @brief  Handles S3 PutBucketNotification responses.
 *
 * @see    S3Client::putBucketNotification
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutBucketNotificationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketNotificationResponsePrivate(this), parent)
{
    setRequest(new PutBucketNotificationRequest(request));
    setReply(reply);
}

const PutBucketNotificationRequest * PutBucketNotificationResponse::request() const
{
    Q_D(const PutBucketNotificationResponse);
    return static_cast<const PutBucketNotificationRequest *>(d->request);
}

/**
 * @brief  Parse a S3 PutBucketNotification response.
 *
 * @param  response  Response to parse.
 */
void PutBucketNotificationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutBucketNotificationResponsePrivate
 *
 * @brief  Private implementation for PutBucketNotificationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketNotificationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutBucketNotificationResponse instance.
 */
PutBucketNotificationResponsePrivate::PutBucketNotificationResponsePrivate(
    PutBucketNotificationQueueResponse * const q) : PutBucketNotificationPrivate(q)
{

}

/**
 * @brief  Parse an S3 PutBucketNotificationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutBucketNotificationResponsePrivate::PutBucketNotificationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketNotificationResponse"));
    /// @todo
}

} // namespace S3
} // namespace AWS
