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

#include "listinstancesresponse.h"
#include "listinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceDiscovery {

/**
 * @class  ListInstancesResponse
 *
 * @brief  Handles ServiceDiscovery ListInstances responses.
 *
 * @see    ServiceDiscoveryClient::listInstances
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListInstancesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new ListInstancesResponsePrivate(this), parent)
{
    setRequest(new ListInstancesRequest(request));
    setReply(reply);
}

const ListInstancesRequest * ListInstancesResponse::request() const
{
    Q_D(const ListInstancesResponse);
    return static_cast<const ListInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceDiscovery ListInstances response.
 *
 * @param  response  Response to parse.
 */
void ListInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListInstancesResponsePrivate
 *
 * @brief  Private implementation for ListInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListInstancesResponse instance.
 */
ListInstancesResponsePrivate::ListInstancesResponsePrivate(
    ListInstancesQueueResponse * const q) : ListInstancesPrivate(q)
{

}

/**
 * @brief  Parse an ServiceDiscovery ListInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListInstancesResponsePrivate::ListInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInstancesResponse"));
    /// @todo
}
