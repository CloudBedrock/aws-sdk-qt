/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listjobsresponse.h"
#include "listjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::ListJobsResponse
 * \brief The ListJobsResponse class provides an interace for MediaConvert ListJobs responses.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::listJobs
 */

/*!
 * Constructs a ListJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListJobsResponse::ListJobsResponse(
        const ListJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new ListJobsResponsePrivate(this), parent)
{
    setRequest(new ListJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListJobsRequest * ListJobsResponse::request() const
{
    Q_D(const ListJobsResponse);
    return static_cast<const ListJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConvert ListJobs \a response.
 */
void ListJobsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConvert::ListJobsResponsePrivate
 * \brief The ListJobsResponsePrivate class provides private implementation for ListJobsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a ListJobsResponsePrivate object with public implementation \a q.
 */
ListJobsResponsePrivate::ListJobsResponsePrivate(
    ListJobsResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/*!
 * Parses a MediaConvert ListJobs response element from \a xml.
 */
void ListJobsResponsePrivate::parseListJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListJobsResponse"));
    /// @todo
}

} // namespace MediaConvert
} // namespace QtAws
