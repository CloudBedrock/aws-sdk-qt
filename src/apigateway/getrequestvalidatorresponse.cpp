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

#include "getrequestvalidatorresponse.h"
#include "getrequestvalidatorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetRequestValidatorResponse
 * \brief The GetRequestValidatorResponse class provides an interace for APIGateway GetRequestValidator responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getRequestValidator
 */

/*!
 * Constructs a GetRequestValidatorResponse object for \a reply to \a request, with parent \a parent.
 */
GetRequestValidatorResponse::GetRequestValidatorResponse(
        const GetRequestValidatorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetRequestValidatorResponsePrivate(this), parent)
{
    setRequest(new GetRequestValidatorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRequestValidatorRequest * GetRequestValidatorResponse::request() const
{
    Q_D(const GetRequestValidatorResponse);
    return static_cast<const GetRequestValidatorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway GetRequestValidator \a response.
 */
void GetRequestValidatorResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetRequestValidatorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::GetRequestValidatorResponsePrivate
 * \brief The GetRequestValidatorResponsePrivate class provides private implementation for GetRequestValidatorResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetRequestValidatorResponsePrivate object with public implementation \a q.
 */
GetRequestValidatorResponsePrivate::GetRequestValidatorResponsePrivate(
    GetRequestValidatorResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway GetRequestValidator response element from \a xml.
 */
void GetRequestValidatorResponsePrivate::parseGetRequestValidatorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRequestValidatorResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
