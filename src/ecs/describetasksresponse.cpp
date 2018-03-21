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

#include "describetasksresponse.h"
#include "describetasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ECS {

/**
 * @class  DescribeTasksResponse
 *
 * @brief  Handles ECS DescribeTasks responses.
 *
 * @see    ECSClient::describeTasks
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTasksResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECSResponse(new DescribeTasksResponsePrivate(this), parent)
{
    setRequest(new DescribeTasksRequest(request));
    setReply(reply);
}

const DescribeTasksRequest * DescribeTasksResponse::request() const
{
    Q_D(const DescribeTasksResponse);
    return static_cast<const DescribeTasksRequest *>(d->request);
}

/**
 * @brief  Parse a ECS DescribeTasks response.
 *
 * @param  response  Response to parse.
 */
void DescribeTasksResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeTasksResponsePrivate
 *
 * @brief  Private implementation for DescribeTasksResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTasksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeTasksResponse instance.
 */
DescribeTasksResponsePrivate::DescribeTasksResponsePrivate(
    DescribeTasksQueueResponse * const q) : DescribeTasksPrivate(q)
{

}

/**
 * @brief  Parse an ECS DescribeTasksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeTasksResponsePrivate::DescribeTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTasksResponse"));
    /// @todo
}
