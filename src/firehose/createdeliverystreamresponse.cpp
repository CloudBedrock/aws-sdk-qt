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

#include "createdeliverystreamresponse.h"
#include "createdeliverystreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::CreateDeliveryStreamResponse
 *
 * \brief The CreateDeliveryStreamResponse class encapsulates Firehose CreateDeliveryStream responses.
 *
 * \ingroup Firehose
 *
 *  <fullname>Amazon Kinesis Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Firehose is a fully managed service that delivers real-time streaming data to destinations such as Amazon
 *  Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), and Amazon
 *
 * \sa FirehoseClient::createDeliveryStream
 */

/*!
 * @brief  Constructs a new CreateDeliveryStreamResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDeliveryStreamResponse::CreateDeliveryStreamResponse(
        const CreateDeliveryStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FirehoseResponse(new CreateDeliveryStreamResponsePrivate(this), parent)
{
    setRequest(new CreateDeliveryStreamRequest(request));
    setReply(reply);
}

const CreateDeliveryStreamRequest * CreateDeliveryStreamResponse::request() const
{
    Q_D(const CreateDeliveryStreamResponse);
    return static_cast<const CreateDeliveryStreamRequest *>(d->request);
}

/*!
 * @brief  Parse a Firehose CreateDeliveryStream response.
 *
 * @param  response  Response to parse.
 */
void CreateDeliveryStreamResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateDeliveryStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateDeliveryStreamResponsePrivate
 *
 * \brief Private implementation for CreateDeliveryStreamResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateDeliveryStreamResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDeliveryStreamResponse instance.
 */
CreateDeliveryStreamResponsePrivate::CreateDeliveryStreamResponsePrivate(
    CreateDeliveryStreamResponse * const q) : FirehoseResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Firehose CreateDeliveryStreamResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDeliveryStreamResponsePrivate::parseCreateDeliveryStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDeliveryStreamResponse"));
    /// @todo
}

} // namespace Firehose
} // namespace QtAws
