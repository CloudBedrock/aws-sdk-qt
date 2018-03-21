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

#include "stopapplicationresponse.h"
#include "stopapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace KinesisAnalytics {

/**
 * @class  StopApplicationResponse
 *
 * @brief  Handles KinesisAnalytics StopApplication responses.
 *
 * @see    KinesisAnalyticsClient::stopApplication
 */

/**
 * @brief  Constructs a new StopApplicationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopApplicationResponse::StopApplicationResponse(
        const StopApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new StopApplicationResponsePrivate(this), parent)
{
    setRequest(new StopApplicationRequest(request));
    setReply(reply);
}

const StopApplicationRequest * StopApplicationResponse::request() const
{
    Q_D(const StopApplicationResponse);
    return static_cast<const StopApplicationRequest *>(d->request);
}

/**
 * @brief  Parse a KinesisAnalytics StopApplication response.
 *
 * @param  response  Response to parse.
 */
void StopApplicationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopApplicationResponsePrivate
 *
 * @brief  Private implementation for StopApplicationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopApplicationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopApplicationResponse instance.
 */
StopApplicationResponsePrivate::StopApplicationResponsePrivate(
    StopApplicationQueueResponse * const q) : StopApplicationPrivate(q)
{

}

/**
 * @brief  Parse an KinesisAnalytics StopApplicationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopApplicationResponsePrivate::StopApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopApplicationResponse"));
    /// @todo
}

} // namespace KinesisAnalytics
} // namespace AWS
