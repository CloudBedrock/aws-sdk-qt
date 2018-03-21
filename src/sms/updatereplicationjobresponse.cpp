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

#include "updatereplicationjobresponse.h"
#include "updatereplicationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SMS {

/**
 * @class  UpdateReplicationJobResponse
 *
 * @brief  Handles SMS UpdateReplicationJob responses.
 *
 * @see    SMSClient::updateReplicationJob
 */

/**
 * @brief  Constructs a new UpdateReplicationJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateReplicationJobResponse::UpdateReplicationJobResponse(
        const UpdateReplicationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SMSResponse(new UpdateReplicationJobResponsePrivate(this), parent)
{
    setRequest(new UpdateReplicationJobRequest(request));
    setReply(reply);
}

const UpdateReplicationJobRequest * UpdateReplicationJobResponse::request() const
{
    Q_D(const UpdateReplicationJobResponse);
    return static_cast<const UpdateReplicationJobRequest *>(d->request);
}

/**
 * @brief  Parse a SMS UpdateReplicationJob response.
 *
 * @param  response  Response to parse.
 */
void UpdateReplicationJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateReplicationJobResponsePrivate
 *
 * @brief  Private implementation for UpdateReplicationJobResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateReplicationJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateReplicationJobResponse instance.
 */
UpdateReplicationJobResponsePrivate::UpdateReplicationJobResponsePrivate(
    UpdateReplicationJobQueueResponse * const q) : UpdateReplicationJobPrivate(q)
{

}

/**
 * @brief  Parse an SMS UpdateReplicationJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateReplicationJobResponsePrivate::UpdateReplicationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateReplicationJobResponse"));
    /// @todo
}

} // namespace SMS
} // namespace AWS
