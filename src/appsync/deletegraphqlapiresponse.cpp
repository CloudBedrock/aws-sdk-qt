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

#include "deletegraphqlapiresponse.h"
#include "deletegraphqlapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AppSync {

/**
 * @class  DeleteGraphqlApiResponse
 *
 * @brief  Handles AppSync DeleteGraphqlApi responses.
 *
 * @see    AppSyncClient::deleteGraphqlApi
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteGraphqlApiResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new DeleteGraphqlApiResponsePrivate(this), parent)
{
    setRequest(new DeleteGraphqlApiRequest(request));
    setReply(reply);
}

const DeleteGraphqlApiRequest * DeleteGraphqlApiResponse::request() const
{
    Q_D(const DeleteGraphqlApiResponse);
    return static_cast<const DeleteGraphqlApiRequest *>(d->request);
}

/**
 * @brief  Parse a AppSync DeleteGraphqlApi response.
 *
 * @param  response  Response to parse.
 */
void DeleteGraphqlApiResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteGraphqlApiResponsePrivate
 *
 * @brief  Private implementation for DeleteGraphqlApiResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteGraphqlApiResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteGraphqlApiResponse instance.
 */
DeleteGraphqlApiResponsePrivate::DeleteGraphqlApiResponsePrivate(
    DeleteGraphqlApiQueueResponse * const q) : DeleteGraphqlApiPrivate(q)
{

}

/**
 * @brief  Parse an AppSync DeleteGraphqlApiResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteGraphqlApiResponsePrivate::DeleteGraphqlApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteGraphqlApiResponse"));
    /// @todo
}
