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

#include "describetagsresponse.h"
#include "describetagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EFS {

/**
 * @class  DescribeTagsResponse
 *
 * @brief  Handles EFS DescribeTags responses.
 *
 * @see    EFSClient::describeTags
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTagsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EFSResponse(new DescribeTagsResponsePrivate(this), parent)
{
    setRequest(new DescribeTagsRequest(request));
    setReply(reply);
}

const DescribeTagsRequest * DescribeTagsResponse::request() const
{
    Q_D(const DescribeTagsResponse);
    return static_cast<const DescribeTagsRequest *>(d->request);
}

/**
 * @brief  Parse a EFS DescribeTags response.
 *
 * @param  response  Response to parse.
 */
void DescribeTagsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeTagsResponsePrivate
 *
 * @brief  Private implementation for DescribeTagsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTagsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeTagsResponse instance.
 */
DescribeTagsResponsePrivate::DescribeTagsResponsePrivate(
    DescribeTagsQueueResponse * const q) : DescribeTagsPrivate(q)
{

}

/**
 * @brief  Parse an EFS DescribeTagsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeTagsResponsePrivate::DescribeTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTagsResponse"));
    /// @todo
}
