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

#include "getresourceconfighistoryresponse.h"
#include "getresourceconfighistoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ConfigService {

/**
 * @class  GetResourceConfigHistoryResponse
 *
 * @brief  Handles ConfigService GetResourceConfigHistory responses.
 *
 * @see    ConfigServiceClient::getResourceConfigHistory
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetResourceConfigHistoryResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new GetResourceConfigHistoryResponsePrivate(this), parent)
{
    setRequest(new GetResourceConfigHistoryRequest(request));
    setReply(reply);
}

const GetResourceConfigHistoryRequest * GetResourceConfigHistoryResponse::request() const
{
    Q_D(const GetResourceConfigHistoryResponse);
    return static_cast<const GetResourceConfigHistoryRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService GetResourceConfigHistory response.
 *
 * @param  response  Response to parse.
 */
void GetResourceConfigHistoryResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetResourceConfigHistoryResponsePrivate
 *
 * @brief  Private implementation for GetResourceConfigHistoryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetResourceConfigHistoryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetResourceConfigHistoryResponse instance.
 */
GetResourceConfigHistoryResponsePrivate::GetResourceConfigHistoryResponsePrivate(
    GetResourceConfigHistoryQueueResponse * const q) : GetResourceConfigHistoryPrivate(q)
{

}

/**
 * @brief  Parse an ConfigService GetResourceConfigHistoryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetResourceConfigHistoryResponsePrivate::GetResourceConfigHistoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourceConfigHistoryResponse"));
    /// @todo
}
