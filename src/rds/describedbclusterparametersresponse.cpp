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

#include "describedbclusterparametersresponse.h"
#include "describedbclusterparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  DescribeDBClusterParametersResponse
 *
 * @brief  Handles RDS DescribeDBClusterParameters responses.
 *
 * @see    RDSClient::describeDBClusterParameters
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDBClusterParametersResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DescribeDBClusterParametersResponsePrivate(this), parent)
{
    setRequest(new DescribeDBClusterParametersRequest(request));
    setReply(reply);
}

const DescribeDBClusterParametersRequest * DescribeDBClusterParametersResponse::request() const
{
    Q_D(const DescribeDBClusterParametersResponse);
    return static_cast<const DescribeDBClusterParametersRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DescribeDBClusterParameters response.
 *
 * @param  response  Response to parse.
 */
void DescribeDBClusterParametersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDBClusterParametersResponsePrivate
 *
 * @brief  Private implementation for DescribeDBClusterParametersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBClusterParametersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDBClusterParametersResponse instance.
 */
DescribeDBClusterParametersResponsePrivate::DescribeDBClusterParametersResponsePrivate(
    DescribeDBClusterParametersQueueResponse * const q) : DescribeDBClusterParametersPrivate(q)
{

}

/**
 * @brief  Parse an RDS DescribeDBClusterParametersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDBClusterParametersResponsePrivate::DescribeDBClusterParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBClusterParametersResponse"));
    /// @todo
}
