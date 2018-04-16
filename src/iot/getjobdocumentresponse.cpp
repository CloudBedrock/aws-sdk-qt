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

#include "getjobdocumentresponse.h"
#include "getjobdocumentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::GetJobDocumentResponse
 *
 * \brief The GetJobDocumentResponse class provides an interace for IoT GetJobDocument responses.
 *
 * \ingroup IoT
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT provides secure, bi-directional communication between Internet-connected things (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. You can discover your custom IoT-Data endpoint to communicate
 *  with, configure rules for data processing and integration with other services, organize resources associated with each
 *  thing (Thing Registry), configure logging, and create and manage policies and credentials to authenticate
 * 
 *  things>
 * 
 *  For more information about how AWS IoT works, see the <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 *
 * \sa IoTClient::getJobDocument
 */

/*!
 * @brief  Constructs a new GetJobDocumentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetJobDocumentResponse::GetJobDocumentResponse(
        const GetJobDocumentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new GetJobDocumentResponsePrivate(this), parent)
{
    setRequest(new GetJobDocumentRequest(request));
    setReply(reply);
}

const GetJobDocumentRequest * GetJobDocumentResponse::request() const
{
    Q_D(const GetJobDocumentResponse);
    return static_cast<const GetJobDocumentRequest *>(d->request);
}

/*!
 * @brief  Parse a IoT GetJobDocument response.
 *
 * @param  response  Response to parse.
 */
void GetJobDocumentResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetJobDocumentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetJobDocumentResponsePrivate
 *
 * \brief Private implementation for GetJobDocumentResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetJobDocumentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetJobDocumentResponse instance.
 */
GetJobDocumentResponsePrivate::GetJobDocumentResponsePrivate(
    GetJobDocumentResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * @brief  Parse an IoT GetJobDocumentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetJobDocumentResponsePrivate::parseGetJobDocumentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJobDocumentResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
