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

#include "listtapesresponse.h"
#include "listtapesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace StorageGateway {

/**
 * @class  ListTapesResponse
 *
 * @brief  Handles StorageGateway ListTapes responses.
 *
 * @see    StorageGatewayClient::listTapes
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTapesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new ListTapesResponsePrivate(this), parent)
{
    setRequest(new ListTapesRequest(request));
    setReply(reply);
}

const ListTapesRequest * ListTapesResponse::request() const
{
    Q_D(const ListTapesResponse);
    return static_cast<const ListTapesRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway ListTapes response.
 *
 * @param  response  Response to parse.
 */
void ListTapesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTapesResponsePrivate
 *
 * @brief  Private implementation for ListTapesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTapesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTapesResponse instance.
 */
ListTapesResponsePrivate::ListTapesResponsePrivate(
    ListTapesQueueResponse * const q) : ListTapesPrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway ListTapesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTapesResponsePrivate::ListTapesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTapesResponse"));
    /// @todo
}
