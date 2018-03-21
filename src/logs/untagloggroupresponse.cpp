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

#include "untagloggroupresponse.h"
#include "untagloggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  UntagLogGroupResponse
 *
 * @brief  Handles CloudWatchLogs UntagLogGroup responses.
 *
 * @see    CloudWatchLogsClient::untagLogGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UntagLogGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new UntagLogGroupResponsePrivate(this), parent)
{
    setRequest(new UntagLogGroupRequest(request));
    setReply(reply);
}

const UntagLogGroupRequest * UntagLogGroupResponse::request() const
{
    Q_D(const UntagLogGroupResponse);
    return static_cast<const UntagLogGroupRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs UntagLogGroup response.
 *
 * @param  response  Response to parse.
 */
void UntagLogGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UntagLogGroupResponsePrivate
 *
 * @brief  Private implementation for UntagLogGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UntagLogGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UntagLogGroupResponse instance.
 */
UntagLogGroupResponsePrivate::UntagLogGroupResponsePrivate(
    UntagLogGroupQueueResponse * const q) : UntagLogGroupPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs UntagLogGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UntagLogGroupResponsePrivate::UntagLogGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UntagLogGroupResponse"));
    /// @todo
}
