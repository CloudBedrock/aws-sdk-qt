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

#include "putbuckettaggingresponse.h"
#include "putbuckettaggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketTaggingResponse
 *
 * \brief The PutBucketTaggingResponse class encapsulates S3 PutBucketTagging responses.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::putBucketTagging
 */

/*!
 * @brief  Constructs a new PutBucketTaggingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutBucketTaggingResponse::PutBucketTaggingResponse(
        const PutBucketTaggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketTaggingResponsePrivate(this), parent)
{
    setRequest(new PutBucketTaggingRequest(request));
    setReply(reply);
}

const PutBucketTaggingRequest * PutBucketTaggingResponse::request() const
{
    Q_D(const PutBucketTaggingResponse);
    return static_cast<const PutBucketTaggingRequest *>(d->request);
}

/*!
 * @brief  Parse a S3 PutBucketTagging response.
 *
 * @param  response  Response to parse.
 */
void PutBucketTaggingResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutBucketTaggingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class PutBucketTaggingResponsePrivate
 *
 * \brief Private implementation for PutBucketTaggingResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutBucketTaggingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutBucketTaggingResponse instance.
 */
PutBucketTaggingResponsePrivate::PutBucketTaggingResponsePrivate(
    PutBucketTaggingResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an S3 PutBucketTaggingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutBucketTaggingResponsePrivate::parsePutBucketTaggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketTaggingResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
