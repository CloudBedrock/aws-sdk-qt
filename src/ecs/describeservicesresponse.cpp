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

#include "describeservicesresponse.h"
#include "describeservicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ECS {

/**
 * @class  DescribeServicesResponse
 *
 * @brief  Handles ECS DescribeServices responses.
 *
 * @see    ECSClient::describeServices
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeServicesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECSResponse(new DescribeServicesResponsePrivate(this), parent)
{
    setRequest(new DescribeServicesRequest(request));
    setReply(reply);
}

const DescribeServicesRequest * DescribeServicesResponse::request() const
{
    Q_D(const DescribeServicesResponse);
    return static_cast<const DescribeServicesRequest *>(d->request);
}

/**
 * @brief  Parse a ECS DescribeServices response.
 *
 * @param  response  Response to parse.
 */
void DescribeServicesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeServicesResponsePrivate
 *
 * @brief  Private implementation for DescribeServicesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeServicesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeServicesResponse instance.
 */
DescribeServicesResponsePrivate::DescribeServicesResponsePrivate(
    DescribeServicesQueueResponse * const q) : DescribeServicesPrivate(q)
{

}

/**
 * @brief  Parse an ECS DescribeServicesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeServicesResponsePrivate::DescribeServicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeServicesResponse"));
    /// @todo
}
