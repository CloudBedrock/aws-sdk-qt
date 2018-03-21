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

#include "getserviceroleforaccountresponse.h"
#include "getserviceroleforaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  GetServiceRoleForAccountResponse
 *
 * @brief  Handles Greengrass GetServiceRoleForAccount responses.
 *
 * @see    GreengrassClient::getServiceRoleForAccount
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetServiceRoleForAccountResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetServiceRoleForAccountResponsePrivate(this), parent)
{
    setRequest(new GetServiceRoleForAccountRequest(request));
    setReply(reply);
}

const GetServiceRoleForAccountRequest * GetServiceRoleForAccountResponse::request() const
{
    Q_D(const GetServiceRoleForAccountResponse);
    return static_cast<const GetServiceRoleForAccountRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass GetServiceRoleForAccount response.
 *
 * @param  response  Response to parse.
 */
void GetServiceRoleForAccountResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetServiceRoleForAccountResponsePrivate
 *
 * @brief  Private implementation for GetServiceRoleForAccountResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetServiceRoleForAccountResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetServiceRoleForAccountResponse instance.
 */
GetServiceRoleForAccountResponsePrivate::GetServiceRoleForAccountResponsePrivate(
    GetServiceRoleForAccountQueueResponse * const q) : GetServiceRoleForAccountPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass GetServiceRoleForAccountResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetServiceRoleForAccountResponsePrivate::GetServiceRoleForAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetServiceRoleForAccountResponse"));
    /// @todo
}
