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

#include "describefpgaimagesresponse.h"
#include "describefpgaimagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeFpgaImagesResponse
 *
 * @brief  Handles EC2 DescribeFpgaImages responses.
 *
 * @see    EC2Client::describeFpgaImages
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeFpgaImagesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeFpgaImagesResponsePrivate(this), parent)
{
    setRequest(new DescribeFpgaImagesRequest(request));
    setReply(reply);
}

const DescribeFpgaImagesRequest * DescribeFpgaImagesResponse::request() const
{
    Q_D(const DescribeFpgaImagesResponse);
    return static_cast<const DescribeFpgaImagesRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeFpgaImages response.
 *
 * @param  response  Response to parse.
 */
void DescribeFpgaImagesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeFpgaImagesResponsePrivate
 *
 * @brief  Private implementation for DescribeFpgaImagesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFpgaImagesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeFpgaImagesResponse instance.
 */
DescribeFpgaImagesResponsePrivate::DescribeFpgaImagesResponsePrivate(
    DescribeFpgaImagesQueueResponse * const q) : DescribeFpgaImagesPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeFpgaImagesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeFpgaImagesResponsePrivate::DescribeFpgaImagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFpgaImagesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
