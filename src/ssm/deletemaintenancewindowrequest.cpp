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

#include "deletemaintenancewindowrequest.h"
#include "deletemaintenancewindowrequest_p.h"
#include "deletemaintenancewindowresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  DeleteMaintenanceWindowRequest
 *
 * @brief  Implements SSM DeleteMaintenanceWindow requests.
 *
 * @see    SSMClient::deleteMaintenanceWindow
 */

/**
 * @brief  Constructs a new DeleteMaintenanceWindowRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteMaintenanceWindowRequest::DeleteMaintenanceWindowRequest(const DeleteMaintenanceWindowRequest &other)
    : SSMRequest(new DeleteMaintenanceWindowRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteMaintenanceWindowRequest object.
 */
DeleteMaintenanceWindowRequest::DeleteMaintenanceWindowRequest()
    : SSMRequest(new DeleteMaintenanceWindowRequestPrivate(SSMRequest::DeleteMaintenanceWindowAction, this))
{

}

bool DeleteMaintenanceWindowRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteMaintenanceWindowResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteMaintenanceWindowResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMaintenanceWindowRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMaintenanceWindowResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteMaintenanceWindowRequestPrivate
 *
 * @brief  Private implementation for DeleteMaintenanceWindowRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteMaintenanceWindowRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DeleteMaintenanceWindowRequest instance.
 */
DeleteMaintenanceWindowRequestPrivate::DeleteMaintenanceWindowRequestPrivate(
    const SSMRequest::Action action, DeleteMaintenanceWindowRequest * const q)
    : DeleteMaintenanceWindowPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteMaintenanceWindowRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteMaintenanceWindowRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteMaintenanceWindowRequest instance.
 */
DeleteMaintenanceWindowRequestPrivate::DeleteMaintenanceWindowRequestPrivate(
    const DeleteMaintenanceWindowRequestPrivate &other, DeleteMaintenanceWindowRequest * const q)
    : DeleteMaintenanceWindowPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
