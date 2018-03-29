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

#include "disassociaterolefromgrouprequest.h"
#include "disassociaterolefromgrouprequest_p.h"
#include "disassociaterolefromgroupresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/**
 * @class  DisassociateRoleFromGroupRequest
 *
 * @brief  Implements Greengrass DisassociateRoleFromGroup requests.
 *
 * @see    GreengrassClient::disassociateRoleFromGroup
 */

/**
 * @brief  Constructs a new DisassociateRoleFromGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisassociateRoleFromGroupRequest::DisassociateRoleFromGroupRequest(const DisassociateRoleFromGroupRequest &other)
    : GreengrassRequest(new DisassociateRoleFromGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisassociateRoleFromGroupRequest object.
 */
DisassociateRoleFromGroupRequest::DisassociateRoleFromGroupRequest()
    : GreengrassRequest(new DisassociateRoleFromGroupRequestPrivate(GreengrassRequest::DisassociateRoleFromGroupAction, this))
{

}

bool DisassociateRoleFromGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisassociateRoleFromGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisassociateRoleFromGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateRoleFromGroupRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateRoleFromGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisassociateRoleFromGroupRequestPrivate
 *
 * @brief  Private implementation for DisassociateRoleFromGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateRoleFromGroupRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public DisassociateRoleFromGroupRequest instance.
 */
DisassociateRoleFromGroupRequestPrivate::DisassociateRoleFromGroupRequestPrivate(
    const GreengrassRequest::Action action, DisassociateRoleFromGroupRequest * const q)
    : DisassociateRoleFromGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateRoleFromGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisassociateRoleFromGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisassociateRoleFromGroupRequest instance.
 */
DisassociateRoleFromGroupRequestPrivate::DisassociateRoleFromGroupRequestPrivate(
    const DisassociateRoleFromGroupRequestPrivate &other, DisassociateRoleFromGroupRequest * const q)
    : DisassociateRoleFromGroupPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
