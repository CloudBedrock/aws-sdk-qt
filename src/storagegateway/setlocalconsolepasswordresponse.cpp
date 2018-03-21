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

#include "setlocalconsolepasswordresponse.h"
#include "setlocalconsolepasswordresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace StorageGateway {

/**
 * @class  SetLocalConsolePasswordResponse
 *
 * @brief  Handles StorageGateway SetLocalConsolePassword responses.
 *
 * @see    StorageGatewayClient::setLocalConsolePassword
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetLocalConsolePasswordResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new SetLocalConsolePasswordResponsePrivate(this), parent)
{
    setRequest(new SetLocalConsolePasswordRequest(request));
    setReply(reply);
}

const SetLocalConsolePasswordRequest * SetLocalConsolePasswordResponse::request() const
{
    Q_D(const SetLocalConsolePasswordResponse);
    return static_cast<const SetLocalConsolePasswordRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway SetLocalConsolePassword response.
 *
 * @param  response  Response to parse.
 */
void SetLocalConsolePasswordResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetLocalConsolePasswordResponsePrivate
 *
 * @brief  Private implementation for SetLocalConsolePasswordResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetLocalConsolePasswordResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetLocalConsolePasswordResponse instance.
 */
SetLocalConsolePasswordResponsePrivate::SetLocalConsolePasswordResponsePrivate(
    SetLocalConsolePasswordQueueResponse * const q) : SetLocalConsolePasswordPrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway SetLocalConsolePasswordResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetLocalConsolePasswordResponsePrivate::SetLocalConsolePasswordResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetLocalConsolePasswordResponse"));
    /// @todo
}
