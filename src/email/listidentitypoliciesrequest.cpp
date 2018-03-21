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

#include "listidentitypoliciesrequest.h"
#include "listidentitypoliciesrequest_p.h"
#include "listidentitypoliciesresponse.h"
#include "sesrequest_p.h"

namespace AWS {
namespace SES {

/**
 * @class  ListIdentityPoliciesRequest
 *
 * @brief  Implements SES ListIdentityPolicies requests.
 *
 * @see    SESClient::listIdentityPolicies
 */

/**
 * @brief  Constructs a new ListIdentityPoliciesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListIdentityPoliciesResponse::ListIdentityPoliciesResponse(

/**
 * @brief  Constructs a new ListIdentityPoliciesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListIdentityPoliciesRequest::ListIdentityPoliciesRequest(const ListIdentityPoliciesRequest &other)
    : SESRequest(new ListIdentityPoliciesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListIdentityPoliciesRequest object.
 */
ListIdentityPoliciesRequest::ListIdentityPoliciesRequest()
    : SESRequest(new ListIdentityPoliciesRequestPrivate(SESRequest::ListIdentityPoliciesAction, this))
{

}

bool ListIdentityPoliciesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListIdentityPoliciesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListIdentityPoliciesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * ListIdentityPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListIdentityPoliciesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListIdentityPoliciesRequestPrivate
 *
 * @brief  Private implementation for ListIdentityPoliciesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListIdentityPoliciesRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public ListIdentityPoliciesRequest instance.
 */
ListIdentityPoliciesRequestPrivate::ListIdentityPoliciesRequestPrivate(
    const SESRequest::Action action, ListIdentityPoliciesRequest * const q)
    : ListIdentityPoliciesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListIdentityPoliciesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListIdentityPoliciesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListIdentityPoliciesRequest instance.
 */
ListIdentityPoliciesRequestPrivate::ListIdentityPoliciesRequestPrivate(
    const ListIdentityPoliciesRequestPrivate &other, ListIdentityPoliciesRequest * const q)
    : ListIdentityPoliciesPrivate(other, q)
{

}
