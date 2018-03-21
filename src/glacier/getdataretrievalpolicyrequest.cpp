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

#include "getdataretrievalpolicyrequest.h"
#include "getdataretrievalpolicyrequest_p.h"
#include "getdataretrievalpolicyresponse.h"
#include "glacierrequest_p.h"

namespace AWS {
namespace Glacier {

/**
 * @class  GetDataRetrievalPolicyRequest
 *
 * @brief  Implements Glacier GetDataRetrievalPolicy requests.
 *
 * @see    GlacierClient::getDataRetrievalPolicy
 */

/**
 * @brief  Constructs a new GetDataRetrievalPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDataRetrievalPolicyResponse::GetDataRetrievalPolicyResponse(

/**
 * @brief  Constructs a new GetDataRetrievalPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDataRetrievalPolicyRequest::GetDataRetrievalPolicyRequest(const GetDataRetrievalPolicyRequest &other)
    : GlacierRequest(new GetDataRetrievalPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDataRetrievalPolicyRequest object.
 */
GetDataRetrievalPolicyRequest::GetDataRetrievalPolicyRequest()
    : GlacierRequest(new GetDataRetrievalPolicyRequestPrivate(GlacierRequest::GetDataRetrievalPolicyAction, this))
{

}

bool GetDataRetrievalPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDataRetrievalPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDataRetrievalPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlacierClient::send
 */
AwsAbstractResponse * GetDataRetrievalPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetDataRetrievalPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDataRetrievalPolicyRequestPrivate
 *
 * @brief  Private implementation for GetDataRetrievalPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDataRetrievalPolicyRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public GetDataRetrievalPolicyRequest instance.
 */
GetDataRetrievalPolicyRequestPrivate::GetDataRetrievalPolicyRequestPrivate(
    const GlacierRequest::Action action, GetDataRetrievalPolicyRequest * const q)
    : GetDataRetrievalPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDataRetrievalPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDataRetrievalPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDataRetrievalPolicyRequest instance.
 */
GetDataRetrievalPolicyRequestPrivate::GetDataRetrievalPolicyRequestPrivate(
    const GetDataRetrievalPolicyRequestPrivate &other, GetDataRetrievalPolicyRequest * const q)
    : GetDataRetrievalPolicyPrivate(other, q)
{

}
