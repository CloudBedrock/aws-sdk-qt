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

#include "setv2logginglevelresponse.h"
#include "setv2logginglevelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  SetV2LoggingLevelResponse
 *
 * @brief  Handles IoT SetV2LoggingLevel responses.
 *
 * @see    IoTClient::setV2LoggingLevel
 */

/**
 * @brief  Constructs a new SetV2LoggingLevelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetV2LoggingLevelResponse::SetV2LoggingLevelResponse(
        const SetV2LoggingLevelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SetV2LoggingLevelResponse(new SetV2LoggingLevelResponsePrivate(this), parent)
{
    setRequest(new SetV2LoggingLevelRequest(request));
    setReply(reply);
}

const SetV2LoggingLevelRequest * SetV2LoggingLevelResponse::request() const
{
    Q_D(const SetV2LoggingLevelResponse);
    return static_cast<const SetV2LoggingLevelRequest *>(d->request);
}

/**
 * @brief  Parse a IoT SetV2LoggingLevel response.
 *
 * @param  response  Response to parse.
 */
void SetV2LoggingLevelResponse::parseSuccess(QIODevice &response)
{
    Q_D(SetV2LoggingLevelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetV2LoggingLevelResponsePrivate
 *
 * @brief  Private implementation for SetV2LoggingLevelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetV2LoggingLevelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetV2LoggingLevelResponse instance.
 */
SetV2LoggingLevelResponsePrivate::SetV2LoggingLevelResponsePrivate(
    SetV2LoggingLevelResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT SetV2LoggingLevelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetV2LoggingLevelResponsePrivate::parseSetV2LoggingLevelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetV2LoggingLevelResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
