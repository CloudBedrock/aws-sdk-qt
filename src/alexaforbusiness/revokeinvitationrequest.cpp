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

#include "revokeinvitationrequest.h"
#include "revokeinvitationrequest_p.h"
#include "revokeinvitationresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  RevokeInvitationRequest
 *
 * @brief  Implements AlexaForBusiness RevokeInvitation requests.
 *
 * @see    AlexaForBusinessClient::revokeInvitation
 */

/**
 * @brief  Constructs a new RevokeInvitationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RevokeInvitationResponse::RevokeInvitationResponse(

/**
 * @brief  Constructs a new RevokeInvitationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RevokeInvitationRequest::RevokeInvitationRequest(const RevokeInvitationRequest &other)
    : AlexaForBusinessRequest(new RevokeInvitationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RevokeInvitationRequest object.
 */
RevokeInvitationRequest::RevokeInvitationRequest()
    : AlexaForBusinessRequest(new RevokeInvitationRequestPrivate(AlexaForBusinessRequest::RevokeInvitationAction, this))
{

}

bool RevokeInvitationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RevokeInvitationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RevokeInvitationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
AwsAbstractResponse * RevokeInvitationRequest::response(QNetworkReply * const reply) const
{
    return new RevokeInvitationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RevokeInvitationRequestPrivate
 *
 * @brief  Private implementation for RevokeInvitationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RevokeInvitationRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public RevokeInvitationRequest instance.
 */
RevokeInvitationRequestPrivate::RevokeInvitationRequestPrivate(
    const AlexaForBusinessRequest::Action action, RevokeInvitationRequest * const q)
    : RevokeInvitationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RevokeInvitationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RevokeInvitationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RevokeInvitationRequest instance.
 */
RevokeInvitationRequestPrivate::RevokeInvitationRequestPrivate(
    const RevokeInvitationRequestPrivate &other, RevokeInvitationRequest * const q)
    : RevokeInvitationPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace AWS
