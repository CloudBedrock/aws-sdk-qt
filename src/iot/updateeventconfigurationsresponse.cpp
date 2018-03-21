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

#include "updateeventconfigurationsresponse.h"
#include "updateeventconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  UpdateEventConfigurationsResponse
 *
 * @brief  Handles IoT UpdateEventConfigurations responses.
 *
 * @see    IoTClient::updateEventConfigurations
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateEventConfigurationsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new UpdateEventConfigurationsResponsePrivate(this), parent)
{
    setRequest(new UpdateEventConfigurationsRequest(request));
    setReply(reply);
}

const UpdateEventConfigurationsRequest * UpdateEventConfigurationsResponse::request() const
{
    Q_D(const UpdateEventConfigurationsResponse);
    return static_cast<const UpdateEventConfigurationsRequest *>(d->request);
}

/**
 * @brief  Parse a IoT UpdateEventConfigurations response.
 *
 * @param  response  Response to parse.
 */
void UpdateEventConfigurationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateEventConfigurationsResponsePrivate
 *
 * @brief  Private implementation for UpdateEventConfigurationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateEventConfigurationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateEventConfigurationsResponse instance.
 */
UpdateEventConfigurationsResponsePrivate::UpdateEventConfigurationsResponsePrivate(
    UpdateEventConfigurationsQueueResponse * const q) : UpdateEventConfigurationsPrivate(q)
{

}

/**
 * @brief  Parse an IoT UpdateEventConfigurationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateEventConfigurationsResponsePrivate::UpdateEventConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateEventConfigurationsResponse"));
    /// @todo
}
