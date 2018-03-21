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

#include "deletecachesubnetgrouprequest.h"
#include "deletecachesubnetgrouprequest_p.h"
#include "deletecachesubnetgroupresponse.h"
#include "elasticacherequest_p.h"

namespace AWS {
namespace ElastiCache {

/**
 * @class  DeleteCacheSubnetGroupRequest
 *
 * @brief  Implements ElastiCache DeleteCacheSubnetGroup requests.
 *
 * @see    ElastiCacheClient::deleteCacheSubnetGroup
 */

/**
 * @brief  Constructs a new DeleteCacheSubnetGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteCacheSubnetGroupResponse::DeleteCacheSubnetGroupResponse(

/**
 * @brief  Constructs a new DeleteCacheSubnetGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteCacheSubnetGroupRequest::DeleteCacheSubnetGroupRequest(const DeleteCacheSubnetGroupRequest &other)
    : ElastiCacheRequest(new DeleteCacheSubnetGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteCacheSubnetGroupRequest object.
 */
DeleteCacheSubnetGroupRequest::DeleteCacheSubnetGroupRequest()
    : ElastiCacheRequest(new DeleteCacheSubnetGroupRequestPrivate(ElastiCacheRequest::DeleteCacheSubnetGroupAction, this))
{

}

bool DeleteCacheSubnetGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteCacheSubnetGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteCacheSubnetGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
AwsAbstractResponse * DeleteCacheSubnetGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCacheSubnetGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteCacheSubnetGroupRequestPrivate
 *
 * @brief  Private implementation for DeleteCacheSubnetGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCacheSubnetGroupRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public DeleteCacheSubnetGroupRequest instance.
 */
DeleteCacheSubnetGroupRequestPrivate::DeleteCacheSubnetGroupRequestPrivate(
    const ElastiCacheRequest::Action action, DeleteCacheSubnetGroupRequest * const q)
    : DeleteCacheSubnetGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCacheSubnetGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteCacheSubnetGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteCacheSubnetGroupRequest instance.
 */
DeleteCacheSubnetGroupRequestPrivate::DeleteCacheSubnetGroupRequestPrivate(
    const DeleteCacheSubnetGroupRequestPrivate &other, DeleteCacheSubnetGroupRequest * const q)
    : DeleteCacheSubnetGroupPrivate(other, q)
{

}
