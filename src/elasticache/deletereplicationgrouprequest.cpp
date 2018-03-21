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

#include "deletereplicationgrouprequest.h"
#include "deletereplicationgrouprequest_p.h"
#include "deletereplicationgroupresponse.h"
#include "elasticacherequest_p.h"

namespace AWS {
namespace ElastiCache {

/**
 * @class  DeleteReplicationGroupRequest
 *
 * @brief  Implements ElastiCache DeleteReplicationGroup requests.
 *
 * @see    ElastiCacheClient::deleteReplicationGroup
 */

/**
 * @brief  Constructs a new DeleteReplicationGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteReplicationGroupResponse::DeleteReplicationGroupResponse(

/**
 * @brief  Constructs a new DeleteReplicationGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteReplicationGroupRequest::DeleteReplicationGroupRequest(const DeleteReplicationGroupRequest &other)
    : ElastiCacheRequest(new DeleteReplicationGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteReplicationGroupRequest object.
 */
DeleteReplicationGroupRequest::DeleteReplicationGroupRequest()
    : ElastiCacheRequest(new DeleteReplicationGroupRequestPrivate(ElastiCacheRequest::DeleteReplicationGroupAction, this))
{

}

bool DeleteReplicationGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteReplicationGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteReplicationGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
AwsAbstractResponse * DeleteReplicationGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReplicationGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteReplicationGroupRequestPrivate
 *
 * @brief  Private implementation for DeleteReplicationGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteReplicationGroupRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public DeleteReplicationGroupRequest instance.
 */
DeleteReplicationGroupRequestPrivate::DeleteReplicationGroupRequestPrivate(
    const ElastiCacheRequest::Action action, DeleteReplicationGroupRequest * const q)
    : DeleteReplicationGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteReplicationGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteReplicationGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteReplicationGroupRequest instance.
 */
DeleteReplicationGroupRequestPrivate::DeleteReplicationGroupRequestPrivate(
    const DeleteReplicationGroupRequestPrivate &other, DeleteReplicationGroupRequest * const q)
    : DeleteReplicationGroupPrivate(other, q)
{

}
