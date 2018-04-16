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

#include "getgcmchannelresponse.h"
#include "getgcmchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetGcmChannelResponse
 *
 * \brief The GetGcmChannelResponse class encapsulates Pinpoint GetGcmChannel responses.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::getGcmChannel
 */

/*!
 * @brief  Constructs a new GetGcmChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetGcmChannelResponse::GetGcmChannelResponse(
        const GetGcmChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetGcmChannelResponsePrivate(this), parent)
{
    setRequest(new GetGcmChannelRequest(request));
    setReply(reply);
}

const GetGcmChannelRequest * GetGcmChannelResponse::request() const
{
    Q_D(const GetGcmChannelResponse);
    return static_cast<const GetGcmChannelRequest *>(d->request);
}

/*!
 * @brief  Parse a Pinpoint GetGcmChannel response.
 *
 * @param  response  Response to parse.
 */
void GetGcmChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetGcmChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetGcmChannelResponsePrivate
 *
 * \brief Private implementation for GetGcmChannelResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetGcmChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetGcmChannelResponse instance.
 */
GetGcmChannelResponsePrivate::GetGcmChannelResponsePrivate(
    GetGcmChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Pinpoint GetGcmChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetGcmChannelResponsePrivate::parseGetGcmChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGcmChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
