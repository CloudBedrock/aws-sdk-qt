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

#include "listgeomatchsetsresponse.h"
#include "listgeomatchsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAF {

/**
 * @class  ListGeoMatchSetsResponse
 *
 * @brief  Handles WAF ListGeoMatchSets responses.
 *
 * @see    WAFClient::listGeoMatchSets
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListGeoMatchSetsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new ListGeoMatchSetsResponsePrivate(this), parent)
{
    setRequest(new ListGeoMatchSetsRequest(request));
    setReply(reply);
}

const ListGeoMatchSetsRequest * ListGeoMatchSetsResponse::request() const
{
    Q_D(const ListGeoMatchSetsResponse);
    return static_cast<const ListGeoMatchSetsRequest *>(d->request);
}

/**
 * @brief  Parse a WAF ListGeoMatchSets response.
 *
 * @param  response  Response to parse.
 */
void ListGeoMatchSetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListGeoMatchSetsResponsePrivate
 *
 * @brief  Private implementation for ListGeoMatchSetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListGeoMatchSetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListGeoMatchSetsResponse instance.
 */
ListGeoMatchSetsResponsePrivate::ListGeoMatchSetsResponsePrivate(
    ListGeoMatchSetsQueueResponse * const q) : ListGeoMatchSetsPrivate(q)
{

}

/**
 * @brief  Parse an WAF ListGeoMatchSetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListGeoMatchSetsResponsePrivate::ListGeoMatchSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGeoMatchSetsResponse"));
    /// @todo
}

} // namespace WAF
} // namespace AWS
