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

#include "listlunaclientsresponse.h"
#include "listlunaclientsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudHSM {

/**
 * @class  ListLunaClientsResponse
 *
 * @brief  Handles CloudHSM ListLunaClients responses.
 *
 * @see    CloudHSMClient::listLunaClients
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListLunaClientsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMResponse(new ListLunaClientsResponsePrivate(this), parent)
{
    setRequest(new ListLunaClientsRequest(request));
    setReply(reply);
}

const ListLunaClientsRequest * ListLunaClientsResponse::request() const
{
    Q_D(const ListLunaClientsResponse);
    return static_cast<const ListLunaClientsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudHSM ListLunaClients response.
 *
 * @param  response  Response to parse.
 */
void ListLunaClientsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListLunaClientsResponsePrivate
 *
 * @brief  Private implementation for ListLunaClientsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListLunaClientsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListLunaClientsResponse instance.
 */
ListLunaClientsResponsePrivate::ListLunaClientsResponsePrivate(
    ListLunaClientsQueueResponse * const q) : ListLunaClientsPrivate(q)
{

}

/**
 * @brief  Parse an CloudHSM ListLunaClientsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListLunaClientsResponsePrivate::ListLunaClientsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLunaClientsResponse"));
    /// @todo
}
