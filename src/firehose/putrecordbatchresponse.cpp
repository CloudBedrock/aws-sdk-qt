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

#include "putrecordbatchresponse.h"
#include "putrecordbatchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::PutRecordBatchResponse
 *
 * \brief The PutRecordBatchResponse class provides an interace for Firehose PutRecordBatch responses.
 *
 * \ingroup Firehose
 *
 *  <fullname>Amazon Kinesis Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Firehose is a fully managed service that delivers real-time streaming data to destinations such as Amazon
 *  Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), and Amazon
 *
 * \sa FirehoseClient::putRecordBatch
 */

/*!
 * @brief  Constructs a new PutRecordBatchResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutRecordBatchResponse::PutRecordBatchResponse(
        const PutRecordBatchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FirehoseResponse(new PutRecordBatchResponsePrivate(this), parent)
{
    setRequest(new PutRecordBatchRequest(request));
    setReply(reply);
}

const PutRecordBatchRequest * PutRecordBatchResponse::request() const
{
    Q_D(const PutRecordBatchResponse);
    return static_cast<const PutRecordBatchRequest *>(d->request);
}

/*!
 * @brief  Parse a Firehose PutRecordBatch response.
 *
 * @param  response  Response to parse.
 */
void PutRecordBatchResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutRecordBatchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class PutRecordBatchResponsePrivate
 *
 * \brief Private implementation for PutRecordBatchResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutRecordBatchResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutRecordBatchResponse instance.
 */
PutRecordBatchResponsePrivate::PutRecordBatchResponsePrivate(
    PutRecordBatchResponse * const q) : FirehoseResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Firehose PutRecordBatchResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutRecordBatchResponsePrivate::parsePutRecordBatchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRecordBatchResponse"));
    /// @todo
}

} // namespace Firehose
} // namespace QtAws
