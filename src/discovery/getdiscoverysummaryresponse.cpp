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

#include "getdiscoverysummaryresponse.h"
#include "getdiscoverysummaryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ApplicationDiscoveryService {

/**
 * @class  GetDiscoverySummaryResponse
 *
 * @brief  Handles ApplicationDiscoveryService GetDiscoverySummary responses.
 *
 * @see    ApplicationDiscoveryServiceClient::getDiscoverySummary
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDiscoverySummaryResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationDiscoveryServiceResponse(new GetDiscoverySummaryResponsePrivate(this), parent)
{
    setRequest(new GetDiscoverySummaryRequest(request));
    setReply(reply);
}

const GetDiscoverySummaryRequest * GetDiscoverySummaryResponse::request() const
{
    Q_D(const GetDiscoverySummaryResponse);
    return static_cast<const GetDiscoverySummaryRequest *>(d->request);
}

/**
 * @brief  Parse a ApplicationDiscoveryService GetDiscoverySummary response.
 *
 * @param  response  Response to parse.
 */
void GetDiscoverySummaryResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDiscoverySummaryResponsePrivate
 *
 * @brief  Private implementation for GetDiscoverySummaryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDiscoverySummaryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDiscoverySummaryResponse instance.
 */
GetDiscoverySummaryResponsePrivate::GetDiscoverySummaryResponsePrivate(
    GetDiscoverySummaryQueueResponse * const q) : GetDiscoverySummaryPrivate(q)
{

}

/**
 * @brief  Parse an ApplicationDiscoveryService GetDiscoverySummaryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDiscoverySummaryResponsePrivate::GetDiscoverySummaryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDiscoverySummaryResponse"));
    /// @todo
}

} // namespace ApplicationDiscoveryService
} // namespace AWS
