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

#include "listjobsresponse.h"
#include "listjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/**
 * @class  ListJobsResponse
 *
 * @brief  Handles MediaConvert ListJobs responses.
 *
 * @see    MediaConvertClient::listJobs
 */

/**
 * @brief  Constructs a new ListJobsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListJobsResponse::ListJobsResponse(
        const ListJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ListJobsResponse(new ListJobsResponsePrivate(this), parent)
{
    setRequest(new ListJobsRequest(request));
    setReply(reply);
}

const ListJobsRequest * ListJobsResponse::request() const
{
    Q_D(const ListJobsResponse);
    return static_cast<const ListJobsRequest *>(d->request);
}

/**
 * @brief  Parse a MediaConvert ListJobs response.
 *
 * @param  response  Response to parse.
 */
void ListJobsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListJobsResponsePrivate
 *
 * @brief  Private implementation for ListJobsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListJobsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListJobsResponse instance.
 */
ListJobsResponsePrivate::ListJobsResponsePrivate(
    ListJobsResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/**
 * @brief  Parse an MediaConvert ListJobsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListJobsResponsePrivate::parseListJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListJobsResponse"));
    /// @todo
}

} // namespace MediaConvert
} // namespace QtAws
