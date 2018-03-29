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

#include "deletereplicationjobresponse.h"
#include "deletereplicationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SMS {

/**
 * @class  DeleteReplicationJobResponse
 *
 * @brief  Handles SMS DeleteReplicationJob responses.
 *
 * @see    SMSClient::deleteReplicationJob
 */

/**
 * @brief  Constructs a new DeleteReplicationJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteReplicationJobResponse::DeleteReplicationJobResponse(
        const DeleteReplicationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteReplicationJobResponse(new DeleteReplicationJobResponsePrivate(this), parent)
{
    setRequest(new DeleteReplicationJobRequest(request));
    setReply(reply);
}

const DeleteReplicationJobRequest * DeleteReplicationJobResponse::request() const
{
    Q_D(const DeleteReplicationJobResponse);
    return static_cast<const DeleteReplicationJobRequest *>(d->request);
}

/**
 * @brief  Parse a SMS DeleteReplicationJob response.
 *
 * @param  response  Response to parse.
 */
void DeleteReplicationJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteReplicationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteReplicationJobResponsePrivate
 *
 * @brief  Private implementation for DeleteReplicationJobResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteReplicationJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteReplicationJobResponse instance.
 */
DeleteReplicationJobResponsePrivate::DeleteReplicationJobResponsePrivate(
    DeleteReplicationJobResponse * const q) : SMSResponsePrivate(q)
{

}

/**
 * @brief  Parse an SMS DeleteReplicationJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteReplicationJobResponsePrivate::parseDeleteReplicationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReplicationJobResponse"));
    /// @todo
}

} // namespace SMS
} // namespace QtAws
