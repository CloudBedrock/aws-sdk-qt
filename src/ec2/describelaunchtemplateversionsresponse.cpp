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

#include "describelaunchtemplateversionsresponse.h"
#include "describelaunchtemplateversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeLaunchTemplateVersionsResponse
 *
 * @brief  Handles EC2 DescribeLaunchTemplateVersions responses.
 *
 * @see    EC2Client::describeLaunchTemplateVersions
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeLaunchTemplateVersionsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeLaunchTemplateVersionsResponsePrivate(this), parent)
{
    setRequest(new DescribeLaunchTemplateVersionsRequest(request));
    setReply(reply);
}

const DescribeLaunchTemplateVersionsRequest * DescribeLaunchTemplateVersionsResponse::request() const
{
    Q_D(const DescribeLaunchTemplateVersionsResponse);
    return static_cast<const DescribeLaunchTemplateVersionsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeLaunchTemplateVersions response.
 *
 * @param  response  Response to parse.
 */
void DescribeLaunchTemplateVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeLaunchTemplateVersionsResponsePrivate
 *
 * @brief  Private implementation for DescribeLaunchTemplateVersionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLaunchTemplateVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeLaunchTemplateVersionsResponse instance.
 */
DescribeLaunchTemplateVersionsResponsePrivate::DescribeLaunchTemplateVersionsResponsePrivate(
    DescribeLaunchTemplateVersionsQueueResponse * const q) : DescribeLaunchTemplateVersionsPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeLaunchTemplateVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeLaunchTemplateVersionsResponsePrivate::DescribeLaunchTemplateVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLaunchTemplateVersionsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
