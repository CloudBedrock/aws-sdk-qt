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

#include "describedblogfilesresponse.h"
#include "describedblogfilesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  DescribeDBLogFilesResponse
 *
 * @brief  Handles RDS DescribeDBLogFiles responses.
 *
 * @see    RDSClient::describeDBLogFiles
 */

/**
 * @brief  Constructs a new DescribeDBLogFilesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDBLogFilesResponse::DescribeDBLogFilesResponse(
        const DescribeDBLogFilesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DescribeDBLogFilesResponsePrivate(this), parent)
{
    setRequest(new DescribeDBLogFilesRequest(request));
    setReply(reply);
}

const DescribeDBLogFilesRequest * DescribeDBLogFilesResponse::request() const
{
    Q_D(const DescribeDBLogFilesResponse);
    return static_cast<const DescribeDBLogFilesRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DescribeDBLogFiles response.
 *
 * @param  response  Response to parse.
 */
void DescribeDBLogFilesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDBLogFilesResponsePrivate
 *
 * @brief  Private implementation for DescribeDBLogFilesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBLogFilesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDBLogFilesResponse instance.
 */
DescribeDBLogFilesResponsePrivate::DescribeDBLogFilesResponsePrivate(
    DescribeDBLogFilesResponse * const q) : RDSResponsePrivate(q)
{

}

/**
 * @brief  Parse an RDS DescribeDBLogFilesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDBLogFilesResponsePrivate::DescribeDBLogFilesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBLogFilesResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
