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

#include "describeecsclustersresponse.h"
#include "describeecsclustersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  DescribeEcsClustersResponse
 *
 * @brief  Handles OpsWorks DescribeEcsClusters responses.
 *
 * @see    OpsWorksClient::describeEcsClusters
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEcsClustersResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new DescribeEcsClustersResponsePrivate(this), parent)
{
    setRequest(new DescribeEcsClustersRequest(request));
    setReply(reply);
}

const DescribeEcsClustersRequest * DescribeEcsClustersResponse::request() const
{
    Q_D(const DescribeEcsClustersResponse);
    return static_cast<const DescribeEcsClustersRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DescribeEcsClusters response.
 *
 * @param  response  Response to parse.
 */
void DescribeEcsClustersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeEcsClustersResponsePrivate
 *
 * @brief  Private implementation for DescribeEcsClustersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEcsClustersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeEcsClustersResponse instance.
 */
DescribeEcsClustersResponsePrivate::DescribeEcsClustersResponsePrivate(
    DescribeEcsClustersQueueResponse * const q) : DescribeEcsClustersPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DescribeEcsClustersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEcsClustersResponsePrivate::DescribeEcsClustersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEcsClustersResponse"));
    /// @todo
}
