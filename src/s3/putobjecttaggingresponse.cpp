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

#include "putobjecttaggingresponse.h"
#include "putobjecttaggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  PutObjectTaggingResponse
 *
 * @brief  Handles S3 PutObjectTagging responses.
 *
 * @see    S3Client::putObjectTagging
 */

/**
 * @brief  Constructs a new PutObjectTaggingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutObjectTaggingResponse::PutObjectTaggingResponse(
        const PutObjectTaggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PutObjectTaggingResponse(new PutObjectTaggingResponsePrivate(this), parent)
{
    setRequest(new PutObjectTaggingRequest(request));
    setReply(reply);
}

const PutObjectTaggingRequest * PutObjectTaggingResponse::request() const
{
    Q_D(const PutObjectTaggingResponse);
    return static_cast<const PutObjectTaggingRequest *>(d->request);
}

/**
 * @brief  Parse a S3 PutObjectTagging response.
 *
 * @param  response  Response to parse.
 */
void PutObjectTaggingResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutObjectTaggingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutObjectTaggingResponsePrivate
 *
 * @brief  Private implementation for PutObjectTaggingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutObjectTaggingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutObjectTaggingResponse instance.
 */
PutObjectTaggingResponsePrivate::PutObjectTaggingResponsePrivate(
    PutObjectTaggingResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 PutObjectTaggingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutObjectTaggingResponsePrivate::parsePutObjectTaggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutObjectTaggingResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
