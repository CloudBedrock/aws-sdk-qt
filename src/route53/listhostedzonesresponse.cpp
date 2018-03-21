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

#include "listhostedzonesresponse.h"
#include "listhostedzonesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  ListHostedZonesResponse
 *
 * @brief  Handles Route53 ListHostedZones responses.
 *
 * @see    Route53Client::listHostedZones
 */

/**
 * @brief  Constructs a new ListHostedZonesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListHostedZonesResponse::ListHostedZonesResponse(
        const ListHostedZonesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListHostedZonesResponsePrivate(this), parent)
{
    setRequest(new ListHostedZonesRequest(request));
    setReply(reply);
}

const ListHostedZonesRequest * ListHostedZonesResponse::request() const
{
    Q_D(const ListHostedZonesResponse);
    return static_cast<const ListHostedZonesRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 ListHostedZones response.
 *
 * @param  response  Response to parse.
 */
void ListHostedZonesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListHostedZonesResponsePrivate
 *
 * @brief  Private implementation for ListHostedZonesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListHostedZonesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListHostedZonesResponse instance.
 */
ListHostedZonesResponsePrivate::ListHostedZonesResponsePrivate(
    ListHostedZonesQueueResponse * const q) : ListHostedZonesPrivate(q)
{

}

/**
 * @brief  Parse an Route53 ListHostedZonesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListHostedZonesResponsePrivate::ListHostedZonesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHostedZonesResponse"));
    /// @todo
}

} // namespace Route53
} // namespace AWS
