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

#include "completelifecycleactionresponse.h"
#include "completelifecycleactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AutoScaling {

/**
 * @class  CompleteLifecycleActionResponse
 *
 * @brief  Handles AutoScaling CompleteLifecycleAction responses.
 *
 * @see    AutoScalingClient::completeLifecycleAction
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CompleteLifecycleActionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new CompleteLifecycleActionResponsePrivate(this), parent)
{
    setRequest(new CompleteLifecycleActionRequest(request));
    setReply(reply);
}

const CompleteLifecycleActionRequest * CompleteLifecycleActionResponse::request() const
{
    Q_D(const CompleteLifecycleActionResponse);
    return static_cast<const CompleteLifecycleActionRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling CompleteLifecycleAction response.
 *
 * @param  response  Response to parse.
 */
void CompleteLifecycleActionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CompleteLifecycleActionResponsePrivate
 *
 * @brief  Private implementation for CompleteLifecycleActionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CompleteLifecycleActionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CompleteLifecycleActionResponse instance.
 */
CompleteLifecycleActionResponsePrivate::CompleteLifecycleActionResponsePrivate(
    CompleteLifecycleActionQueueResponse * const q) : CompleteLifecycleActionPrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling CompleteLifecycleActionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CompleteLifecycleActionResponsePrivate::CompleteLifecycleActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CompleteLifecycleActionResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace AWS
