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

#include "listtranscriptionjobsresponse.h"
#include "listtranscriptionjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/**
 * @class  ListTranscriptionJobsResponse
 *
 * @brief  Handles TranscribeService ListTranscriptionJobs responses.
 *
 * @see    TranscribeServiceClient::listTranscriptionJobs
 */

/**
 * @brief  Constructs a new ListTranscriptionJobsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTranscriptionJobsResponse::ListTranscriptionJobsResponse(
        const ListTranscriptionJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new ListTranscriptionJobsResponsePrivate(this), parent)
{
    setRequest(new ListTranscriptionJobsRequest(request));
    setReply(reply);
}

const ListTranscriptionJobsRequest * ListTranscriptionJobsResponse::request() const
{
    Q_D(const ListTranscriptionJobsResponse);
    return static_cast<const ListTranscriptionJobsRequest *>(d->request);
}

/**
 * @brief  Parse a TranscribeService ListTranscriptionJobs response.
 *
 * @param  response  Response to parse.
 */
void ListTranscriptionJobsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListTranscriptionJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTranscriptionJobsResponsePrivate
 *
 * @brief  Private implementation for ListTranscriptionJobsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTranscriptionJobsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTranscriptionJobsResponse instance.
 */
ListTranscriptionJobsResponsePrivate::ListTranscriptionJobsResponsePrivate(
    ListTranscriptionJobsResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an TranscribeService ListTranscriptionJobsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTranscriptionJobsResponsePrivate::ListTranscriptionJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTranscriptionJobsResponse"));
    /// @todo
}

} // namespace TranscribeService
} // namespace QtAws
