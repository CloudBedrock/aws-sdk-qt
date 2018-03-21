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

#include "listresolversresponse.h"
#include "listresolversresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AppSync {

/**
 * @class  ListResolversResponse
 *
 * @brief  Handles AppSync ListResolvers responses.
 *
 * @see    AppSyncClient::listResolvers
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListResolversResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new ListResolversResponsePrivate(this), parent)
{
    setRequest(new ListResolversRequest(request));
    setReply(reply);
}

const ListResolversRequest * ListResolversResponse::request() const
{
    Q_D(const ListResolversResponse);
    return static_cast<const ListResolversRequest *>(d->request);
}

/**
 * @brief  Parse a AppSync ListResolvers response.
 *
 * @param  response  Response to parse.
 */
void ListResolversResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListResolversResponsePrivate
 *
 * @brief  Private implementation for ListResolversResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListResolversResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListResolversResponse instance.
 */
ListResolversResponsePrivate::ListResolversResponsePrivate(
    ListResolversQueueResponse * const q) : ListResolversPrivate(q)
{

}

/**
 * @brief  Parse an AppSync ListResolversResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListResolversResponsePrivate::ListResolversResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResolversResponse"));
    /// @todo
}
