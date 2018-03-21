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

#include "batchchecklayeravailabilityresponse.h"
#include "batchchecklayeravailabilityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ECR {

/**
 * @class  BatchCheckLayerAvailabilityResponse
 *
 * @brief  Handles ECR BatchCheckLayerAvailability responses.
 *
 * @see    ECRClient::batchCheckLayerAvailability
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchCheckLayerAvailabilityResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECRResponse(new BatchCheckLayerAvailabilityResponsePrivate(this), parent)
{
    setRequest(new BatchCheckLayerAvailabilityRequest(request));
    setReply(reply);
}

const BatchCheckLayerAvailabilityRequest * BatchCheckLayerAvailabilityResponse::request() const
{
    Q_D(const BatchCheckLayerAvailabilityResponse);
    return static_cast<const BatchCheckLayerAvailabilityRequest *>(d->request);
}

/**
 * @brief  Parse a ECR BatchCheckLayerAvailability response.
 *
 * @param  response  Response to parse.
 */
void BatchCheckLayerAvailabilityResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchCheckLayerAvailabilityResponsePrivate
 *
 * @brief  Private implementation for BatchCheckLayerAvailabilityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchCheckLayerAvailabilityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchCheckLayerAvailabilityResponse instance.
 */
BatchCheckLayerAvailabilityResponsePrivate::BatchCheckLayerAvailabilityResponsePrivate(
    BatchCheckLayerAvailabilityQueueResponse * const q) : BatchCheckLayerAvailabilityPrivate(q)
{

}

/**
 * @brief  Parse an ECR BatchCheckLayerAvailabilityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchCheckLayerAvailabilityResponsePrivate::BatchCheckLayerAvailabilityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchCheckLayerAvailabilityResponse"));
    /// @todo
}

} // namespace ECR
} // namespace AWS
