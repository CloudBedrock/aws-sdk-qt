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

#include "describeinstancepatchstatesforpatchgroupresponse.h"
#include "describeinstancepatchstatesforpatchgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  DescribeInstancePatchStatesForPatchGroupResponse
 *
 * @brief  Handles SSM DescribeInstancePatchStatesForPatchGroup responses.
 *
 * @see    SSMClient::describeInstancePatchStatesForPatchGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeInstancePatchStatesForPatchGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DescribeInstancePatchStatesForPatchGroupResponsePrivate(this), parent)
{
    setRequest(new DescribeInstancePatchStatesForPatchGroupRequest(request));
    setReply(reply);
}

const DescribeInstancePatchStatesForPatchGroupRequest * DescribeInstancePatchStatesForPatchGroupResponse::request() const
{
    Q_D(const DescribeInstancePatchStatesForPatchGroupResponse);
    return static_cast<const DescribeInstancePatchStatesForPatchGroupRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DescribeInstancePatchStatesForPatchGroup response.
 *
 * @param  response  Response to parse.
 */
void DescribeInstancePatchStatesForPatchGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeInstancePatchStatesForPatchGroupResponsePrivate
 *
 * @brief  Private implementation for DescribeInstancePatchStatesForPatchGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstancePatchStatesForPatchGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeInstancePatchStatesForPatchGroupResponse instance.
 */
DescribeInstancePatchStatesForPatchGroupResponsePrivate::DescribeInstancePatchStatesForPatchGroupResponsePrivate(
    DescribeInstancePatchStatesForPatchGroupQueueResponse * const q) : DescribeInstancePatchStatesForPatchGroupPrivate(q)
{

}

/**
 * @brief  Parse an SSM DescribeInstancePatchStatesForPatchGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeInstancePatchStatesForPatchGroupResponsePrivate::DescribeInstancePatchStatesForPatchGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInstancePatchStatesForPatchGroupResponse"));
    /// @todo
}

} // namespace SSM
} // namespace AWS
