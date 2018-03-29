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

#include "deletecacheparametergrouprequest.h"
#include "deletecacheparametergrouprequest_p.h"
#include "deletecacheparametergroupresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/**
 * @class  DeleteCacheParameterGroupRequest
 *
 * @brief  Implements ElastiCache DeleteCacheParameterGroup requests.
 *
 * @see    ElastiCacheClient::deleteCacheParameterGroup
 */

/**
 * @brief  Constructs a new DeleteCacheParameterGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteCacheParameterGroupRequest::DeleteCacheParameterGroupRequest(const DeleteCacheParameterGroupRequest &other)
    : ElastiCacheRequest(new DeleteCacheParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteCacheParameterGroupRequest object.
 */
DeleteCacheParameterGroupRequest::DeleteCacheParameterGroupRequest()
    : ElastiCacheRequest(new DeleteCacheParameterGroupRequestPrivate(ElastiCacheRequest::DeleteCacheParameterGroupAction, this))
{

}

bool DeleteCacheParameterGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteCacheParameterGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteCacheParameterGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCacheParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCacheParameterGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteCacheParameterGroupRequestPrivate
 *
 * @brief  Private implementation for DeleteCacheParameterGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCacheParameterGroupRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public DeleteCacheParameterGroupRequest instance.
 */
DeleteCacheParameterGroupRequestPrivate::DeleteCacheParameterGroupRequestPrivate(
    const ElastiCacheRequest::Action action, DeleteCacheParameterGroupRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCacheParameterGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteCacheParameterGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteCacheParameterGroupRequest instance.
 */
DeleteCacheParameterGroupRequestPrivate::DeleteCacheParameterGroupRequestPrivate(
    const DeleteCacheParameterGroupRequestPrivate &other, DeleteCacheParameterGroupRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
