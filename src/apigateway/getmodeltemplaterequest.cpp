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

#include "getmodeltemplaterequest.h"
#include "getmodeltemplaterequest_p.h"
#include "getmodeltemplateresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetModelTemplateRequest
 *
 * \brief The GetModelTemplateRequest class encapsulates APIGateway GetModelTemplate requests.
 *
 * \ingroup APIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getModelTemplate
 */

/*!
 * @brief  Constructs a new GetModelTemplateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetModelTemplateRequest::GetModelTemplateRequest(const GetModelTemplateRequest &other)
    : APIGatewayRequest(new GetModelTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetModelTemplateRequest object.
 */
GetModelTemplateRequest::GetModelTemplateRequest()
    : APIGatewayRequest(new GetModelTemplateRequestPrivate(APIGatewayRequest::GetModelTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool GetModelTemplateRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetModelTemplateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetModelTemplateResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * GetModelTemplateRequest::response(QNetworkReply * const reply) const
{
    return new GetModelTemplateResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetModelTemplateRequestPrivate
 *
 * @brief  Private implementation for GetModelTemplateRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetModelTemplateRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetModelTemplateRequest instance.
 */
GetModelTemplateRequestPrivate::GetModelTemplateRequestPrivate(
    const APIGatewayRequest::Action action, GetModelTemplateRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetModelTemplateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetModelTemplateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetModelTemplateRequest instance.
 */
GetModelTemplateRequestPrivate::GetModelTemplateRequestPrivate(
    const GetModelTemplateRequestPrivate &other, GetModelTemplateRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
