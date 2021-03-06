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

#include "getmethodresponse.h"
#include "getmethodresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetMethodResponse
 * \brief The GetMethodResponse class provides an interace for APIGateway GetMethod responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getMethod
 */

/*!
 * Constructs a GetMethodResponse object for \a reply to \a request, with parent \a parent.
 */
GetMethodResponse::GetMethodResponse(
        const GetMethodRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetMethodResponsePrivate(this), parent)
{
    setRequest(new GetMethodRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMethodRequest * GetMethodResponse::request() const
{
    Q_D(const GetMethodResponse);
    return static_cast<const GetMethodRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway GetMethod \a response.
 */
void GetMethodResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetMethodResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::GetMethodResponsePrivate
 * \brief The GetMethodResponsePrivate class provides private implementation for GetMethodResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetMethodResponsePrivate object with public implementation \a q.
 */
GetMethodResponsePrivate::GetMethodResponsePrivate(
    GetMethodResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway GetMethod response element from \a xml.
 */
void GetMethodResponsePrivate::parseGetMethodResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMethodResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
