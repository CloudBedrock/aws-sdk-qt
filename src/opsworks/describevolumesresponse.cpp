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

#include "describevolumesresponse.h"
#include "describevolumesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/**
 * @class  DescribeVolumesResponse
 *
 * @brief  Handles OpsWorks DescribeVolumes responses.
 *
 * @see    OpsWorksClient::describeVolumes
 */

/**
 * @brief  Constructs a new DescribeVolumesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeVolumesResponse::DescribeVolumesResponse(
        const DescribeVolumesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new DescribeVolumesResponsePrivate(this), parent)
{
    setRequest(new DescribeVolumesRequest(request));
    setReply(reply);
}

const DescribeVolumesRequest * DescribeVolumesResponse::request() const
{
    Q_D(const DescribeVolumesResponse);
    return static_cast<const DescribeVolumesRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DescribeVolumes response.
 *
 * @param  response  Response to parse.
 */
void DescribeVolumesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeVolumesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeVolumesResponsePrivate
 *
 * @brief  Private implementation for DescribeVolumesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVolumesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeVolumesResponse instance.
 */
DescribeVolumesResponsePrivate::DescribeVolumesResponsePrivate(
    DescribeVolumesResponse * const q) : OpsWorksResponsePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DescribeVolumesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeVolumesResponsePrivate::parseDescribeVolumesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVolumesResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace QtAws
