/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getresourcesresponse.h"
#include "getresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetResourcesResponse
 *
 * @brief  Handles APIGateway GetResources responses.
 *
 * @see    APIGatewayClient::getResources
 */

/**
 * @brief  Constructs a new GetResourcesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetResourcesResponse::GetResourcesResponse(
        const GetResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetResourcesResponsePrivate(this), parent)
{
    setRequest(new GetResourcesRequest(request));
    setReply(reply);
}

const GetResourcesRequest * GetResourcesResponse::request() const
{
    Q_D(const GetResourcesResponse);
    return static_cast<const GetResourcesRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetResources response.
 *
 * @param  response  Response to parse.
 */
void GetResourcesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetResourcesResponsePrivate
 *
 * @brief  Private implementation for GetResourcesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetResourcesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetResourcesResponse instance.
 */
GetResourcesResponsePrivate::GetResourcesResponsePrivate(
    GetResourcesQueueResponse * const q) : GetResourcesPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetResourcesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetResourcesResponsePrivate::GetResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourcesResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
