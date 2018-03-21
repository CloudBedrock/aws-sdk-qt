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

#include "describecachesubnetgroupsrequest.h"
#include "describecachesubnetgroupsrequest_p.h"
#include "describecachesubnetgroupsresponse.h"
#include "elasticacherequest_p.h"

namespace AWS {
namespace ElastiCache {

/**
 * @class  DescribeCacheSubnetGroupsRequest
 *
 * @brief  Implements ElastiCache DescribeCacheSubnetGroups requests.
 *
 * @see    ElastiCacheClient::describeCacheSubnetGroups
 */

/**
 * @brief  Constructs a new DescribeCacheSubnetGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeCacheSubnetGroupsResponse::DescribeCacheSubnetGroupsResponse(

/**
 * @brief  Constructs a new DescribeCacheSubnetGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeCacheSubnetGroupsRequest::DescribeCacheSubnetGroupsRequest(const DescribeCacheSubnetGroupsRequest &other)
    : ElastiCacheRequest(new DescribeCacheSubnetGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeCacheSubnetGroupsRequest object.
 */
DescribeCacheSubnetGroupsRequest::DescribeCacheSubnetGroupsRequest()
    : ElastiCacheRequest(new DescribeCacheSubnetGroupsRequestPrivate(ElastiCacheRequest::DescribeCacheSubnetGroupsAction, this))
{

}

bool DescribeCacheSubnetGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeCacheSubnetGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeCacheSubnetGroupsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
AwsAbstractResponse * DescribeCacheSubnetGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCacheSubnetGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeCacheSubnetGroupsRequestPrivate
 *
 * @brief  Private implementation for DescribeCacheSubnetGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCacheSubnetGroupsRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public DescribeCacheSubnetGroupsRequest instance.
 */
DescribeCacheSubnetGroupsRequestPrivate::DescribeCacheSubnetGroupsRequestPrivate(
    const ElastiCacheRequest::Action action, DescribeCacheSubnetGroupsRequest * const q)
    : DescribeCacheSubnetGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCacheSubnetGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeCacheSubnetGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeCacheSubnetGroupsRequest instance.
 */
DescribeCacheSubnetGroupsRequestPrivate::DescribeCacheSubnetGroupsRequestPrivate(
    const DescribeCacheSubnetGroupsRequestPrivate &other, DescribeCacheSubnetGroupsRequest * const q)
    : DescribeCacheSubnetGroupsPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace AWS
