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

#include "getcloudfrontoriginaccessidentityresponse.h"
#include "getcloudfrontoriginaccessidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFront {

/**
 * @class  GetCloudFrontOriginAccessIdentityResponse
 *
 * @brief  Handles CloudFront GetCloudFrontOriginAccessIdentity responses.
 *
 * @see    CloudFrontClient::getCloudFrontOriginAccessIdentity
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCloudFrontOriginAccessIdentityResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetCloudFrontOriginAccessIdentityResponsePrivate(this), parent)
{
    setRequest(new GetCloudFrontOriginAccessIdentityRequest(request));
    setReply(reply);
}

const GetCloudFrontOriginAccessIdentityRequest * GetCloudFrontOriginAccessIdentityResponse::request() const
{
    Q_D(const GetCloudFrontOriginAccessIdentityResponse);
    return static_cast<const GetCloudFrontOriginAccessIdentityRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront GetCloudFrontOriginAccessIdentity response.
 *
 * @param  response  Response to parse.
 */
void GetCloudFrontOriginAccessIdentityResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCloudFrontOriginAccessIdentityResponsePrivate
 *
 * @brief  Private implementation for GetCloudFrontOriginAccessIdentityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCloudFrontOriginAccessIdentityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCloudFrontOriginAccessIdentityResponse instance.
 */
GetCloudFrontOriginAccessIdentityResponsePrivate::GetCloudFrontOriginAccessIdentityResponsePrivate(
    GetCloudFrontOriginAccessIdentityQueueResponse * const q) : GetCloudFrontOriginAccessIdentityPrivate(q)
{

}

/**
 * @brief  Parse an CloudFront GetCloudFrontOriginAccessIdentityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCloudFrontOriginAccessIdentityResponsePrivate::GetCloudFrontOriginAccessIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCloudFrontOriginAccessIdentityResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace AWS
