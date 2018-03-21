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

#include "getcontainerpolicyresponse.h"
#include "getcontainerpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MediaStore {

/**
 * @class  GetContainerPolicyResponse
 *
 * @brief  Handles MediaStore GetContainerPolicy responses.
 *
 * @see    MediaStoreClient::getContainerPolicy
 */

/**
 * @brief  Constructs a new GetContainerPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetContainerPolicyResponse::GetContainerPolicyResponse(
        const GetContainerPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new GetContainerPolicyResponsePrivate(this), parent)
{
    setRequest(new GetContainerPolicyRequest(request));
    setReply(reply);
}

const GetContainerPolicyRequest * GetContainerPolicyResponse::request() const
{
    Q_D(const GetContainerPolicyResponse);
    return static_cast<const GetContainerPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a MediaStore GetContainerPolicy response.
 *
 * @param  response  Response to parse.
 */
void GetContainerPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetContainerPolicyResponsePrivate
 *
 * @brief  Private implementation for GetContainerPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetContainerPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetContainerPolicyResponse instance.
 */
GetContainerPolicyResponsePrivate::GetContainerPolicyResponsePrivate(
    GetContainerPolicyQueueResponse * const q) : GetContainerPolicyPrivate(q)
{

}

/**
 * @brief  Parse an MediaStore GetContainerPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetContainerPolicyResponsePrivate::GetContainerPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetContainerPolicyResponse"));
    /// @todo
}

} // namespace MediaStore
} // namespace AWS
