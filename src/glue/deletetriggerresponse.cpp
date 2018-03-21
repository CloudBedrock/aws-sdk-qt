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

#include "deletetriggerresponse.h"
#include "deletetriggerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  DeleteTriggerResponse
 *
 * @brief  Handles Glue DeleteTrigger responses.
 *
 * @see    GlueClient::deleteTrigger
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteTriggerResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteTriggerResponsePrivate(this), parent)
{
    setRequest(new DeleteTriggerRequest(request));
    setReply(reply);
}

const DeleteTriggerRequest * DeleteTriggerResponse::request() const
{
    Q_D(const DeleteTriggerResponse);
    return static_cast<const DeleteTriggerRequest *>(d->request);
}

/**
 * @brief  Parse a Glue DeleteTrigger response.
 *
 * @param  response  Response to parse.
 */
void DeleteTriggerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteTriggerResponsePrivate
 *
 * @brief  Private implementation for DeleteTriggerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTriggerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteTriggerResponse instance.
 */
DeleteTriggerResponsePrivate::DeleteTriggerResponsePrivate(
    DeleteTriggerQueueResponse * const q) : DeleteTriggerPrivate(q)
{

}

/**
 * @brief  Parse an Glue DeleteTriggerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteTriggerResponsePrivate::DeleteTriggerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTriggerResponse"));
    /// @todo
}

} // namespace Glue
} // namespace AWS
