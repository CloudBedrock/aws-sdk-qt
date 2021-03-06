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

#include "getassessmentreportresponse.h"
#include "getassessmentreportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::GetAssessmentReportResponse
 * \brief The GetAssessmentReportResponse class provides an interace for Inspector GetAssessmentReport responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::getAssessmentReport
 */

/*!
 * Constructs a GetAssessmentReportResponse object for \a reply to \a request, with parent \a parent.
 */
GetAssessmentReportResponse::GetAssessmentReportResponse(
        const GetAssessmentReportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new GetAssessmentReportResponsePrivate(this), parent)
{
    setRequest(new GetAssessmentReportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAssessmentReportRequest * GetAssessmentReportResponse::request() const
{
    Q_D(const GetAssessmentReportResponse);
    return static_cast<const GetAssessmentReportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector GetAssessmentReport \a response.
 */
void GetAssessmentReportResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetAssessmentReportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::GetAssessmentReportResponsePrivate
 * \brief The GetAssessmentReportResponsePrivate class provides private implementation for GetAssessmentReportResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a GetAssessmentReportResponsePrivate object with public implementation \a q.
 */
GetAssessmentReportResponsePrivate::GetAssessmentReportResponsePrivate(
    GetAssessmentReportResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector GetAssessmentReport response element from \a xml.
 */
void GetAssessmentReportResponsePrivate::parseGetAssessmentReportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAssessmentReportResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
