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

#include "getgrouprequest.h"
#include "getgrouprequest_p.h"
#include "getgroupresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  GetGroupRequest
 *
 * @brief  Implements IAM GetGroup requests.
 *
 * @see    IAMClient::getGroup
 */

/**
 * @brief  Constructs a new GetGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetGroupRequest::GetGroupRequest(const GetGroupRequest &other)
    : IAMRequest(new GetGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetGroupRequest object.
 */
GetGroupRequest::GetGroupRequest()
    : IAMRequest(new GetGroupRequestPrivate(IAMRequest::GetGroupAction, this))
{

}

bool GetGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IAMClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGroupRequest::response(QNetworkReply * const reply) const
{
    return new GetGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetGroupRequestPrivate
 *
 * @brief  Private implementation for GetGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetGroupRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public GetGroupRequest instance.
 */
GetGroupRequestPrivate::GetGroupRequestPrivate(
    const IAMRequest::Action action, GetGroupRequest * const q)
    : GetGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetGroupRequest instance.
 */
GetGroupRequestPrivate::GetGroupRequestPrivate(
    const GetGroupRequestPrivate &other, GetGroupRequest * const q)
    : GetGroupPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
