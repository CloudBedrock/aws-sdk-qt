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

#include "getidrequest.h"
#include "getidrequest_p.h"
#include "getidresponse.h"
#include "cognitoidentityrequest_p.h"

namespace AWS {
namespace CognitoIdentity {

/**
 * @class  GetIdRequest
 *
 * @brief  Implements CognitoIdentity GetId requests.
 *
 * @see    CognitoIdentityClient::getId
 */

/**
 * @brief  Constructs a new GetIdResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetIdResponse::GetIdResponse(

/**
 * @brief  Constructs a new GetIdRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetIdRequest::GetIdRequest(const GetIdRequest &other)
    : CognitoIdentityRequest(new GetIdRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetIdRequest object.
 */
GetIdRequest::GetIdRequest()
    : CognitoIdentityRequest(new GetIdRequestPrivate(CognitoIdentityRequest::GetIdAction, this))
{

}

bool GetIdRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetIdResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetIdResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityClient::send
 */
AwsAbstractResponse * GetIdRequest::response(QNetworkReply * const reply) const
{
    return new GetIdResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetIdRequestPrivate
 *
 * @brief  Private implementation for GetIdRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetIdRequestPrivate object.
 *
 * @param  action  CognitoIdentity action being performed.
 * @param  q       Pointer to this object's public GetIdRequest instance.
 */
GetIdRequestPrivate::GetIdRequestPrivate(
    const CognitoIdentityRequest::Action action, GetIdRequest * const q)
    : GetIdPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetIdRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetIdRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetIdRequest instance.
 */
GetIdRequestPrivate::GetIdRequestPrivate(
    const GetIdRequestPrivate &other, GetIdRequest * const q)
    : GetIdPrivate(other, q)
{

}

} // namespace CognitoIdentity
} // namespace AWS
