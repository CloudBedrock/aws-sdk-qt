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

#include "deletemembersrequest.h"
#include "deletemembersrequest_p.h"
#include "deletemembersresponse.h"
#include "guarddutyrequest_p.h"

namespace AWS {
namespace GuardDuty {

/**
 * @class  DeleteMembersRequest
 *
 * @brief  Implements GuardDuty DeleteMembers requests.
 *
 * @see    GuardDutyClient::deleteMembers
 */

/**
 * @brief  Constructs a new DeleteMembersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteMembersResponse::DeleteMembersResponse(

/**
 * @brief  Constructs a new DeleteMembersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteMembersRequest::DeleteMembersRequest(const DeleteMembersRequest &other)
    : GuardDutyRequest(new DeleteMembersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteMembersRequest object.
 */
DeleteMembersRequest::DeleteMembersRequest()
    : GuardDutyRequest(new DeleteMembersRequestPrivate(GuardDutyRequest::DeleteMembersAction, this))
{

}

bool DeleteMembersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteMembersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteMembersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
AwsAbstractResponse * DeleteMembersRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMembersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteMembersRequestPrivate
 *
 * @brief  Private implementation for DeleteMembersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteMembersRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public DeleteMembersRequest instance.
 */
DeleteMembersRequestPrivate::DeleteMembersRequestPrivate(
    const GuardDutyRequest::Action action, DeleteMembersRequest * const q)
    : DeleteMembersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteMembersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteMembersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteMembersRequest instance.
 */
DeleteMembersRequestPrivate::DeleteMembersRequestPrivate(
    const DeleteMembersRequestPrivate &other, DeleteMembersRequest * const q)
    : DeleteMembersPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace AWS
