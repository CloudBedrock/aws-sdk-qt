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

#include "listipsetsresponse.h"
#include "listipsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GuardDuty {

/**
 * @class  ListIPSetsResponse
 *
 * @brief  Handles GuardDuty ListIPSets responses.
 *
 * @see    GuardDutyClient::listIPSets
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListIPSetsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new ListIPSetsResponsePrivate(this), parent)
{
    setRequest(new ListIPSetsRequest(request));
    setReply(reply);
}

const ListIPSetsRequest * ListIPSetsResponse::request() const
{
    Q_D(const ListIPSetsResponse);
    return static_cast<const ListIPSetsRequest *>(d->request);
}

/**
 * @brief  Parse a GuardDuty ListIPSets response.
 *
 * @param  response  Response to parse.
 */
void ListIPSetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListIPSetsResponsePrivate
 *
 * @brief  Private implementation for ListIPSetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListIPSetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListIPSetsResponse instance.
 */
ListIPSetsResponsePrivate::ListIPSetsResponsePrivate(
    ListIPSetsQueueResponse * const q) : ListIPSetsPrivate(q)
{

}

/**
 * @brief  Parse an GuardDuty ListIPSetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListIPSetsResponsePrivate::ListIPSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListIPSetsResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace AWS
