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

#include "listaccountsforparentrequest.h"
#include "listaccountsforparentrequest_p.h"
#include "listaccountsforparentresponse.h"
#include "organizationsrequest_p.h"

namespace QtAws {
namespace Organizations {

/**
 * @class  ListAccountsForParentRequest
 *
 * @brief  Implements Organizations ListAccountsForParent requests.
 *
 * @see    OrganizationsClient::listAccountsForParent
 */

/**
 * @brief  Constructs a new ListAccountsForParentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListAccountsForParentRequest::ListAccountsForParentRequest(const ListAccountsForParentRequest &other)
    : OrganizationsRequest(new ListAccountsForParentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListAccountsForParentRequest object.
 */
ListAccountsForParentRequest::ListAccountsForParentRequest()
    : OrganizationsRequest(new ListAccountsForParentRequestPrivate(OrganizationsRequest::ListAccountsForParentAction, this))
{

}

bool ListAccountsForParentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListAccountsForParentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListAccountsForParentResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAccountsForParentRequest::response(QNetworkReply * const reply) const
{
    return new ListAccountsForParentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListAccountsForParentRequestPrivate
 *
 * @brief  Private implementation for ListAccountsForParentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAccountsForParentRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public ListAccountsForParentRequest instance.
 */
ListAccountsForParentRequestPrivate::ListAccountsForParentRequestPrivate(
    const OrganizationsRequest::Action action, ListAccountsForParentRequest * const q)
    : OrganizationsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListAccountsForParentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListAccountsForParentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListAccountsForParentRequest instance.
 */
ListAccountsForParentRequestPrivate::ListAccountsForParentRequestPrivate(
    const ListAccountsForParentRequestPrivate &other, ListAccountsForParentRequest * const q)
    : OrganizationsRequestPrivate(other, q)
{

}

} // namespace Organizations
} // namespace QtAws
