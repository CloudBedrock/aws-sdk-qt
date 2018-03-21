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

#include "getdatabaseresponse.h"
#include "getdatabaseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  GetDatabaseResponse
 *
 * @brief  Handles Glue GetDatabase responses.
 *
 * @see    GlueClient::getDatabase
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDatabaseResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetDatabaseResponsePrivate(this), parent)
{
    setRequest(new GetDatabaseRequest(request));
    setReply(reply);
}

const GetDatabaseRequest * GetDatabaseResponse::request() const
{
    Q_D(const GetDatabaseResponse);
    return static_cast<const GetDatabaseRequest *>(d->request);
}

/**
 * @brief  Parse a Glue GetDatabase response.
 *
 * @param  response  Response to parse.
 */
void GetDatabaseResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDatabaseResponsePrivate
 *
 * @brief  Private implementation for GetDatabaseResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDatabaseResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDatabaseResponse instance.
 */
GetDatabaseResponsePrivate::GetDatabaseResponsePrivate(
    GetDatabaseQueueResponse * const q) : GetDatabasePrivate(q)
{

}

/**
 * @brief  Parse an Glue GetDatabaseResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDatabaseResponsePrivate::GetDatabaseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDatabaseResponse"));
    /// @todo
}
