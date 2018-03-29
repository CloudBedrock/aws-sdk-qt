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

#include "getsubscriptionstateresponse.h"
#include "getsubscriptionstateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/**
 * @class  GetSubscriptionStateResponse
 *
 * @brief  Handles Shield GetSubscriptionState responses.
 *
 * @see    ShieldClient::getSubscriptionState
 */

/**
 * @brief  Constructs a new GetSubscriptionStateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSubscriptionStateResponse::GetSubscriptionStateResponse(
        const GetSubscriptionStateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new GetSubscriptionStateResponsePrivate(this), parent)
{
    setRequest(new GetSubscriptionStateRequest(request));
    setReply(reply);
}

const GetSubscriptionStateRequest * GetSubscriptionStateResponse::request() const
{
    Q_D(const GetSubscriptionStateResponse);
    return static_cast<const GetSubscriptionStateRequest *>(d->request);
}

/**
 * @brief  Parse a Shield GetSubscriptionState response.
 *
 * @param  response  Response to parse.
 */
void GetSubscriptionStateResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetSubscriptionStateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetSubscriptionStateResponsePrivate
 *
 * @brief  Private implementation for GetSubscriptionStateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSubscriptionStateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSubscriptionStateResponse instance.
 */
GetSubscriptionStateResponsePrivate::GetSubscriptionStateResponsePrivate(
    GetSubscriptionStateResponse * const q) : ShieldResponsePrivate(q)
{

}

/**
 * @brief  Parse an Shield GetSubscriptionStateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSubscriptionStateResponsePrivate::parseGetSubscriptionStateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSubscriptionStateResponse"));
    /// @todo
}

} // namespace Shield
} // namespace QtAws
