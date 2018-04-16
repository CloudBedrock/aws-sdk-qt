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

#include "deleterequestvalidatorrequest.h"
#include "deleterequestvalidatorrequest_p.h"
#include "deleterequestvalidatorresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::DeleteRequestValidatorRequest
 *
 * \brief The DeleteRequestValidatorRequest class encapsulates APIGateway DeleteRequestValidator requests.
 *
 * \ingroup APIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::deleteRequestValidator
 */

/*!
 * @brief  Constructs a new DeleteRequestValidatorRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteRequestValidatorRequest::DeleteRequestValidatorRequest(const DeleteRequestValidatorRequest &other)
    : APIGatewayRequest(new DeleteRequestValidatorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteRequestValidatorRequest object.
 */
DeleteRequestValidatorRequest::DeleteRequestValidatorRequest()
    : APIGatewayRequest(new DeleteRequestValidatorRequestPrivate(APIGatewayRequest::DeleteRequestValidatorAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRequestValidatorRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteRequestValidatorResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteRequestValidatorResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRequestValidatorRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRequestValidatorResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteRequestValidatorRequestPrivate
 *
 * @brief  Private implementation for DeleteRequestValidatorRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteRequestValidatorRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public DeleteRequestValidatorRequest instance.
 */
DeleteRequestValidatorRequestPrivate::DeleteRequestValidatorRequestPrivate(
    const APIGatewayRequest::Action action, DeleteRequestValidatorRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteRequestValidatorRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteRequestValidatorRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteRequestValidatorRequest instance.
 */
DeleteRequestValidatorRequestPrivate::DeleteRequestValidatorRequestPrivate(
    const DeleteRequestValidatorRequestPrivate &other, DeleteRequestValidatorRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
