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

#include "sendrawemailresponse.h"
#include "sendrawemailresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  SendRawEmailResponse
 *
 * @brief  Handles SES SendRawEmail responses.
 *
 * @see    SESClient::sendRawEmail
 */

/**
 * @brief  Constructs a new SendRawEmailResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SendRawEmailResponse::SendRawEmailResponse(
        const SendRawEmailRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new SendRawEmailResponsePrivate(this), parent)
{
    setRequest(new SendRawEmailRequest(request));
    setReply(reply);
}

const SendRawEmailRequest * SendRawEmailResponse::request() const
{
    Q_D(const SendRawEmailResponse);
    return static_cast<const SendRawEmailRequest *>(d->request);
}

/**
 * @brief  Parse a SES SendRawEmail response.
 *
 * @param  response  Response to parse.
 */
void SendRawEmailResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SendRawEmailResponsePrivate
 *
 * @brief  Private implementation for SendRawEmailResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SendRawEmailResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SendRawEmailResponse instance.
 */
SendRawEmailResponsePrivate::SendRawEmailResponsePrivate(
    SendRawEmailQueueResponse * const q) : SendRawEmailPrivate(q)
{

}

/**
 * @brief  Parse an SES SendRawEmailResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SendRawEmailResponsePrivate::SendRawEmailResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendRawEmailResponse"));
    /// @todo
}

} // namespace SES
} // namespace AWS
