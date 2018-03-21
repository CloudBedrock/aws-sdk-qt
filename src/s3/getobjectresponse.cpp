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

#include "getobjectresponse.h"
#include "getobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  GetObjectResponse
 *
 * @brief  Handles S3 GetObject responses.
 *
 * @see    S3Client::getObject
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetObjectResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetObjectResponsePrivate(this), parent)
{
    setRequest(new GetObjectRequest(request));
    setReply(reply);
}

const GetObjectRequest * GetObjectResponse::request() const
{
    Q_D(const GetObjectResponse);
    return static_cast<const GetObjectRequest *>(d->request);
}

/**
 * @brief  Parse a S3 GetObject response.
 *
 * @param  response  Response to parse.
 */
void GetObjectResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetObjectResponsePrivate
 *
 * @brief  Private implementation for GetObjectResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetObjectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetObjectResponse instance.
 */
GetObjectResponsePrivate::GetObjectResponsePrivate(
    GetObjectQueueResponse * const q) : GetObjectPrivate(q)
{

}

/**
 * @brief  Parse an S3 GetObjectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetObjectResponsePrivate::GetObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetObjectResponse"));
    /// @todo
}
