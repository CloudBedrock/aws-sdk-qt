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

#include "listoperationsresponse.h"
#include "listoperationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53Domains {

/**
 * @class  ListOperationsResponse
 *
 * @brief  Handles Route53Domains ListOperations responses.
 *
 * @see    Route53DomainsClient::listOperations
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListOperationsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new ListOperationsResponsePrivate(this), parent)
{
    setRequest(new ListOperationsRequest(request));
    setReply(reply);
}

const ListOperationsRequest * ListOperationsResponse::request() const
{
    Q_D(const ListOperationsResponse);
    return static_cast<const ListOperationsRequest *>(d->request);
}

/**
 * @brief  Parse a Route53Domains ListOperations response.
 *
 * @param  response  Response to parse.
 */
void ListOperationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListOperationsResponsePrivate
 *
 * @brief  Private implementation for ListOperationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListOperationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListOperationsResponse instance.
 */
ListOperationsResponsePrivate::ListOperationsResponsePrivate(
    ListOperationsQueueResponse * const q) : ListOperationsPrivate(q)
{

}

/**
 * @brief  Parse an Route53Domains ListOperationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListOperationsResponsePrivate::ListOperationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOperationsResponse"));
    /// @todo
}
