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

#include "putconfigurationrecorderresponse.h"
#include "putconfigurationrecorderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ConfigService {

/**
 * @class  PutConfigurationRecorderResponse
 *
 * @brief  Handles ConfigService PutConfigurationRecorder responses.
 *
 * @see    ConfigServiceClient::putConfigurationRecorder
 */

/**
 * @brief  Constructs a new PutConfigurationRecorderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutConfigurationRecorderResponse::PutConfigurationRecorderResponse(
        const PutConfigurationRecorderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new PutConfigurationRecorderResponsePrivate(this), parent)
{
    setRequest(new PutConfigurationRecorderRequest(request));
    setReply(reply);
}

const PutConfigurationRecorderRequest * PutConfigurationRecorderResponse::request() const
{
    Q_D(const PutConfigurationRecorderResponse);
    return static_cast<const PutConfigurationRecorderRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService PutConfigurationRecorder response.
 *
 * @param  response  Response to parse.
 */
void PutConfigurationRecorderResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutConfigurationRecorderResponsePrivate
 *
 * @brief  Private implementation for PutConfigurationRecorderResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutConfigurationRecorderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutConfigurationRecorderResponse instance.
 */
PutConfigurationRecorderResponsePrivate::PutConfigurationRecorderResponsePrivate(
    PutConfigurationRecorderQueueResponse * const q) : PutConfigurationRecorderPrivate(q)
{

}

/**
 * @brief  Parse an ConfigService PutConfigurationRecorderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutConfigurationRecorderResponsePrivate::PutConfigurationRecorderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutConfigurationRecorderResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace AWS
