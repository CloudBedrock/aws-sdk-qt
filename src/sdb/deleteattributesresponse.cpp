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

#include "deleteattributesresponse.h"
#include "deleteattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SimpleDB {

/**
 * @class  DeleteAttributesResponse
 *
 * @brief  Handles SimpleDB DeleteAttributes responses.
 *
 * @see    SimpleDBClient::deleteAttributes
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteAttributesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SimpleDBResponse(new DeleteAttributesResponsePrivate(this), parent)
{
    setRequest(new DeleteAttributesRequest(request));
    setReply(reply);
}

const DeleteAttributesRequest * DeleteAttributesResponse::request() const
{
    Q_D(const DeleteAttributesResponse);
    return static_cast<const DeleteAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a SimpleDB DeleteAttributes response.
 *
 * @param  response  Response to parse.
 */
void DeleteAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteAttributesResponsePrivate
 *
 * @brief  Private implementation for DeleteAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteAttributesResponse instance.
 */
DeleteAttributesResponsePrivate::DeleteAttributesResponsePrivate(
    DeleteAttributesQueueResponse * const q) : DeleteAttributesPrivate(q)
{

}

/**
 * @brief  Parse an SimpleDB DeleteAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteAttributesResponsePrivate::DeleteAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAttributesResponse"));
    /// @todo
}

} // namespace SimpleDB
} // namespace AWS
