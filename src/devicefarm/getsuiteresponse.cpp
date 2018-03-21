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

#include "getsuiteresponse.h"
#include "getsuiteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DeviceFarm {

/**
 * @class  GetSuiteResponse
 *
 * @brief  Handles DeviceFarm GetSuite responses.
 *
 * @see    DeviceFarmClient::getSuite
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSuiteResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetSuiteResponsePrivate(this), parent)
{
    setRequest(new GetSuiteRequest(request));
    setReply(reply);
}

const GetSuiteRequest * GetSuiteResponse::request() const
{
    Q_D(const GetSuiteResponse);
    return static_cast<const GetSuiteRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm GetSuite response.
 *
 * @param  response  Response to parse.
 */
void GetSuiteResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetSuiteResponsePrivate
 *
 * @brief  Private implementation for GetSuiteResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSuiteResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSuiteResponse instance.
 */
GetSuiteResponsePrivate::GetSuiteResponsePrivate(
    GetSuiteQueueResponse * const q) : GetSuitePrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm GetSuiteResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSuiteResponsePrivate::GetSuiteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSuiteResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace AWS
