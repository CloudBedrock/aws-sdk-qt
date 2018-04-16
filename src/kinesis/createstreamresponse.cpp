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

#include "createstreamresponse.h"
#include "createstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::CreateStreamResponse
 *
 * \brief The CreateStreamResponse class provides an interace for Kinesis CreateStream responses.
 *
 * \ingroup Kinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::createStream
 */

/*!
 * @brief  Constructs a new CreateStreamResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateStreamResponse::CreateStreamResponse(
        const CreateStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new CreateStreamResponsePrivate(this), parent)
{
    setRequest(new CreateStreamRequest(request));
    setReply(reply);
}

const CreateStreamRequest * CreateStreamResponse::request() const
{
    Q_D(const CreateStreamResponse);
    return static_cast<const CreateStreamRequest *>(d->request);
}

/*!
 * @brief  Parse a Kinesis CreateStream response.
 *
 * @param  response  Response to parse.
 */
void CreateStreamResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateStreamResponsePrivate
 *
 * \brief Private implementation for CreateStreamResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateStreamResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateStreamResponse instance.
 */
CreateStreamResponsePrivate::CreateStreamResponsePrivate(
    CreateStreamResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Kinesis CreateStreamResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateStreamResponsePrivate::parseCreateStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStreamResponse"));
    /// @todo
}

} // namespace Kinesis
} // namespace QtAws
