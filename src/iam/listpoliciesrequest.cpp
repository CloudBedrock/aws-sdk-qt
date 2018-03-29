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

#include "listpoliciesrequest.h"
#include "listpoliciesrequest_p.h"
#include "listpoliciesresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  ListPoliciesRequest
 *
 * @brief  Implements IAM ListPolicies requests.
 *
 * @see    IAMClient::listPolicies
 */

/**
 * @brief  Constructs a new ListPoliciesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListPoliciesRequest::ListPoliciesRequest(const ListPoliciesRequest &other)
    : IAMRequest(new ListPoliciesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListPoliciesRequest object.
 */
ListPoliciesRequest::ListPoliciesRequest()
    : IAMRequest(new ListPoliciesRequestPrivate(IAMRequest::ListPoliciesAction, this))
{

}

bool ListPoliciesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListPoliciesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListPoliciesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * ListPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListPoliciesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListPoliciesRequestPrivate
 *
 * @brief  Private implementation for ListPoliciesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPoliciesRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public ListPoliciesRequest instance.
 */
ListPoliciesRequestPrivate::ListPoliciesRequestPrivate(
    const IAMRequest::Action action, ListPoliciesRequest * const q)
    : ListPoliciesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListPoliciesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListPoliciesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListPoliciesRequest instance.
 */
ListPoliciesRequestPrivate::ListPoliciesRequestPrivate(
    const ListPoliciesRequestPrivate &other, ListPoliciesRequest * const q)
    : ListPoliciesPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
