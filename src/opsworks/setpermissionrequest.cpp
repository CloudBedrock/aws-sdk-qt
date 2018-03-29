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

#include "setpermissionrequest.h"
#include "setpermissionrequest_p.h"
#include "setpermissionresponse.h"
#include "opsworksrequest_p.h"

namespace QtAws {
namespace OpsWorks {

/**
 * @class  SetPermissionRequest
 *
 * @brief  Implements OpsWorks SetPermission requests.
 *
 * @see    OpsWorksClient::setPermission
 */

/**
 * @brief  Constructs a new SetPermissionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetPermissionRequest::SetPermissionRequest(const SetPermissionRequest &other)
    : OpsWorksRequest(new SetPermissionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetPermissionRequest object.
 */
SetPermissionRequest::SetPermissionRequest()
    : OpsWorksRequest(new SetPermissionRequestPrivate(OpsWorksRequest::SetPermissionAction, this))
{

}

bool SetPermissionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetPermissionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetPermissionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
QtAws::Core::AwsAbstractResponse * SetPermissionRequest::response(QNetworkReply * const reply) const
{
    return new SetPermissionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetPermissionRequestPrivate
 *
 * @brief  Private implementation for SetPermissionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetPermissionRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public SetPermissionRequest instance.
 */
SetPermissionRequestPrivate::SetPermissionRequestPrivate(
    const OpsWorksRequest::Action action, SetPermissionRequest * const q)
    : SetPermissionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetPermissionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetPermissionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetPermissionRequest instance.
 */
SetPermissionRequestPrivate::SetPermissionRequestPrivate(
    const SetPermissionRequestPrivate &other, SetPermissionRequest * const q)
    : SetPermissionPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace QtAws
