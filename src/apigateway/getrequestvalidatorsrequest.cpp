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

#include "getrequestvalidatorsrequest.h"
#include "getrequestvalidatorsrequest_p.h"
#include "getrequestvalidatorsresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetRequestValidatorsRequest
 *
 * \brief The GetRequestValidatorsRequest class provides an interface for APIGateway GetRequestValidators requests.
 *
 * \ingroup APIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getRequestValidators
 */

/*!
 * @brief  Constructs a new GetRequestValidatorsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetRequestValidatorsRequest::GetRequestValidatorsRequest(const GetRequestValidatorsRequest &other)
    : APIGatewayRequest(new GetRequestValidatorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetRequestValidatorsRequest object.
 */
GetRequestValidatorsRequest::GetRequestValidatorsRequest()
    : APIGatewayRequest(new GetRequestValidatorsRequestPrivate(APIGatewayRequest::GetRequestValidatorsAction, this))
{

}

/*!
 * \reimp
 */
bool GetRequestValidatorsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetRequestValidatorsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetRequestValidatorsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRequestValidatorsRequest::response(QNetworkReply * const reply) const
{
    return new GetRequestValidatorsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetRequestValidatorsRequestPrivate
 *
 * @brief  Private implementation for GetRequestValidatorsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetRequestValidatorsRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetRequestValidatorsRequest instance.
 */
GetRequestValidatorsRequestPrivate::GetRequestValidatorsRequestPrivate(
    const APIGatewayRequest::Action action, GetRequestValidatorsRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetRequestValidatorsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetRequestValidatorsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetRequestValidatorsRequest instance.
 */
GetRequestValidatorsRequestPrivate::GetRequestValidatorsRequestPrivate(
    const GetRequestValidatorsRequestPrivate &other, GetRequestValidatorsRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
