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

#include "createcacheclusterrequest.h"
#include "createcacheclusterrequest_p.h"
#include "createcacheclusterresponse.h"
#include "elasticacherequest_p.h"

namespace AWS {
namespace ElastiCache {

/**
 * @class  CreateCacheClusterRequest
 *
 * @brief  Implements ElastiCache CreateCacheCluster requests.
 *
 * @see    ElastiCacheClient::createCacheCluster
 */

/**
 * @brief  Constructs a new CreateCacheClusterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCacheClusterResponse::CreateCacheClusterResponse(

/**
 * @brief  Constructs a new CreateCacheClusterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateCacheClusterRequest::CreateCacheClusterRequest(const CreateCacheClusterRequest &other)
    : ElastiCacheRequest(new CreateCacheClusterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateCacheClusterRequest object.
 */
CreateCacheClusterRequest::CreateCacheClusterRequest()
    : ElastiCacheRequest(new CreateCacheClusterRequestPrivate(ElastiCacheRequest::CreateCacheClusterAction, this))
{

}

bool CreateCacheClusterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateCacheClusterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateCacheClusterResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
AwsAbstractResponse * CreateCacheClusterRequest::response(QNetworkReply * const reply) const
{
    return new CreateCacheClusterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateCacheClusterRequestPrivate
 *
 * @brief  Private implementation for CreateCacheClusterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCacheClusterRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public CreateCacheClusterRequest instance.
 */
CreateCacheClusterRequestPrivate::CreateCacheClusterRequestPrivate(
    const ElastiCacheRequest::Action action, CreateCacheClusterRequest * const q)
    : CreateCacheClusterPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateCacheClusterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateCacheClusterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateCacheClusterRequest instance.
 */
CreateCacheClusterRequestPrivate::CreateCacheClusterRequestPrivate(
    const CreateCacheClusterRequestPrivate &other, CreateCacheClusterRequest * const q)
    : CreateCacheClusterPrivate(other, q)
{

}
