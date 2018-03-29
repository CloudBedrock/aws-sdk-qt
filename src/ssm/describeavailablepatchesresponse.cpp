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

#include "describeavailablepatchesresponse.h"
#include "describeavailablepatchesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  DescribeAvailablePatchesResponse
 *
 * @brief  Handles SSM DescribeAvailablePatches responses.
 *
 * @see    SSMClient::describeAvailablePatches
 */

/**
 * @brief  Constructs a new DescribeAvailablePatchesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAvailablePatchesResponse::DescribeAvailablePatchesResponse(
        const DescribeAvailablePatchesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DescribeAvailablePatchesResponsePrivate(this), parent)
{
    setRequest(new DescribeAvailablePatchesRequest(request));
    setReply(reply);
}

const DescribeAvailablePatchesRequest * DescribeAvailablePatchesResponse::request() const
{
    Q_D(const DescribeAvailablePatchesResponse);
    return static_cast<const DescribeAvailablePatchesRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DescribeAvailablePatches response.
 *
 * @param  response  Response to parse.
 */
void DescribeAvailablePatchesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeAvailablePatchesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAvailablePatchesResponsePrivate
 *
 * @brief  Private implementation for DescribeAvailablePatchesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAvailablePatchesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAvailablePatchesResponse instance.
 */
DescribeAvailablePatchesResponsePrivate::DescribeAvailablePatchesResponsePrivate(
    DescribeAvailablePatchesResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM DescribeAvailablePatchesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAvailablePatchesResponsePrivate::parseDescribeAvailablePatchesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAvailablePatchesResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
