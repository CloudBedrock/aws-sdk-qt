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

#include "tagresourceresponse.h"
#include "tagresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudHSMV2 {

/**
 * @class  TagResourceResponse
 *
 * @brief  Handles CloudHSMV2 TagResource responses.
 *
 * @see    CloudHSMV2Client::tagResource
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TagResourceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMV2Response(new TagResourceResponsePrivate(this), parent)
{
    setRequest(new TagResourceRequest(request));
    setReply(reply);
}

const TagResourceRequest * TagResourceResponse::request() const
{
    Q_D(const TagResourceResponse);
    return static_cast<const TagResourceRequest *>(d->request);
}

/**
 * @brief  Parse a CloudHSMV2 TagResource response.
 *
 * @param  response  Response to parse.
 */
void TagResourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  TagResourceResponsePrivate
 *
 * @brief  Private implementation for TagResourceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TagResourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TagResourceResponse instance.
 */
TagResourceResponsePrivate::TagResourceResponsePrivate(
    TagResourceQueueResponse * const q) : TagResourcePrivate(q)
{

}

/**
 * @brief  Parse an CloudHSMV2 TagResourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TagResourceResponsePrivate::TagResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TagResourceResponse"));
    /// @todo
}

} // namespace CloudHSMV2
} // namespace AWS
