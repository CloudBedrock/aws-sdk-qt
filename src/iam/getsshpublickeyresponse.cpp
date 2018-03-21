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

#include "getsshpublickeyresponse.h"
#include "getsshpublickeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  GetSSHPublicKeyResponse
 *
 * @brief  Handles IAM GetSSHPublicKey responses.
 *
 * @see    IAMClient::getSSHPublicKey
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSSHPublicKeyResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new GetSSHPublicKeyResponsePrivate(this), parent)
{
    setRequest(new GetSSHPublicKeyRequest(request));
    setReply(reply);
}

const GetSSHPublicKeyRequest * GetSSHPublicKeyResponse::request() const
{
    Q_D(const GetSSHPublicKeyResponse);
    return static_cast<const GetSSHPublicKeyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM GetSSHPublicKey response.
 *
 * @param  response  Response to parse.
 */
void GetSSHPublicKeyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetSSHPublicKeyResponsePrivate
 *
 * @brief  Private implementation for GetSSHPublicKeyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSSHPublicKeyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSSHPublicKeyResponse instance.
 */
GetSSHPublicKeyResponsePrivate::GetSSHPublicKeyResponsePrivate(
    GetSSHPublicKeyQueueResponse * const q) : GetSSHPublicKeyPrivate(q)
{

}

/**
 * @brief  Parse an IAM GetSSHPublicKeyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSSHPublicKeyResponsePrivate::GetSSHPublicKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSSHPublicKeyResponse"));
    /// @todo
}
