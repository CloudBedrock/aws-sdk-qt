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

#include "getbucketaclresponse.h"
#include "getbucketaclresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  GetBucketAclResponse
 *
 * @brief  Handles S3 GetBucketAcl responses.
 *
 * @see    S3Client::getBucketAcl
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBucketAclResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketAclResponsePrivate(this), parent)
{
    setRequest(new GetBucketAclRequest(request));
    setReply(reply);
}

const GetBucketAclRequest * GetBucketAclResponse::request() const
{
    Q_D(const GetBucketAclResponse);
    return static_cast<const GetBucketAclRequest *>(d->request);
}

/**
 * @brief  Parse a S3 GetBucketAcl response.
 *
 * @param  response  Response to parse.
 */
void GetBucketAclResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBucketAclResponsePrivate
 *
 * @brief  Private implementation for GetBucketAclResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketAclResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBucketAclResponse instance.
 */
GetBucketAclResponsePrivate::GetBucketAclResponsePrivate(
    GetBucketAclQueueResponse * const q) : GetBucketAclPrivate(q)
{

}

/**
 * @brief  Parse an S3 GetBucketAclResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBucketAclResponsePrivate::GetBucketAclResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketAclResponse"));
    /// @todo
}

} // namespace S3
} // namespace AWS
