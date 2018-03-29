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

#include "createclusterrequest.h"
#include "createclusterrequest_p.h"
#include "createclusterresponse.h"
#include "ecsrequest_p.h"

namespace QtAws {
namespace ECS {

/**
 * @class  CreateClusterRequest
 *
 * @brief  Implements ECS CreateCluster requests.
 *
 * @see    ECSClient::createCluster
 */

/**
 * @brief  Constructs a new CreateClusterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateClusterRequest::CreateClusterRequest(const CreateClusterRequest &other)
    : ECSRequest(new CreateClusterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateClusterRequest object.
 */
CreateClusterRequest::CreateClusterRequest()
    : ECSRequest(new CreateClusterRequestPrivate(ECSRequest::CreateClusterAction, this))
{

}

bool CreateClusterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateClusterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateClusterResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ECSClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateClusterRequest::response(QNetworkReply * const reply) const
{
    return new CreateClusterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateClusterRequestPrivate
 *
 * @brief  Private implementation for CreateClusterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateClusterRequestPrivate object.
 *
 * @param  action  ECS action being performed.
 * @param  q       Pointer to this object's public CreateClusterRequest instance.
 */
CreateClusterRequestPrivate::CreateClusterRequestPrivate(
    const ECSRequest::Action action, CreateClusterRequest * const q)
    : ECSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateClusterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateClusterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateClusterRequest instance.
 */
CreateClusterRequestPrivate::CreateClusterRequestPrivate(
    const CreateClusterRequestPrivate &other, CreateClusterRequest * const q)
    : ECSRequestPrivate(other, q)
{

}

} // namespace ECS
} // namespace QtAws
