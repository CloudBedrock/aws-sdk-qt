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

#include "putscheduledupdategroupactionresponse.h"
#include "putscheduledupdategroupactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AutoScaling {

/**
 * @class  PutScheduledUpdateGroupActionResponse
 *
 * @brief  Handles AutoScaling PutScheduledUpdateGroupAction responses.
 *
 * @see    AutoScalingClient::putScheduledUpdateGroupAction
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutScheduledUpdateGroupActionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new PutScheduledUpdateGroupActionResponsePrivate(this), parent)
{
    setRequest(new PutScheduledUpdateGroupActionRequest(request));
    setReply(reply);
}

const PutScheduledUpdateGroupActionRequest * PutScheduledUpdateGroupActionResponse::request() const
{
    Q_D(const PutScheduledUpdateGroupActionResponse);
    return static_cast<const PutScheduledUpdateGroupActionRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling PutScheduledUpdateGroupAction response.
 *
 * @param  response  Response to parse.
 */
void PutScheduledUpdateGroupActionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutScheduledUpdateGroupActionResponsePrivate
 *
 * @brief  Private implementation for PutScheduledUpdateGroupActionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutScheduledUpdateGroupActionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutScheduledUpdateGroupActionResponse instance.
 */
PutScheduledUpdateGroupActionResponsePrivate::PutScheduledUpdateGroupActionResponsePrivate(
    PutScheduledUpdateGroupActionQueueResponse * const q) : PutScheduledUpdateGroupActionPrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling PutScheduledUpdateGroupActionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutScheduledUpdateGroupActionResponsePrivate::PutScheduledUpdateGroupActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutScheduledUpdateGroupActionResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace AWS
