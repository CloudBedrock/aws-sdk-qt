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

#include "listdashboardsrequest.h"
#include "listdashboardsrequest_p.h"
#include "listdashboardsresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/**
 * @class  ListDashboardsRequest
 *
 * @brief  Implements CloudWatch ListDashboards requests.
 *
 * @see    CloudWatchClient::listDashboards
 */

/**
 * @brief  Constructs a new ListDashboardsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListDashboardsRequest::ListDashboardsRequest(const ListDashboardsRequest &other)
    : CloudWatchRequest(new ListDashboardsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListDashboardsRequest object.
 */
ListDashboardsRequest::ListDashboardsRequest()
    : CloudWatchRequest(new ListDashboardsRequestPrivate(CloudWatchRequest::ListDashboardsAction, this))
{

}

bool ListDashboardsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListDashboardsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListDashboardsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudWatchClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDashboardsRequest::response(QNetworkReply * const reply) const
{
    return new ListDashboardsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListDashboardsRequestPrivate
 *
 * @brief  Private implementation for ListDashboardsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDashboardsRequestPrivate object.
 *
 * @param  action  CloudWatch action being performed.
 * @param  q       Pointer to this object's public ListDashboardsRequest instance.
 */
ListDashboardsRequestPrivate::ListDashboardsRequestPrivate(
    const CloudWatchRequest::Action action, ListDashboardsRequest * const q)
    : CloudWatchRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListDashboardsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListDashboardsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListDashboardsRequest instance.
 */
ListDashboardsRequestPrivate::ListDashboardsRequestPrivate(
    const ListDashboardsRequestPrivate &other, ListDashboardsRequest * const q)
    : CloudWatchRequestPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws
