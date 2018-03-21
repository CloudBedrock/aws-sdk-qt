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

#include "listtagsresponse.h"
#include "listtagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudHSMV2 {

/**
 * @class  ListTagsResponse
 *
 * @brief  Handles CloudHSMV2 ListTags responses.
 *
 * @see    CloudHSMV2Client::listTags
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTagsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMV2Response(new ListTagsResponsePrivate(this), parent)
{
    setRequest(new ListTagsRequest(request));
    setReply(reply);
}

const ListTagsRequest * ListTagsResponse::request() const
{
    Q_D(const ListTagsResponse);
    return static_cast<const ListTagsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudHSMV2 ListTags response.
 *
 * @param  response  Response to parse.
 */
void ListTagsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTagsResponsePrivate
 *
 * @brief  Private implementation for ListTagsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTagsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTagsResponse instance.
 */
ListTagsResponsePrivate::ListTagsResponsePrivate(
    ListTagsQueueResponse * const q) : ListTagsPrivate(q)
{

}

/**
 * @brief  Parse an CloudHSMV2 ListTagsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTagsResponsePrivate::ListTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTagsResponse"));
    /// @todo
}

} // namespace CloudHSMV2
} // namespace AWS
