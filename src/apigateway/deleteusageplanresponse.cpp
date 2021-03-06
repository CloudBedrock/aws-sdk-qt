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

#include "deleteusageplanresponse.h"
#include "deleteusageplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::DeleteUsagePlanResponse
 * \brief The DeleteUsagePlanResponse class provides an interace for APIGateway DeleteUsagePlan responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::deleteUsagePlan
 */

/*!
 * Constructs a DeleteUsagePlanResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteUsagePlanResponse::DeleteUsagePlanResponse(
        const DeleteUsagePlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new DeleteUsagePlanResponsePrivate(this), parent)
{
    setRequest(new DeleteUsagePlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteUsagePlanRequest * DeleteUsagePlanResponse::request() const
{
    Q_D(const DeleteUsagePlanResponse);
    return static_cast<const DeleteUsagePlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway DeleteUsagePlan \a response.
 */
void DeleteUsagePlanResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteUsagePlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::DeleteUsagePlanResponsePrivate
 * \brief The DeleteUsagePlanResponsePrivate class provides private implementation for DeleteUsagePlanResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a DeleteUsagePlanResponsePrivate object with public implementation \a q.
 */
DeleteUsagePlanResponsePrivate::DeleteUsagePlanResponsePrivate(
    DeleteUsagePlanResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway DeleteUsagePlan response element from \a xml.
 */
void DeleteUsagePlanResponsePrivate::parseDeleteUsagePlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUsagePlanResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
