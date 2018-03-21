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

#include "listclusterjobsrequest.h"
#include "listclusterjobsrequest_p.h"
#include "listclusterjobsresponse.h"
#include "snowballrequest_p.h"

namespace AWS {
namespace Snowball {

/**
 * @class  ListClusterJobsRequest
 *
 * @brief  Implements Snowball ListClusterJobs requests.
 *
 * @see    SnowballClient::listClusterJobs
 */

/**
 * @brief  Constructs a new ListClusterJobsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListClusterJobsResponse::ListClusterJobsResponse(

/**
 * @brief  Constructs a new ListClusterJobsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListClusterJobsRequest::ListClusterJobsRequest(const ListClusterJobsRequest &other)
    : SnowballRequest(new ListClusterJobsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListClusterJobsRequest object.
 */
ListClusterJobsRequest::ListClusterJobsRequest()
    : SnowballRequest(new ListClusterJobsRequestPrivate(SnowballRequest::ListClusterJobsAction, this))
{

}

bool ListClusterJobsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListClusterJobsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListClusterJobsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SnowballClient::send
 */
AwsAbstractResponse * ListClusterJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListClusterJobsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListClusterJobsRequestPrivate
 *
 * @brief  Private implementation for ListClusterJobsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListClusterJobsRequestPrivate object.
 *
 * @param  action  Snowball action being performed.
 * @param  q       Pointer to this object's public ListClusterJobsRequest instance.
 */
ListClusterJobsRequestPrivate::ListClusterJobsRequestPrivate(
    const SnowballRequest::Action action, ListClusterJobsRequest * const q)
    : ListClusterJobsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListClusterJobsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListClusterJobsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListClusterJobsRequest instance.
 */
ListClusterJobsRequestPrivate::ListClusterJobsRequestPrivate(
    const ListClusterJobsRequestPrivate &other, ListClusterJobsRequest * const q)
    : ListClusterJobsPrivate(other, q)
{

}
