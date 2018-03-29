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

#include "listresourcedelegatesrequest.h"
#include "listresourcedelegatesrequest_p.h"
#include "listresourcedelegatesresponse.h"
#include "workmailrequest_p.h"

namespace QtAws {
namespace WorkMail {

/**
 * @class  ListResourceDelegatesRequest
 *
 * @brief  Implements WorkMail ListResourceDelegates requests.
 *
 * @see    WorkMailClient::listResourceDelegates
 */

/**
 * @brief  Constructs a new ListResourceDelegatesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListResourceDelegatesRequest::ListResourceDelegatesRequest(const ListResourceDelegatesRequest &other)
    : WorkMailRequest(new ListResourceDelegatesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListResourceDelegatesRequest object.
 */
ListResourceDelegatesRequest::ListResourceDelegatesRequest()
    : WorkMailRequest(new ListResourceDelegatesRequestPrivate(WorkMailRequest::ListResourceDelegatesAction, this))
{

}

bool ListResourceDelegatesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListResourceDelegatesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListResourceDelegatesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WorkMailClient::send
 */
QtAws::Core::AwsAbstractResponse * ListResourceDelegatesRequest::response(QNetworkReply * const reply) const
{
    return new ListResourceDelegatesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListResourceDelegatesRequestPrivate
 *
 * @brief  Private implementation for ListResourceDelegatesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListResourceDelegatesRequestPrivate object.
 *
 * @param  action  WorkMail action being performed.
 * @param  q       Pointer to this object's public ListResourceDelegatesRequest instance.
 */
ListResourceDelegatesRequestPrivate::ListResourceDelegatesRequestPrivate(
    const WorkMailRequest::Action action, ListResourceDelegatesRequest * const q)
    : WorkMailRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListResourceDelegatesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListResourceDelegatesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListResourceDelegatesRequest instance.
 */
ListResourceDelegatesRequestPrivate::ListResourceDelegatesRequestPrivate(
    const ListResourceDelegatesRequestPrivate &other, ListResourceDelegatesRequest * const q)
    : WorkMailRequestPrivate(other, q)
{

}

} // namespace WorkMail
} // namespace QtAws
