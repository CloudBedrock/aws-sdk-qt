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

#include "gettagkeysresponse.h"
#include "gettagkeysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ResourceGroupsTaggingAPI {

/**
 * @class  GetTagKeysResponse
 *
 * @brief  Handles ResourceGroupsTaggingAPI GetTagKeys responses.
 *
 * @see    ResourceGroupsTaggingAPIClient::getTagKeys
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetTagKeysResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsTaggingAPIResponse(new GetTagKeysResponsePrivate(this), parent)
{
    setRequest(new GetTagKeysRequest(request));
    setReply(reply);
}

const GetTagKeysRequest * GetTagKeysResponse::request() const
{
    Q_D(const GetTagKeysResponse);
    return static_cast<const GetTagKeysRequest *>(d->request);
}

/**
 * @brief  Parse a ResourceGroupsTaggingAPI GetTagKeys response.
 *
 * @param  response  Response to parse.
 */
void GetTagKeysResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetTagKeysResponsePrivate
 *
 * @brief  Private implementation for GetTagKeysResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTagKeysResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetTagKeysResponse instance.
 */
GetTagKeysResponsePrivate::GetTagKeysResponsePrivate(
    GetTagKeysQueueResponse * const q) : GetTagKeysPrivate(q)
{

}

/**
 * @brief  Parse an ResourceGroupsTaggingAPI GetTagKeysResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetTagKeysResponsePrivate::GetTagKeysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTagKeysResponse"));
    /// @todo
}

} // namespace ResourceGroupsTaggingAPI
} // namespace AWS
