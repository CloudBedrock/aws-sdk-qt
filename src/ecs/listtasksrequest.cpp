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

#include "listtasksrequest.h"
#include "listtasksrequest_p.h"
#include "listtasksresponse.h"
#include "ecsrequest_p.h"

namespace QtAws {
namespace ECS {

/**
 * @class  ListTasksRequest
 *
 * @brief  Implements ECS ListTasks requests.
 *
 * @see    ECSClient::listTasks
 */

/**
 * @brief  Constructs a new ListTasksRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTasksRequest::ListTasksRequest(const ListTasksRequest &other)
    : ECSRequest(new ListTasksRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListTasksRequest object.
 */
ListTasksRequest::ListTasksRequest()
    : ECSRequest(new ListTasksRequestPrivate(ECSRequest::ListTasksAction, this))
{

}

bool ListTasksRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListTasksResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTasksResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECSClient::send
 */
AwsAbstractResponse * ListTasksRequest::response(QNetworkReply * const reply) const
{
    return new ListTasksResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListTasksRequestPrivate
 *
 * @brief  Private implementation for ListTasksRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTasksRequestPrivate object.
 *
 * @param  action  ECS action being performed.
 * @param  q       Pointer to this object's public ListTasksRequest instance.
 */
ListTasksRequestPrivate::ListTasksRequestPrivate(
    const ECSRequest::Action action, ListTasksRequest * const q)
    : ListTasksPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListTasksRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTasksRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTasksRequest instance.
 */
ListTasksRequestPrivate::ListTasksRequestPrivate(
    const ListTasksRequestPrivate &other, ListTasksRequest * const q)
    : ListTasksPrivate(other, q)
{

}

} // namespace ECS
} // namespace QtAws
