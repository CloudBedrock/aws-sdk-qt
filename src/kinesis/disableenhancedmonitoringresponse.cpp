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

#include "disableenhancedmonitoringresponse.h"
#include "disableenhancedmonitoringresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Kinesis {

/**
 * @class  DisableEnhancedMonitoringResponse
 *
 * @brief  Handles Kinesis DisableEnhancedMonitoring responses.
 *
 * @see    KinesisClient::disableEnhancedMonitoring
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisableEnhancedMonitoringResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new DisableEnhancedMonitoringResponsePrivate(this), parent)
{
    setRequest(new DisableEnhancedMonitoringRequest(request));
    setReply(reply);
}

const DisableEnhancedMonitoringRequest * DisableEnhancedMonitoringResponse::request() const
{
    Q_D(const DisableEnhancedMonitoringResponse);
    return static_cast<const DisableEnhancedMonitoringRequest *>(d->request);
}

/**
 * @brief  Parse a Kinesis DisableEnhancedMonitoring response.
 *
 * @param  response  Response to parse.
 */
void DisableEnhancedMonitoringResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisableEnhancedMonitoringResponsePrivate
 *
 * @brief  Private implementation for DisableEnhancedMonitoringResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableEnhancedMonitoringResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisableEnhancedMonitoringResponse instance.
 */
DisableEnhancedMonitoringResponsePrivate::DisableEnhancedMonitoringResponsePrivate(
    DisableEnhancedMonitoringQueueResponse * const q) : DisableEnhancedMonitoringPrivate(q)
{

}

/**
 * @brief  Parse an Kinesis DisableEnhancedMonitoringResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisableEnhancedMonitoringResponsePrivate::DisableEnhancedMonitoringResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableEnhancedMonitoringResponse"));
    /// @todo
}
