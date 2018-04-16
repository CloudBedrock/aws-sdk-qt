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

#include "deletedeploymentrequest.h"
#include "deletedeploymentrequest_p.h"
#include "deletedeploymentresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::DeleteDeploymentRequest
 *
 * \brief The DeleteDeploymentRequest class provides an interface for APIGateway DeleteDeployment requests.
 *
 * \ingroup APIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::deleteDeployment
 */

/*!
 * @brief  Constructs a new DeleteDeploymentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDeploymentRequest::DeleteDeploymentRequest(const DeleteDeploymentRequest &other)
    : APIGatewayRequest(new DeleteDeploymentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteDeploymentRequest object.
 */
DeleteDeploymentRequest::DeleteDeploymentRequest()
    : APIGatewayRequest(new DeleteDeploymentRequestPrivate(APIGatewayRequest::DeleteDeploymentAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDeploymentRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteDeploymentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDeploymentResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDeploymentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDeploymentResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteDeploymentRequestPrivate
 *
 * @brief  Private implementation for DeleteDeploymentRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteDeploymentRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public DeleteDeploymentRequest instance.
 */
DeleteDeploymentRequestPrivate::DeleteDeploymentRequestPrivate(
    const APIGatewayRequest::Action action, DeleteDeploymentRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteDeploymentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDeploymentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDeploymentRequest instance.
 */
DeleteDeploymentRequestPrivate::DeleteDeploymentRequestPrivate(
    const DeleteDeploymentRequestPrivate &other, DeleteDeploymentRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
