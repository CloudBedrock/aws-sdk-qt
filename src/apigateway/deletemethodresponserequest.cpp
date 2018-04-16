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

#include "deletemethodresponserequest.h"
#include "deletemethodresponserequest_p.h"
#include "deletemethodresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::DeleteMethodResponseRequest
 *
 * \brief The DeleteMethodResponseRequest class encapsulates APIGateway DeleteMethodResponse requests.
 *
 * \ingroup APIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::deleteMethodResponse
 */

/*!
 * @brief  Constructs a new DeleteMethodResponseRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteMethodResponseRequest::DeleteMethodResponseRequest(const DeleteMethodResponseRequest &other)
    : APIGatewayRequest(new DeleteMethodResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteMethodResponseRequest object.
 */
DeleteMethodResponseRequest::DeleteMethodResponseRequest()
    : APIGatewayRequest(new DeleteMethodResponseRequestPrivate(APIGatewayRequest::DeleteMethodResponseAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteMethodResponseRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteMethodResponseResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteMethodResponseResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMethodResponseRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMethodResponseResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteMethodResponseRequestPrivate
 *
 * @brief  Private implementation for DeleteMethodResponseRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteMethodResponseRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public DeleteMethodResponseRequest instance.
 */
DeleteMethodResponseRequestPrivate::DeleteMethodResponseRequestPrivate(
    const APIGatewayRequest::Action action, DeleteMethodResponseRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteMethodResponseRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteMethodResponseRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteMethodResponseRequest instance.
 */
DeleteMethodResponseRequestPrivate::DeleteMethodResponseRequestPrivate(
    const DeleteMethodResponseRequestPrivate &other, DeleteMethodResponseRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
