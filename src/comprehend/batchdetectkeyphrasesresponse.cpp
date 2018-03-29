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

#include "batchdetectkeyphrasesresponse.h"
#include "batchdetectkeyphrasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/**
 * @class  BatchDetectKeyPhrasesResponse
 *
 * @brief  Handles Comprehend BatchDetectKeyPhrases responses.
 *
 * @see    ComprehendClient::batchDetectKeyPhrases
 */

/**
 * @brief  Constructs a new BatchDetectKeyPhrasesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchDetectKeyPhrasesResponse::BatchDetectKeyPhrasesResponse(
        const BatchDetectKeyPhrasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new BatchDetectKeyPhrasesResponsePrivate(this), parent)
{
    setRequest(new BatchDetectKeyPhrasesRequest(request));
    setReply(reply);
}

const BatchDetectKeyPhrasesRequest * BatchDetectKeyPhrasesResponse::request() const
{
    Q_D(const BatchDetectKeyPhrasesResponse);
    return static_cast<const BatchDetectKeyPhrasesRequest *>(d->request);
}

/**
 * @brief  Parse a Comprehend BatchDetectKeyPhrases response.
 *
 * @param  response  Response to parse.
 */
void BatchDetectKeyPhrasesResponse::parseSuccess(QIODevice &response)
{
    Q_D(BatchDetectKeyPhrasesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchDetectKeyPhrasesResponsePrivate
 *
 * @brief  Private implementation for BatchDetectKeyPhrasesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchDetectKeyPhrasesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchDetectKeyPhrasesResponse instance.
 */
BatchDetectKeyPhrasesResponsePrivate::BatchDetectKeyPhrasesResponsePrivate(
    BatchDetectKeyPhrasesResponse * const q) : ComprehendResponsePrivate(q)
{

}

/**
 * @brief  Parse an Comprehend BatchDetectKeyPhrasesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchDetectKeyPhrasesResponsePrivate::BatchDetectKeyPhrasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDetectKeyPhrasesResponse"));
    /// @todo
}

} // namespace Comprehend
} // namespace QtAws
