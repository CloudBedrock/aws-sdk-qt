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

#include "disassociatemembersrequest.h"
#include "disassociatemembersrequest_p.h"
#include "disassociatemembersresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::DisassociateMembersRequest
 *
 * \brief The DisassociateMembersRequest class encapsulates GuardDuty DisassociateMembers requests.
 *
 * \ingroup GuardDuty
 *
 *
 * \sa GuardDutyClient::disassociateMembers
 */

/*!
 * @brief  Constructs a new DisassociateMembersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisassociateMembersRequest::DisassociateMembersRequest(const DisassociateMembersRequest &other)
    : GuardDutyRequest(new DisassociateMembersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DisassociateMembersRequest object.
 */
DisassociateMembersRequest::DisassociateMembersRequest()
    : GuardDutyRequest(new DisassociateMembersRequestPrivate(GuardDutyRequest::DisassociateMembersAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateMembersRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DisassociateMembersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisassociateMembersResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateMembersRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateMembersResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DisassociateMembersRequestPrivate
 *
 * @brief  Private implementation for DisassociateMembersRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DisassociateMembersRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public DisassociateMembersRequest instance.
 */
DisassociateMembersRequestPrivate::DisassociateMembersRequestPrivate(
    const GuardDutyRequest::Action action, DisassociateMembersRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DisassociateMembersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisassociateMembersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisassociateMembersRequest instance.
 */
DisassociateMembersRequestPrivate::DisassociateMembersRequestPrivate(
    const DisassociateMembersRequestPrivate &other, DisassociateMembersRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
