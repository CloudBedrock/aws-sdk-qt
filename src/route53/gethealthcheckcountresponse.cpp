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

#include "gethealthcheckcountresponse.h"
#include "gethealthcheckcountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetHealthCheckCountResponse
 * \brief The GetHealthCheckCountResponse class provides an interace for Route53 GetHealthCheckCount responses.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::getHealthCheckCount
 */

/*!
 * Constructs a GetHealthCheckCountResponse object for \a reply to \a request, with parent \a parent.
 */
GetHealthCheckCountResponse::GetHealthCheckCountResponse(
        const GetHealthCheckCountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetHealthCheckCountResponsePrivate(this), parent)
{
    setRequest(new GetHealthCheckCountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetHealthCheckCountRequest * GetHealthCheckCountResponse::request() const
{
    Q_D(const GetHealthCheckCountResponse);
    return static_cast<const GetHealthCheckCountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 GetHealthCheckCount \a response.
 */
void GetHealthCheckCountResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetHealthCheckCountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::GetHealthCheckCountResponsePrivate
 * \brief The GetHealthCheckCountResponsePrivate class provides private implementation for GetHealthCheckCountResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetHealthCheckCountResponsePrivate object with public implementation \a q.
 */
GetHealthCheckCountResponsePrivate::GetHealthCheckCountResponsePrivate(
    GetHealthCheckCountResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 GetHealthCheckCount response element from \a xml.
 */
void GetHealthCheckCountResponsePrivate::parseGetHealthCheckCountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetHealthCheckCountResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
