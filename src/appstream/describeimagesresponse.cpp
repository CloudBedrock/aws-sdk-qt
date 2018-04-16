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

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DescribeImagesResponse
 *
 * \brief The DescribeImagesResponse class encapsulates AppStream DescribeImages responses.
 *
 * \ingroup AppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::describeImages
 */

/*!
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
    : AppStreamResponse(new DescribeImagesResponsePrivate(this), parent)
{
    setRequest(new DescribeImagesRequest(request));
    setReply(reply);
}

const DescribeImagesRequest * DescribeImagesResponse::request() const
{
    Q_D(const DescribeImagesResponse);
    return static_cast<const DescribeImagesRequest *>(d->request);
}

/*!
 * @brief  Parse a AppStream DescribeImages response.
 *
 * @param  response  Response to parse.
 */
void DescribeImagesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeImagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeImagesResponsePrivate
 *
 * \brief Private implementation for DescribeImagesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeImagesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeImagesResponse instance.
 */
DescribeImagesResponsePrivate::DescribeImagesResponsePrivate(
    DescribeImagesResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * @brief  Parse an AppStream DescribeImagesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeImagesResponsePrivate::parseDescribeImagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeImagesResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace QtAws
