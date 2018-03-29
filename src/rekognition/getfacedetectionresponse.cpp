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

#include "getfacedetectionresponse.h"
#include "getfacedetectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/**
 * @class  GetFaceDetectionResponse
 *
 * @brief  Handles Rekognition GetFaceDetection responses.
 *
 * @see    RekognitionClient::getFaceDetection
 */

/**
 * @brief  Constructs a new GetFaceDetectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetFaceDetectionResponse::GetFaceDetectionResponse(
        const GetFaceDetectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetFaceDetectionResponse(new GetFaceDetectionResponsePrivate(this), parent)
{
    setRequest(new GetFaceDetectionRequest(request));
    setReply(reply);
}

const GetFaceDetectionRequest * GetFaceDetectionResponse::request() const
{
    Q_D(const GetFaceDetectionResponse);
    return static_cast<const GetFaceDetectionRequest *>(d->request);
}

/**
 * @brief  Parse a Rekognition GetFaceDetection response.
 *
 * @param  response  Response to parse.
 */
void GetFaceDetectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetFaceDetectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetFaceDetectionResponsePrivate
 *
 * @brief  Private implementation for GetFaceDetectionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetFaceDetectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetFaceDetectionResponse instance.
 */
GetFaceDetectionResponsePrivate::GetFaceDetectionResponsePrivate(
    GetFaceDetectionResponse * const q) : RekognitionResponsePrivate(q)
{

}

/**
 * @brief  Parse an Rekognition GetFaceDetectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetFaceDetectionResponsePrivate::parseGetFaceDetectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFaceDetectionResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace QtAws
