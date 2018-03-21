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

#include "deleteremoteaccesssessionresponse.h"
#include "deleteremoteaccesssessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DeviceFarm {

/**
 * @class  DeleteRemoteAccessSessionResponse
 *
 * @brief  Handles DeviceFarm DeleteRemoteAccessSession responses.
 *
 * @see    DeviceFarmClient::deleteRemoteAccessSession
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRemoteAccessSessionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new DeleteRemoteAccessSessionResponsePrivate(this), parent)
{
    setRequest(new DeleteRemoteAccessSessionRequest(request));
    setReply(reply);
}

const DeleteRemoteAccessSessionRequest * DeleteRemoteAccessSessionResponse::request() const
{
    Q_D(const DeleteRemoteAccessSessionResponse);
    return static_cast<const DeleteRemoteAccessSessionRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm DeleteRemoteAccessSession response.
 *
 * @param  response  Response to parse.
 */
void DeleteRemoteAccessSessionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteRemoteAccessSessionResponsePrivate
 *
 * @brief  Private implementation for DeleteRemoteAccessSessionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRemoteAccessSessionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteRemoteAccessSessionResponse instance.
 */
DeleteRemoteAccessSessionResponsePrivate::DeleteRemoteAccessSessionResponsePrivate(
    DeleteRemoteAccessSessionQueueResponse * const q) : DeleteRemoteAccessSessionPrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm DeleteRemoteAccessSessionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteRemoteAccessSessionResponsePrivate::DeleteRemoteAccessSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRemoteAccessSessionResponse"));
    /// @todo
}
