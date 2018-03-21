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

#include "modifyhapgrequest.h"
#include "modifyhapgrequest_p.h"
#include "modifyhapgresponse.h"
#include "cloudhsmrequest_p.h"

namespace AWS {
namespace CloudHSM {

/**
 * @class  ModifyHapgRequest
 *
 * @brief  Implements CloudHSM ModifyHapg requests.
 *
 * @see    CloudHSMClient::modifyHapg
 */

/**
 * @brief  Constructs a new ModifyHapgResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyHapgResponse::ModifyHapgResponse(

/**
 * @brief  Constructs a new ModifyHapgRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyHapgRequest::ModifyHapgRequest(const ModifyHapgRequest &other)
    : CloudHSMRequest(new ModifyHapgRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyHapgRequest object.
 */
ModifyHapgRequest::ModifyHapgRequest()
    : CloudHSMRequest(new ModifyHapgRequestPrivate(CloudHSMRequest::ModifyHapgAction, this))
{

}

bool ModifyHapgRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyHapgResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyHapgResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudHSMClient::send
 */
AwsAbstractResponse * ModifyHapgRequest::response(QNetworkReply * const reply) const
{
    return new ModifyHapgResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyHapgRequestPrivate
 *
 * @brief  Private implementation for ModifyHapgRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyHapgRequestPrivate object.
 *
 * @param  action  CloudHSM action being performed.
 * @param  q       Pointer to this object's public ModifyHapgRequest instance.
 */
ModifyHapgRequestPrivate::ModifyHapgRequestPrivate(
    const CloudHSMRequest::Action action, ModifyHapgRequest * const q)
    : ModifyHapgPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyHapgRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyHapgRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyHapgRequest instance.
 */
ModifyHapgRequestPrivate::ModifyHapgRequestPrivate(
    const ModifyHapgRequestPrivate &other, ModifyHapgRequest * const q)
    : ModifyHapgPrivate(other, q)
{

}

} // namespace CloudHSM
} // namespace AWS
