/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putmethodresponserequest.h"
#include "putmethodresponserequest_p.h"
#include "putmethodresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  PutMethodResponseRequest
 *
 * @brief  Implements APIGateway PutMethodResponse requests.
 *
 * @see    APIGatewayClient::putMethodResponse
 */

/**
 * @brief  Constructs a new PutMethodResponseResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutMethodResponseResponse::PutMethodResponseResponse(

/**
 * @brief  Constructs a new PutMethodResponseRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutMethodResponseRequest::PutMethodResponseRequest(const PutMethodResponseRequest &other)
    : APIGatewayRequest(new PutMethodResponseRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutMethodResponseRequest object.
 */
PutMethodResponseRequest::PutMethodResponseRequest()
    : APIGatewayRequest(new PutMethodResponseRequestPrivate(APIGatewayRequest::PutMethodResponseAction, this))
{

}

bool PutMethodResponseRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutMethodResponseResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutMethodResponseResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * PutMethodResponseRequest::response(QNetworkReply * const reply) const
{
    return new PutMethodResponseResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutMethodResponseRequestPrivate
 *
 * @brief  Private implementation for PutMethodResponseRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutMethodResponseRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public PutMethodResponseRequest instance.
 */
PutMethodResponseRequestPrivate::PutMethodResponseRequestPrivate(
    const APIGatewayRequest::Action action, PutMethodResponseRequest * const q)
    : PutMethodResponsePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutMethodResponseRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutMethodResponseRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutMethodResponseRequest instance.
 */
PutMethodResponseRequestPrivate::PutMethodResponseRequestPrivate(
    const PutMethodResponseRequestPrivate &other, PutMethodResponseRequest * const q)
    : PutMethodResponsePrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
