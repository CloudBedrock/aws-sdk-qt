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

#include "getlabeldetectionresponse.h"
#include "getlabeldetectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Rekognition {

/**
 * @class  GetLabelDetectionResponse
 *
 * @brief  Handles Rekognition GetLabelDetection responses.
 *
 * @see    RekognitionClient::getLabelDetection
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetLabelDetectionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new GetLabelDetectionResponsePrivate(this), parent)
{
    setRequest(new GetLabelDetectionRequest(request));
    setReply(reply);
}

const GetLabelDetectionRequest * GetLabelDetectionResponse::request() const
{
    Q_D(const GetLabelDetectionResponse);
    return static_cast<const GetLabelDetectionRequest *>(d->request);
}

/**
 * @brief  Parse a Rekognition GetLabelDetection response.
 *
 * @param  response  Response to parse.
 */
void GetLabelDetectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetLabelDetectionResponsePrivate
 *
 * @brief  Private implementation for GetLabelDetectionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetLabelDetectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetLabelDetectionResponse instance.
 */
GetLabelDetectionResponsePrivate::GetLabelDetectionResponsePrivate(
    GetLabelDetectionQueueResponse * const q) : GetLabelDetectionPrivate(q)
{

}

/**
 * @brief  Parse an Rekognition GetLabelDetectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetLabelDetectionResponsePrivate::GetLabelDetectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLabelDetectionResponse"));
    /// @todo
}
