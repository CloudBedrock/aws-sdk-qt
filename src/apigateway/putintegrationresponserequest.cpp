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

#include "putintegrationresponserequest.h"
#include "putintegrationresponserequest_p.h"
#include "putintegrationresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::PutIntegrationResponseRequest
 * \brief The PutIntegrationResponseRequest class provides an interface for APIGateway PutIntegrationResponse requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::putIntegrationResponse
 */

/*!
 * Constructs a copy of \a other.
 */
PutIntegrationResponseRequest::PutIntegrationResponseRequest(const PutIntegrationResponseRequest &other)
    : APIGatewayRequest(new PutIntegrationResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutIntegrationResponseRequest object.
 */
PutIntegrationResponseRequest::PutIntegrationResponseRequest()
    : APIGatewayRequest(new PutIntegrationResponseRequestPrivate(APIGatewayRequest::PutIntegrationResponseAction, this))
{

}

/*!
 * \reimp
 */
bool PutIntegrationResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutIntegrationResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutIntegrationResponseRequest::response(QNetworkReply * const reply) const
{
    return new PutIntegrationResponseResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::PutIntegrationResponseRequestPrivate
 * \brief The PutIntegrationResponseRequestPrivate class provides private implementation for PutIntegrationResponseRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a PutIntegrationResponseRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
PutIntegrationResponseRequestPrivate::PutIntegrationResponseRequestPrivate(
    const APIGatewayRequest::Action action, PutIntegrationResponseRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutIntegrationResponseRequest
 * class' copy constructor.
 */
PutIntegrationResponseRequestPrivate::PutIntegrationResponseRequestPrivate(
    const PutIntegrationResponseRequestPrivate &other, PutIntegrationResponseRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
