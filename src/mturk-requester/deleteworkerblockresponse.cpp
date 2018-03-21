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

#include "deleteworkerblockresponse.h"
#include "deleteworkerblockresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MTurk {

/**
 * @class  DeleteWorkerBlockResponse
 *
 * @brief  Handles MTurk DeleteWorkerBlock responses.
 *
 * @see    MTurkClient::deleteWorkerBlock
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteWorkerBlockResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new DeleteWorkerBlockResponsePrivate(this), parent)
{
    setRequest(new DeleteWorkerBlockRequest(request));
    setReply(reply);
}

const DeleteWorkerBlockRequest * DeleteWorkerBlockResponse::request() const
{
    Q_D(const DeleteWorkerBlockResponse);
    return static_cast<const DeleteWorkerBlockRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk DeleteWorkerBlock response.
 *
 * @param  response  Response to parse.
 */
void DeleteWorkerBlockResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteWorkerBlockResponsePrivate
 *
 * @brief  Private implementation for DeleteWorkerBlockResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteWorkerBlockResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteWorkerBlockResponse instance.
 */
DeleteWorkerBlockResponsePrivate::DeleteWorkerBlockResponsePrivate(
    DeleteWorkerBlockQueueResponse * const q) : DeleteWorkerBlockPrivate(q)
{

}

/**
 * @brief  Parse an MTurk DeleteWorkerBlockResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteWorkerBlockResponsePrivate::DeleteWorkerBlockResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWorkerBlockResponse"));
    /// @todo
}
