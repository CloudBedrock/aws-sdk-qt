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

#include "describecachesecuritygroupsrequest.h"
#include "describecachesecuritygroupsrequest_p.h"
#include "describecachesecuritygroupsresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DescribeCacheSecurityGroupsRequest
 *
 * \brief The DescribeCacheSecurityGroupsRequest class encapsulates ElastiCache DescribeCacheSecurityGroups requests.
 *
 * \ingroup ElastiCache
 *
 *  <fullname>Amazon ElastiCache</fullname>
 * 
 *  Amazon ElastiCache is a web service that makes it easier to set up, operate, and scale a distributed cache in the
 * 
 *  cloud>
 * 
 *  With ElastiCache, customers get all of the benefits of a high-performance, in-memory cache with less of the
 *  administrative burden involved in launching and managing a distributed cache. The service makes setup, scaling, and
 *  cluster failure handling much simpler than in a self-managed cache
 * 
 *  deployment>
 * 
 *  In addition, through integration with Amazon CloudWatch, customers get enhanced visibility into the key performance
 *  statistics associated with their cache and can receive alarms if a part of their cache runs
 *
 * \sa ElastiCacheClient::describeCacheSecurityGroups
 */

/*!
 * @brief  Constructs a new DescribeCacheSecurityGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeCacheSecurityGroupsRequest::DescribeCacheSecurityGroupsRequest(const DescribeCacheSecurityGroupsRequest &other)
    : ElastiCacheRequest(new DescribeCacheSecurityGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeCacheSecurityGroupsRequest object.
 */
DescribeCacheSecurityGroupsRequest::DescribeCacheSecurityGroupsRequest()
    : ElastiCacheRequest(new DescribeCacheSecurityGroupsRequestPrivate(ElastiCacheRequest::DescribeCacheSecurityGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeCacheSecurityGroupsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeCacheSecurityGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeCacheSecurityGroupsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCacheSecurityGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCacheSecurityGroupsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeCacheSecurityGroupsRequestPrivate
 *
 * @brief  Private implementation for DescribeCacheSecurityGroupsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeCacheSecurityGroupsRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public DescribeCacheSecurityGroupsRequest instance.
 */
DescribeCacheSecurityGroupsRequestPrivate::DescribeCacheSecurityGroupsRequestPrivate(
    const ElastiCacheRequest::Action action, DescribeCacheSecurityGroupsRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeCacheSecurityGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeCacheSecurityGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeCacheSecurityGroupsRequest instance.
 */
DescribeCacheSecurityGroupsRequestPrivate::DescribeCacheSecurityGroupsRequestPrivate(
    const DescribeCacheSecurityGroupsRequestPrivate &other, DescribeCacheSecurityGroupsRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
