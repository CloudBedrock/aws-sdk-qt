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

#include "getchangeresponse.h"
#include "getchangeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  GetChangeResponse
 *
 * @brief  Handles Route53 GetChange responses.
 *
 * @see    Route53Client::getChange
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetChangeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetChangeResponsePrivate(this), parent)
{
    setRequest(new GetChangeRequest(request));
    setReply(reply);
}

const GetChangeRequest * GetChangeResponse::request() const
{
    Q_D(const GetChangeResponse);
    return static_cast<const GetChangeRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 GetChange response.
 *
 * @param  response  Response to parse.
 */
void GetChangeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetChangeResponsePrivate
 *
 * @brief  Private implementation for GetChangeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetChangeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetChangeResponse instance.
 */
GetChangeResponsePrivate::GetChangeResponsePrivate(
    GetChangeQueueResponse * const q) : GetChangePrivate(q)
{

}

/**
 * @brief  Parse an Route53 GetChangeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetChangeResponsePrivate::GetChangeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetChangeResponse"));
    /// @todo
}
