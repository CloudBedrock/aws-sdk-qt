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

#include "describeattachmentresponse.h"
#include "describeattachmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Support {

/**
 * @class  DescribeAttachmentResponse
 *
 * @brief  Handles Support DescribeAttachment responses.
 *
 * @see    SupportClient::describeAttachment
 */

/**
 * @brief  Constructs a new DescribeAttachmentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAttachmentResponse::DescribeAttachmentResponse(
        const DescribeAttachmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeAttachmentResponse(new DescribeAttachmentResponsePrivate(this), parent)
{
    setRequest(new DescribeAttachmentRequest(request));
    setReply(reply);
}

const DescribeAttachmentRequest * DescribeAttachmentResponse::request() const
{
    Q_D(const DescribeAttachmentResponse);
    return static_cast<const DescribeAttachmentRequest *>(d->request);
}

/**
 * @brief  Parse a Support DescribeAttachment response.
 *
 * @param  response  Response to parse.
 */
void DescribeAttachmentResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeAttachmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAttachmentResponsePrivate
 *
 * @brief  Private implementation for DescribeAttachmentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAttachmentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAttachmentResponse instance.
 */
DescribeAttachmentResponsePrivate::DescribeAttachmentResponsePrivate(
    DescribeAttachmentResponse * const q) : SupportResponsePrivate(q)
{

}

/**
 * @brief  Parse an Support DescribeAttachmentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAttachmentResponsePrivate::parseDescribeAttachmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAttachmentResponse"));
    /// @todo
}

} // namespace Support
} // namespace QtAws
