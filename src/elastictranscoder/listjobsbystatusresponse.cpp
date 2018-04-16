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

#include "listjobsbystatusresponse.h"
#include "listjobsbystatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::ListJobsByStatusResponse
 *
 * \brief The ListJobsByStatusResponse class provides an interace for ElasticTranscoder ListJobsByStatus responses.
 *
 * \ingroup ElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::listJobsByStatus
 */

/*!
 * @brief  Constructs a new ListJobsByStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListJobsByStatusResponse::ListJobsByStatusResponse(
        const ListJobsByStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticTranscoderResponse(new ListJobsByStatusResponsePrivate(this), parent)
{
    setRequest(new ListJobsByStatusRequest(request));
    setReply(reply);
}

const ListJobsByStatusRequest * ListJobsByStatusResponse::request() const
{
    Q_D(const ListJobsByStatusResponse);
    return static_cast<const ListJobsByStatusRequest *>(d->request);
}

/*!
 * @brief  Parse a ElasticTranscoder ListJobsByStatus response.
 *
 * @param  response  Response to parse.
 */
void ListJobsByStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListJobsByStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListJobsByStatusResponsePrivate
 *
 * \brief Private implementation for ListJobsByStatusResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListJobsByStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListJobsByStatusResponse instance.
 */
ListJobsByStatusResponsePrivate::ListJobsByStatusResponsePrivate(
    ListJobsByStatusResponse * const q) : ElasticTranscoderResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ElasticTranscoder ListJobsByStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListJobsByStatusResponsePrivate::parseListJobsByStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListJobsByStatusResponse"));
    /// @todo
}

} // namespace ElasticTranscoder
} // namespace QtAws
