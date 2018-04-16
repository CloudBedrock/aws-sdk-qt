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

#include "sendbonusresponse.h"
#include "sendbonusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::SendBonusResponse
 *
 * \brief The SendBonusResponse class encapsulates MTurk SendBonus responses.
 *
 * \ingroup MTurk
 *
 *
 * \sa MTurkClient::sendBonus
 */

/*!
 * @brief  Constructs a new SendBonusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SendBonusResponse::SendBonusResponse(
        const SendBonusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new SendBonusResponsePrivate(this), parent)
{
    setRequest(new SendBonusRequest(request));
    setReply(reply);
}

const SendBonusRequest * SendBonusResponse::request() const
{
    Q_D(const SendBonusResponse);
    return static_cast<const SendBonusRequest *>(d->request);
}

/*!
 * @brief  Parse a MTurk SendBonus response.
 *
 * @param  response  Response to parse.
 */
void SendBonusResponse::parseSuccess(QIODevice &response)
{
    Q_D(SendBonusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class SendBonusResponsePrivate
 *
 * \brief Private implementation for SendBonusResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SendBonusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SendBonusResponse instance.
 */
SendBonusResponsePrivate::SendBonusResponsePrivate(
    SendBonusResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MTurk SendBonusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SendBonusResponsePrivate::parseSendBonusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendBonusResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace QtAws
