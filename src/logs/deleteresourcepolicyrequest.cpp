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

#include "deleteresourcepolicyrequest.h"
#include "deleteresourcepolicyrequest_p.h"
#include "deleteresourcepolicyresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace QtAws {
namespace CloudWatchLogs {

/**
 * @class  DeleteResourcePolicyRequest
 *
 * @brief  Implements CloudWatchLogs DeleteResourcePolicy requests.
 *
 * @see    CloudWatchLogsClient::deleteResourcePolicy
 */

/**
 * @brief  Constructs a new DeleteResourcePolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteResourcePolicyRequest::DeleteResourcePolicyRequest(const DeleteResourcePolicyRequest &other)
    : CloudWatchLogsRequest(new DeleteResourcePolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteResourcePolicyRequest object.
 */
DeleteResourcePolicyRequest::DeleteResourcePolicyRequest()
    : CloudWatchLogsRequest(new DeleteResourcePolicyRequestPrivate(CloudWatchLogsRequest::DeleteResourcePolicyAction, this))
{

}

bool DeleteResourcePolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteResourcePolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteResourcePolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteResourcePolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteResourcePolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteResourcePolicyRequestPrivate
 *
 * @brief  Private implementation for DeleteResourcePolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteResourcePolicyRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public DeleteResourcePolicyRequest instance.
 */
DeleteResourcePolicyRequestPrivate::DeleteResourcePolicyRequestPrivate(
    const CloudWatchLogsRequest::Action action, DeleteResourcePolicyRequest * const q)
    : CloudWatchLogsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteResourcePolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteResourcePolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteResourcePolicyRequest instance.
 */
DeleteResourcePolicyRequestPrivate::DeleteResourcePolicyRequestPrivate(
    const DeleteResourcePolicyRequestPrivate &other, DeleteResourcePolicyRequest * const q)
    : CloudWatchLogsRequestPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace QtAws
