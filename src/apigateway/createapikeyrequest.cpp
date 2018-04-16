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

#include "createapikeyrequest.h"
#include "createapikeyrequest_p.h"
#include "createapikeyresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::CreateApiKeyRequest
 *
 * \brief The CreateApiKeyRequest class encapsulates APIGateway CreateApiKey requests.
 *
 * \ingroup APIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::createApiKey
 */

/*!
 * @brief  Constructs a new CreateApiKeyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateApiKeyRequest::CreateApiKeyRequest(const CreateApiKeyRequest &other)
    : APIGatewayRequest(new CreateApiKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateApiKeyRequest object.
 */
CreateApiKeyRequest::CreateApiKeyRequest()
    : APIGatewayRequest(new CreateApiKeyRequestPrivate(APIGatewayRequest::CreateApiKeyAction, this))
{

}

/*!
 * \reimp
 */
bool CreateApiKeyRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateApiKeyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateApiKeyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateApiKeyRequest::response(QNetworkReply * const reply) const
{
    return new CreateApiKeyResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateApiKeyRequestPrivate
 *
 * @brief  Private implementation for CreateApiKeyRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateApiKeyRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public CreateApiKeyRequest instance.
 */
CreateApiKeyRequestPrivate::CreateApiKeyRequestPrivate(
    const APIGatewayRequest::Action action, CreateApiKeyRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateApiKeyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateApiKeyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateApiKeyRequest instance.
 */
CreateApiKeyRequestPrivate::CreateApiKeyRequestPrivate(
    const CreateApiKeyRequestPrivate &other, CreateApiKeyRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
