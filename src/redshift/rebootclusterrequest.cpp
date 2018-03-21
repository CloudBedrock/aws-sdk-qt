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

#include "rebootclusterrequest.h"
#include "rebootclusterrequest_p.h"
#include "rebootclusterresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  RebootClusterRequest
 *
 * @brief  Implements Redshift RebootCluster requests.
 *
 * @see    RedshiftClient::rebootCluster
 */

/**
 * @brief  Constructs a new RebootClusterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RebootClusterRequest::RebootClusterRequest(const RebootClusterRequest &other)
    : RedshiftRequest(new RebootClusterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RebootClusterRequest object.
 */
RebootClusterRequest::RebootClusterRequest()
    : RedshiftRequest(new RebootClusterRequestPrivate(RedshiftRequest::RebootClusterAction, this))
{

}

bool RebootClusterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RebootClusterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RebootClusterResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * RebootClusterRequest::response(QNetworkReply * const reply) const
{
    return new RebootClusterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RebootClusterRequestPrivate
 *
 * @brief  Private implementation for RebootClusterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RebootClusterRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public RebootClusterRequest instance.
 */
RebootClusterRequestPrivate::RebootClusterRequestPrivate(
    const RedshiftRequest::Action action, RebootClusterRequest * const q)
    : RebootClusterPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RebootClusterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RebootClusterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RebootClusterRequest instance.
 */
RebootClusterRequestPrivate::RebootClusterRequestPrivate(
    const RebootClusterRequestPrivate &other, RebootClusterRequest * const q)
    : RebootClusterPrivate(other, q)
{

}

} // namespace Redshift
} // namespace AWS
