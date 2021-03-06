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

#include "getoperationresponse.h"
#include "getoperationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::GetOperationResponse
 * \brief The GetOperationResponse class provides an interace for ServiceDiscovery GetOperation responses.
 *
 * \inmodule QtAwsServiceDiscovery
 *
 *  Amazon Route 53 auto naming lets you configure public or private namespaces that your microservice applications run in.
 *  When instances of the service become available, you can call the auto naming API to register the instance, and Route 53
 *  automatically creates up to five DNS records and an optional health check. Clients that submit DNS queries for the
 *  service receive an answer that contains up to eight healthy
 *
 * \sa ServiceDiscoveryClient::getOperation
 */

/*!
 * Constructs a GetOperationResponse object for \a reply to \a request, with parent \a parent.
 */
GetOperationResponse::GetOperationResponse(
        const GetOperationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new GetOperationResponsePrivate(this), parent)
{
    setRequest(new GetOperationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetOperationRequest * GetOperationResponse::request() const
{
    Q_D(const GetOperationResponse);
    return static_cast<const GetOperationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceDiscovery GetOperation \a response.
 */
void GetOperationResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetOperationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceDiscovery::GetOperationResponsePrivate
 * \brief The GetOperationResponsePrivate class provides private implementation for GetOperationResponse.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a GetOperationResponsePrivate object with public implementation \a q.
 */
GetOperationResponsePrivate::GetOperationResponsePrivate(
    GetOperationResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceDiscovery GetOperation response element from \a xml.
 */
void GetOperationResponsePrivate::parseGetOperationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOperationResponse"));
    /// @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
