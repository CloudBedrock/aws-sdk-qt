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

#include "putintegrationrequest.h"
#include "putintegrationrequest_p.h"
#include "putintegrationresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::PutIntegrationRequest
 *
 * \brief The PutIntegrationRequest class encapsulates APIGateway PutIntegration requests.
 *
 * \ingroup APIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::putIntegration
 */

/*!
 * @brief  Constructs a new PutIntegrationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutIntegrationRequest::PutIntegrationRequest(const PutIntegrationRequest &other)
    : APIGatewayRequest(new PutIntegrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new PutIntegrationRequest object.
 */
PutIntegrationRequest::PutIntegrationRequest()
    : APIGatewayRequest(new PutIntegrationRequestPrivate(APIGatewayRequest::PutIntegrationAction, this))
{

}

/*!
 * \reimp
 */
bool PutIntegrationRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an PutIntegrationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutIntegrationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * PutIntegrationRequest::response(QNetworkReply * const reply) const
{
    return new PutIntegrationResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  PutIntegrationRequestPrivate
 *
 * @brief  Private implementation for PutIntegrationRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutIntegrationRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public PutIntegrationRequest instance.
 */
PutIntegrationRequestPrivate::PutIntegrationRequestPrivate(
    const APIGatewayRequest::Action action, PutIntegrationRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new PutIntegrationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutIntegrationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutIntegrationRequest instance.
 */
PutIntegrationRequestPrivate::PutIntegrationRequestPrivate(
    const PutIntegrationRequestPrivate &other, PutIntegrationRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
