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

#include "deleteautoscalinggroupresponse.h"
#include "deleteautoscalinggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/**
 * @class  DeleteAutoScalingGroupResponse
 *
 * @brief  Handles AutoScaling DeleteAutoScalingGroup responses.
 *
 * @see    AutoScalingClient::deleteAutoScalingGroup
 */

/**
 * @brief  Constructs a new DeleteAutoScalingGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteAutoScalingGroupResponse::DeleteAutoScalingGroupResponse(
        const DeleteAutoScalingGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteAutoScalingGroupResponse(new DeleteAutoScalingGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteAutoScalingGroupRequest(request));
    setReply(reply);
}

const DeleteAutoScalingGroupRequest * DeleteAutoScalingGroupResponse::request() const
{
    Q_D(const DeleteAutoScalingGroupResponse);
    return static_cast<const DeleteAutoScalingGroupRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling DeleteAutoScalingGroup response.
 *
 * @param  response  Response to parse.
 */
void DeleteAutoScalingGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteAutoScalingGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteAutoScalingGroupResponsePrivate
 *
 * @brief  Private implementation for DeleteAutoScalingGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAutoScalingGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteAutoScalingGroupResponse instance.
 */
DeleteAutoScalingGroupResponsePrivate::DeleteAutoScalingGroupResponsePrivate(
    DeleteAutoScalingGroupResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling DeleteAutoScalingGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteAutoScalingGroupResponsePrivate::parseDeleteAutoScalingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAutoScalingGroupResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
