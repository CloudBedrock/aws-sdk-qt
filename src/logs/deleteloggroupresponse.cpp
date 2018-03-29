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

#include "deleteloggroupresponse.h"
#include "deleteloggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchLogs {

/**
 * @class  DeleteLogGroupResponse
 *
 * @brief  Handles CloudWatchLogs DeleteLogGroup responses.
 *
 * @see    CloudWatchLogsClient::deleteLogGroup
 */

/**
 * @brief  Constructs a new DeleteLogGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteLogGroupResponse::DeleteLogGroupResponse(
        const DeleteLogGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new DeleteLogGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteLogGroupRequest(request));
    setReply(reply);
}

const DeleteLogGroupRequest * DeleteLogGroupResponse::request() const
{
    Q_D(const DeleteLogGroupResponse);
    return static_cast<const DeleteLogGroupRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs DeleteLogGroup response.
 *
 * @param  response  Response to parse.
 */
void DeleteLogGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteLogGroupResponsePrivate
 *
 * @brief  Private implementation for DeleteLogGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLogGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteLogGroupResponse instance.
 */
DeleteLogGroupResponsePrivate::DeleteLogGroupResponsePrivate(
    DeleteLogGroupQueueResponse * const q) : DeleteLogGroupPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs DeleteLogGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteLogGroupResponsePrivate::DeleteLogGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLogGroupResponse"));
    /// @todo
}

} // namespace CloudWatchLogs
} // namespace QtAws
