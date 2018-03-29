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

#include "disassociatefrommasteraccountrequest.h"
#include "disassociatefrommasteraccountrequest_p.h"
#include "disassociatefrommasteraccountresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/**
 * @class  DisassociateFromMasterAccountRequest
 *
 * @brief  Implements GuardDuty DisassociateFromMasterAccount requests.
 *
 * @see    GuardDutyClient::disassociateFromMasterAccount
 */

/**
 * @brief  Constructs a new DisassociateFromMasterAccountRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisassociateFromMasterAccountRequest::DisassociateFromMasterAccountRequest(const DisassociateFromMasterAccountRequest &other)
    : GuardDutyRequest(new DisassociateFromMasterAccountRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisassociateFromMasterAccountRequest object.
 */
DisassociateFromMasterAccountRequest::DisassociateFromMasterAccountRequest()
    : GuardDutyRequest(new DisassociateFromMasterAccountRequestPrivate(GuardDutyRequest::DisassociateFromMasterAccountAction, this))
{

}

bool DisassociateFromMasterAccountRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisassociateFromMasterAccountResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisassociateFromMasterAccountResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateFromMasterAccountRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateFromMasterAccountResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisassociateFromMasterAccountRequestPrivate
 *
 * @brief  Private implementation for DisassociateFromMasterAccountRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateFromMasterAccountRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public DisassociateFromMasterAccountRequest instance.
 */
DisassociateFromMasterAccountRequestPrivate::DisassociateFromMasterAccountRequestPrivate(
    const GuardDutyRequest::Action action, DisassociateFromMasterAccountRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateFromMasterAccountRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisassociateFromMasterAccountRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisassociateFromMasterAccountRequest instance.
 */
DisassociateFromMasterAccountRequestPrivate::DisassociateFromMasterAccountRequestPrivate(
    const DisassociateFromMasterAccountRequestPrivate &other, DisassociateFromMasterAccountRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
