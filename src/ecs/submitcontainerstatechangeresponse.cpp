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

#include "submitcontainerstatechangeresponse.h"
#include "submitcontainerstatechangeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ECS {

/**
 * @class  SubmitContainerStateChangeResponse
 *
 * @brief  Handles ECS SubmitContainerStateChange responses.
 *
 * @see    ECSClient::submitContainerStateChange
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SubmitContainerStateChangeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECSResponse(new SubmitContainerStateChangeResponsePrivate(this), parent)
{
    setRequest(new SubmitContainerStateChangeRequest(request));
    setReply(reply);
}

const SubmitContainerStateChangeRequest * SubmitContainerStateChangeResponse::request() const
{
    Q_D(const SubmitContainerStateChangeResponse);
    return static_cast<const SubmitContainerStateChangeRequest *>(d->request);
}

/**
 * @brief  Parse a ECS SubmitContainerStateChange response.
 *
 * @param  response  Response to parse.
 */
void SubmitContainerStateChangeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SubmitContainerStateChangeResponsePrivate
 *
 * @brief  Private implementation for SubmitContainerStateChangeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SubmitContainerStateChangeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SubmitContainerStateChangeResponse instance.
 */
SubmitContainerStateChangeResponsePrivate::SubmitContainerStateChangeResponsePrivate(
    SubmitContainerStateChangeQueueResponse * const q) : SubmitContainerStateChangePrivate(q)
{

}

/**
 * @brief  Parse an ECS SubmitContainerStateChangeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SubmitContainerStateChangeResponsePrivate::SubmitContainerStateChangeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SubmitContainerStateChangeResponse"));
    /// @todo
}

} // namespace ECS
} // namespace AWS
