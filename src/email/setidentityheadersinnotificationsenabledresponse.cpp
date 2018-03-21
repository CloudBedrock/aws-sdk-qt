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

#include "setidentityheadersinnotificationsenabledresponse.h"
#include "setidentityheadersinnotificationsenabledresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  SetIdentityHeadersInNotificationsEnabledResponse
 *
 * @brief  Handles SES SetIdentityHeadersInNotificationsEnabled responses.
 *
 * @see    SESClient::setIdentityHeadersInNotificationsEnabled
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetIdentityHeadersInNotificationsEnabledResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new SetIdentityHeadersInNotificationsEnabledResponsePrivate(this), parent)
{
    setRequest(new SetIdentityHeadersInNotificationsEnabledRequest(request));
    setReply(reply);
}

const SetIdentityHeadersInNotificationsEnabledRequest * SetIdentityHeadersInNotificationsEnabledResponse::request() const
{
    Q_D(const SetIdentityHeadersInNotificationsEnabledResponse);
    return static_cast<const SetIdentityHeadersInNotificationsEnabledRequest *>(d->request);
}

/**
 * @brief  Parse a SES SetIdentityHeadersInNotificationsEnabled response.
 *
 * @param  response  Response to parse.
 */
void SetIdentityHeadersInNotificationsEnabledResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetIdentityHeadersInNotificationsEnabledResponsePrivate
 *
 * @brief  Private implementation for SetIdentityHeadersInNotificationsEnabledResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetIdentityHeadersInNotificationsEnabledResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetIdentityHeadersInNotificationsEnabledResponse instance.
 */
SetIdentityHeadersInNotificationsEnabledResponsePrivate::SetIdentityHeadersInNotificationsEnabledResponsePrivate(
    SetIdentityHeadersInNotificationsEnabledQueueResponse * const q) : SetIdentityHeadersInNotificationsEnabledPrivate(q)
{

}

/**
 * @brief  Parse an SES SetIdentityHeadersInNotificationsEnabledResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetIdentityHeadersInNotificationsEnabledResponsePrivate::SetIdentityHeadersInNotificationsEnabledResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetIdentityHeadersInNotificationsEnabledResponse"));
    /// @todo
}
