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

#include "putbucketaclresponse.h"
#include "putbucketaclresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  PutBucketAclResponse
 *
 * @brief  Handles S3 PutBucketAcl responses.
 *
 * @see    S3Client::putBucketAcl
 */

/**
 * @brief  Constructs a new PutBucketAclResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutBucketAclResponse::PutBucketAclResponse(
        const PutBucketAclRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketAclResponsePrivate(this), parent)
{
    setRequest(new PutBucketAclRequest(request));
    setReply(reply);
}

const PutBucketAclRequest * PutBucketAclResponse::request() const
{
    Q_D(const PutBucketAclResponse);
    return static_cast<const PutBucketAclRequest *>(d->request);
}

/**
 * @brief  Parse a S3 PutBucketAcl response.
 *
 * @param  response  Response to parse.
 */
void PutBucketAclResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutBucketAclResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutBucketAclResponsePrivate
 *
 * @brief  Private implementation for PutBucketAclResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketAclResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutBucketAclResponse instance.
 */
PutBucketAclResponsePrivate::PutBucketAclResponsePrivate(
    PutBucketAclResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 PutBucketAclResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutBucketAclResponsePrivate::PutBucketAclResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketAclResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
