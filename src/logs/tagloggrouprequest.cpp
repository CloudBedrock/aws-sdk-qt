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

#include "tagloggrouprequest.h"
#include "tagloggrouprequest_p.h"
#include "tagloggroupresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  TagLogGroupRequest
 *
 * @brief  Implements CloudWatchLogs TagLogGroup requests.
 *
 * @see    CloudWatchLogsClient::tagLogGroup
 */

/**
 * @brief  Constructs a new TagLogGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TagLogGroupResponse::TagLogGroupResponse(

/**
 * @brief  Constructs a new TagLogGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TagLogGroupRequest::TagLogGroupRequest(const TagLogGroupRequest &other)
    : CloudWatchLogsRequest(new TagLogGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new TagLogGroupRequest object.
 */
TagLogGroupRequest::TagLogGroupRequest()
    : CloudWatchLogsRequest(new TagLogGroupRequestPrivate(CloudWatchLogsRequest::TagLogGroupAction, this))
{

}

bool TagLogGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an TagLogGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An TagLogGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
AwsAbstractResponse * TagLogGroupRequest::response(QNetworkReply * const reply) const
{
    return new TagLogGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  TagLogGroupRequestPrivate
 *
 * @brief  Private implementation for TagLogGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TagLogGroupRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public TagLogGroupRequest instance.
 */
TagLogGroupRequestPrivate::TagLogGroupRequestPrivate(
    const CloudWatchLogsRequest::Action action, TagLogGroupRequest * const q)
    : TagLogGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new TagLogGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the TagLogGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TagLogGroupRequest instance.
 */
TagLogGroupRequestPrivate::TagLogGroupRequestPrivate(
    const TagLogGroupRequestPrivate &other, TagLogGroupRequest * const q)
    : TagLogGroupPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace AWS
