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

#include "deregistermanagedinstancerequest.h"
#include "deregistermanagedinstancerequest_p.h"
#include "deregistermanagedinstanceresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  DeregisterManagedInstanceRequest
 *
 * @brief  Implements SSM DeregisterManagedInstance requests.
 *
 * @see    SSMClient::deregisterManagedInstance
 */

/**
 * @brief  Constructs a new DeregisterManagedInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeregisterManagedInstanceResponse::DeregisterManagedInstanceResponse(

/**
 * @brief  Constructs a new DeregisterManagedInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeregisterManagedInstanceRequest::DeregisterManagedInstanceRequest(const DeregisterManagedInstanceRequest &other)
    : SSMRequest(new DeregisterManagedInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeregisterManagedInstanceRequest object.
 */
DeregisterManagedInstanceRequest::DeregisterManagedInstanceRequest()
    : SSMRequest(new DeregisterManagedInstanceRequestPrivate(SSMRequest::DeregisterManagedInstanceAction, this))
{

}

bool DeregisterManagedInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeregisterManagedInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeregisterManagedInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * DeregisterManagedInstanceRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterManagedInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeregisterManagedInstanceRequestPrivate
 *
 * @brief  Private implementation for DeregisterManagedInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterManagedInstanceRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DeregisterManagedInstanceRequest instance.
 */
DeregisterManagedInstanceRequestPrivate::DeregisterManagedInstanceRequestPrivate(
    const SSMRequest::Action action, DeregisterManagedInstanceRequest * const q)
    : DeregisterManagedInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterManagedInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeregisterManagedInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeregisterManagedInstanceRequest instance.
 */
DeregisterManagedInstanceRequestPrivate::DeregisterManagedInstanceRequestPrivate(
    const DeregisterManagedInstanceRequestPrivate &other, DeregisterManagedInstanceRequest * const q)
    : DeregisterManagedInstancePrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS
