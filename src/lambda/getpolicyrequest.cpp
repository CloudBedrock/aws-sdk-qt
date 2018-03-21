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

#include "getpolicyrequest.h"
#include "getpolicyrequest_p.h"
#include "getpolicyresponse.h"
#include "lambdarequest_p.h"

namespace AWS {
namespace Lambda {

/**
 * @class  GetPolicyRequest
 *
 * @brief  Implements Lambda GetPolicy requests.
 *
 * @see    LambdaClient::getPolicy
 */

/**
 * @brief  Constructs a new GetPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetPolicyResponse::GetPolicyResponse(

/**
 * @brief  Constructs a new GetPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetPolicyRequest::GetPolicyRequest(const GetPolicyRequest &other)
    : LambdaRequest(new GetPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetPolicyRequest object.
 */
GetPolicyRequest::GetPolicyRequest()
    : LambdaRequest(new GetPolicyRequestPrivate(LambdaRequest::GetPolicyAction, this))
{

}

bool GetPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LambdaClient::send
 */
AwsAbstractResponse * GetPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetPolicyRequestPrivate
 *
 * @brief  Private implementation for GetPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPolicyRequestPrivate object.
 *
 * @param  action  Lambda action being performed.
 * @param  q       Pointer to this object's public GetPolicyRequest instance.
 */
GetPolicyRequestPrivate::GetPolicyRequestPrivate(
    const LambdaRequest::Action action, GetPolicyRequest * const q)
    : GetPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetPolicyRequest instance.
 */
GetPolicyRequestPrivate::GetPolicyRequestPrivate(
    const GetPolicyRequestPrivate &other, GetPolicyRequest * const q)
    : GetPolicyPrivate(other, q)
{

}

} // namespace Lambda
} // namespace AWS
