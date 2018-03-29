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

#include "deleteflowlogsresponse.h"
#include "deleteflowlogsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DeleteFlowLogsResponse
 *
 * @brief  Handles EC2 DeleteFlowLogs responses.
 *
 * @see    EC2Client::deleteFlowLogs
 */

/**
 * @brief  Constructs a new DeleteFlowLogsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteFlowLogsResponse::DeleteFlowLogsResponse(
        const DeleteFlowLogsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteFlowLogsResponse(new DeleteFlowLogsResponsePrivate(this), parent)
{
    setRequest(new DeleteFlowLogsRequest(request));
    setReply(reply);
}

const DeleteFlowLogsRequest * DeleteFlowLogsResponse::request() const
{
    Q_D(const DeleteFlowLogsResponse);
    return static_cast<const DeleteFlowLogsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DeleteFlowLogs response.
 *
 * @param  response  Response to parse.
 */
void DeleteFlowLogsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteFlowLogsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteFlowLogsResponsePrivate
 *
 * @brief  Private implementation for DeleteFlowLogsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFlowLogsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteFlowLogsResponse instance.
 */
DeleteFlowLogsResponsePrivate::DeleteFlowLogsResponsePrivate(
    DeleteFlowLogsResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DeleteFlowLogsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteFlowLogsResponsePrivate::parseDeleteFlowLogsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFlowLogsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
