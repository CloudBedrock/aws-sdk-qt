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

#include "detectmoderationlabelsresponse.h"
#include "detectmoderationlabelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Rekognition {

/**
 * @class  DetectModerationLabelsResponse
 *
 * @brief  Handles Rekognition DetectModerationLabels responses.
 *
 * @see    RekognitionClient::detectModerationLabels
 */

/**
 * @brief  Constructs a new DetectModerationLabelsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetectModerationLabelsResponse::DetectModerationLabelsResponse(
        const DetectModerationLabelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new DetectModerationLabelsResponsePrivate(this), parent)
{
    setRequest(new DetectModerationLabelsRequest(request));
    setReply(reply);
}

const DetectModerationLabelsRequest * DetectModerationLabelsResponse::request() const
{
    Q_D(const DetectModerationLabelsResponse);
    return static_cast<const DetectModerationLabelsRequest *>(d->request);
}

/**
 * @brief  Parse a Rekognition DetectModerationLabels response.
 *
 * @param  response  Response to parse.
 */
void DetectModerationLabelsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DetectModerationLabelsResponsePrivate
 *
 * @brief  Private implementation for DetectModerationLabelsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetectModerationLabelsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetectModerationLabelsResponse instance.
 */
DetectModerationLabelsResponsePrivate::DetectModerationLabelsResponsePrivate(
    DetectModerationLabelsQueueResponse * const q) : DetectModerationLabelsPrivate(q)
{

}

/**
 * @brief  Parse an Rekognition DetectModerationLabelsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetectModerationLabelsResponsePrivate::DetectModerationLabelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetectModerationLabelsResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace AWS
