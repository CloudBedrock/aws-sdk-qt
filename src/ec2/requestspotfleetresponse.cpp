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

#include "requestspotfleetresponse.h"
#include "requestspotfleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  RequestSpotFleetResponse
 *
 * @brief  Handles EC2 RequestSpotFleet responses.
 *
 * @see    EC2Client::requestSpotFleet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RequestSpotFleetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new RequestSpotFleetResponsePrivate(this), parent)
{
    setRequest(new RequestSpotFleetRequest(request));
    setReply(reply);
}

const RequestSpotFleetRequest * RequestSpotFleetResponse::request() const
{
    Q_D(const RequestSpotFleetResponse);
    return static_cast<const RequestSpotFleetRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 RequestSpotFleet response.
 *
 * @param  response  Response to parse.
 */
void RequestSpotFleetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RequestSpotFleetResponsePrivate
 *
 * @brief  Private implementation for RequestSpotFleetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RequestSpotFleetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RequestSpotFleetResponse instance.
 */
RequestSpotFleetResponsePrivate::RequestSpotFleetResponsePrivate(
    RequestSpotFleetQueueResponse * const q) : RequestSpotFleetPrivate(q)
{

}

/**
 * @brief  Parse an EC2 RequestSpotFleetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RequestSpotFleetResponsePrivate::RequestSpotFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RequestSpotFleetResponse"));
    /// @todo
}
