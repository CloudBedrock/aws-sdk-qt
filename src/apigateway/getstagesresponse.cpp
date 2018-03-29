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

#include "getstagesresponse.h"
#include "getstagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetStagesResponse
 *
 * @brief  Handles APIGateway GetStages responses.
 *
 * @see    APIGatewayClient::getStages
 */

/**
 * @brief  Constructs a new GetStagesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetStagesResponse::GetStagesResponse(
        const GetStagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetStagesResponsePrivate(this), parent)
{
    setRequest(new GetStagesRequest(request));
    setReply(reply);
}

const GetStagesRequest * GetStagesResponse::request() const
{
    Q_D(const GetStagesResponse);
    return static_cast<const GetStagesRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetStages response.
 *
 * @param  response  Response to parse.
 */
void GetStagesResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetStagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetStagesResponsePrivate
 *
 * @brief  Private implementation for GetStagesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetStagesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetStagesResponse instance.
 */
GetStagesResponsePrivate::GetStagesResponsePrivate(
    GetStagesResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetStagesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetStagesResponsePrivate::GetStagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStagesResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
