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

#include "listgrouppoliciesrequest.h"
#include "listgrouppoliciesrequest_p.h"
#include "listgrouppoliciesresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  ListGroupPoliciesRequest
 *
 * @brief  Implements IAM ListGroupPolicies requests.
 *
 * @see    IAMClient::listGroupPolicies
 */

/**
 * @brief  Constructs a new ListGroupPoliciesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListGroupPoliciesResponse::ListGroupPoliciesResponse(

/**
 * @brief  Constructs a new ListGroupPoliciesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListGroupPoliciesRequest::ListGroupPoliciesRequest(const ListGroupPoliciesRequest &other)
    : IAMRequest(new ListGroupPoliciesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListGroupPoliciesRequest object.
 */
ListGroupPoliciesRequest::ListGroupPoliciesRequest()
    : IAMRequest(new ListGroupPoliciesRequestPrivate(IAMRequest::ListGroupPoliciesAction, this))
{

}

bool ListGroupPoliciesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListGroupPoliciesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListGroupPoliciesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * ListGroupPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListGroupPoliciesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListGroupPoliciesRequestPrivate
 *
 * @brief  Private implementation for ListGroupPoliciesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListGroupPoliciesRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public ListGroupPoliciesRequest instance.
 */
ListGroupPoliciesRequestPrivate::ListGroupPoliciesRequestPrivate(
    const IAMRequest::Action action, ListGroupPoliciesRequest * const q)
    : ListGroupPoliciesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListGroupPoliciesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListGroupPoliciesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListGroupPoliciesRequest instance.
 */
ListGroupPoliciesRequestPrivate::ListGroupPoliciesRequestPrivate(
    const ListGroupPoliciesRequestPrivate &other, ListGroupPoliciesRequest * const q)
    : ListGroupPoliciesPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
