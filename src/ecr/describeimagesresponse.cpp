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

#include "describeimagesresponse.h"
#include "describeimagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ECR {

/**
 * @class  DescribeImagesResponse
 *
 * @brief  Handles ECR DescribeImages responses.
 *
 * @see    ECRClient::describeImages
 */

/**
 * @brief  Constructs a new DescribeImagesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeImagesResponse::DescribeImagesResponse(
        const DescribeImagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECRResponse(new DescribeImagesResponsePrivate(this), parent)
{
    setRequest(new DescribeImagesRequest(request));
    setReply(reply);
}

const DescribeImagesRequest * DescribeImagesResponse::request() const
{
    Q_D(const DescribeImagesResponse);
    return static_cast<const DescribeImagesRequest *>(d->request);
}

/**
 * @brief  Parse a ECR DescribeImages response.
 *
 * @param  response  Response to parse.
 */
void DescribeImagesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeImagesResponsePrivate
 *
 * @brief  Private implementation for DescribeImagesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeImagesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeImagesResponse instance.
 */
DescribeImagesResponsePrivate::DescribeImagesResponsePrivate(
    DescribeImagesQueueResponse * const q) : DescribeImagesPrivate(q)
{

}

/**
 * @brief  Parse an ECR DescribeImagesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeImagesResponsePrivate::DescribeImagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeImagesResponse"));
    /// @todo
}

} // namespace ECR
} // namespace AWS
