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

#include "updatenotificationsettingsresponse.h"
#include "updatenotificationsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MTurk {

/**
 * @class  UpdateNotificationSettingsResponse
 *
 * @brief  Handles MTurk UpdateNotificationSettings responses.
 *
 * @see    MTurkClient::updateNotificationSettings
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateNotificationSettingsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new UpdateNotificationSettingsResponsePrivate(this), parent)
{
    setRequest(new UpdateNotificationSettingsRequest(request));
    setReply(reply);
}

const UpdateNotificationSettingsRequest * UpdateNotificationSettingsResponse::request() const
{
    Q_D(const UpdateNotificationSettingsResponse);
    return static_cast<const UpdateNotificationSettingsRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk UpdateNotificationSettings response.
 *
 * @param  response  Response to parse.
 */
void UpdateNotificationSettingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateNotificationSettingsResponsePrivate
 *
 * @brief  Private implementation for UpdateNotificationSettingsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateNotificationSettingsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateNotificationSettingsResponse instance.
 */
UpdateNotificationSettingsResponsePrivate::UpdateNotificationSettingsResponsePrivate(
    UpdateNotificationSettingsQueueResponse * const q) : UpdateNotificationSettingsPrivate(q)
{

}

/**
 * @brief  Parse an MTurk UpdateNotificationSettingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateNotificationSettingsResponsePrivate::UpdateNotificationSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateNotificationSettingsResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace AWS
