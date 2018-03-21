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

#include "describerepositoriesresponse.h"
#include "describerepositoriesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ECR {

/**
 * @class  DescribeRepositoriesResponse
 *
 * @brief  Handles ECR DescribeRepositories responses.
 *
 * @see    ECRClient::describeRepositories
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeRepositoriesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECRResponse(new DescribeRepositoriesResponsePrivate(this), parent)
{
    setRequest(new DescribeRepositoriesRequest(request));
    setReply(reply);
}

const DescribeRepositoriesRequest * DescribeRepositoriesResponse::request() const
{
    Q_D(const DescribeRepositoriesResponse);
    return static_cast<const DescribeRepositoriesRequest *>(d->request);
}

/**
 * @brief  Parse a ECR DescribeRepositories response.
 *
 * @param  response  Response to parse.
 */
void DescribeRepositoriesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeRepositoriesResponsePrivate
 *
 * @brief  Private implementation for DescribeRepositoriesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRepositoriesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeRepositoriesResponse instance.
 */
DescribeRepositoriesResponsePrivate::DescribeRepositoriesResponsePrivate(
    DescribeRepositoriesQueueResponse * const q) : DescribeRepositoriesPrivate(q)
{

}

/**
 * @brief  Parse an ECR DescribeRepositoriesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeRepositoriesResponsePrivate::DescribeRepositoriesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRepositoriesResponse"));
    /// @todo
}
