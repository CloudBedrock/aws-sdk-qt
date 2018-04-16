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

#include "getcelebrityrecognitionresponse.h"
#include "getcelebrityrecognitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::GetCelebrityRecognitionResponse
 *
 * \brief The GetCelebrityRecognitionResponse class provides an interace for Rekognition GetCelebrityRecognition responses.
 *
 * \ingroup Rekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::getCelebrityRecognition
 */

/*!
 * @brief  Constructs a new GetCelebrityRecognitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCelebrityRecognitionResponse::GetCelebrityRecognitionResponse(
        const GetCelebrityRecognitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new GetCelebrityRecognitionResponsePrivate(this), parent)
{
    setRequest(new GetCelebrityRecognitionRequest(request));
    setReply(reply);
}

const GetCelebrityRecognitionRequest * GetCelebrityRecognitionResponse::request() const
{
    Q_D(const GetCelebrityRecognitionResponse);
    return static_cast<const GetCelebrityRecognitionRequest *>(d->request);
}

/*!
 * @brief  Parse a Rekognition GetCelebrityRecognition response.
 *
 * @param  response  Response to parse.
 */
void GetCelebrityRecognitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetCelebrityRecognitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetCelebrityRecognitionResponsePrivate
 *
 * \brief Private implementation for GetCelebrityRecognitionResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetCelebrityRecognitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCelebrityRecognitionResponse instance.
 */
GetCelebrityRecognitionResponsePrivate::GetCelebrityRecognitionResponsePrivate(
    GetCelebrityRecognitionResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Rekognition GetCelebrityRecognitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCelebrityRecognitionResponsePrivate::parseGetCelebrityRecognitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCelebrityRecognitionResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace QtAws
