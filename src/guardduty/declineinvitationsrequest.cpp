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

#include "declineinvitationsrequest.h"
#include "declineinvitationsrequest_p.h"
#include "declineinvitationsresponse.h"
#include "guarddutyrequest_p.h"

namespace AWS {
namespace GuardDuty {

/**
 * @class  DeclineInvitationsRequest
 *
 * @brief  Implements GuardDuty DeclineInvitations requests.
 *
 * @see    GuardDutyClient::declineInvitations
 */

/**
 * @brief  Constructs a new DeclineInvitationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeclineInvitationsResponse::DeclineInvitationsResponse(

/**
 * @brief  Constructs a new DeclineInvitationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeclineInvitationsRequest::DeclineInvitationsRequest(const DeclineInvitationsRequest &other)
    : GuardDutyRequest(new DeclineInvitationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeclineInvitationsRequest object.
 */
DeclineInvitationsRequest::DeclineInvitationsRequest()
    : GuardDutyRequest(new DeclineInvitationsRequestPrivate(GuardDutyRequest::DeclineInvitationsAction, this))
{

}

bool DeclineInvitationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeclineInvitationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeclineInvitationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
AwsAbstractResponse * DeclineInvitationsRequest::response(QNetworkReply * const reply) const
{
    return new DeclineInvitationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeclineInvitationsRequestPrivate
 *
 * @brief  Private implementation for DeclineInvitationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeclineInvitationsRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public DeclineInvitationsRequest instance.
 */
DeclineInvitationsRequestPrivate::DeclineInvitationsRequestPrivate(
    const GuardDutyRequest::Action action, DeclineInvitationsRequest * const q)
    : DeclineInvitationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeclineInvitationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeclineInvitationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeclineInvitationsRequest instance.
 */
DeclineInvitationsRequestPrivate::DeclineInvitationsRequestPrivate(
    const DeclineInvitationsRequestPrivate &other, DeclineInvitationsRequest * const q)
    : DeclineInvitationsPrivate(other, q)
{

}
