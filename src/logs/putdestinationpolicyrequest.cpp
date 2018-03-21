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

#include "putdestinationpolicyrequest.h"
#include "putdestinationpolicyrequest_p.h"
#include "putdestinationpolicyresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  PutDestinationPolicyRequest
 *
 * @brief  Implements CloudWatchLogs PutDestinationPolicy requests.
 *
 * @see    CloudWatchLogsClient::putDestinationPolicy
 */

/**
 * @brief  Constructs a new PutDestinationPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutDestinationPolicyResponse::PutDestinationPolicyResponse(

/**
 * @brief  Constructs a new PutDestinationPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutDestinationPolicyRequest::PutDestinationPolicyRequest(const PutDestinationPolicyRequest &other)
    : CloudWatchLogsRequest(new PutDestinationPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutDestinationPolicyRequest object.
 */
PutDestinationPolicyRequest::PutDestinationPolicyRequest()
    : CloudWatchLogsRequest(new PutDestinationPolicyRequestPrivate(CloudWatchLogsRequest::PutDestinationPolicyAction, this))
{

}

bool PutDestinationPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutDestinationPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutDestinationPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
AwsAbstractResponse * PutDestinationPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutDestinationPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutDestinationPolicyRequestPrivate
 *
 * @brief  Private implementation for PutDestinationPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutDestinationPolicyRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public PutDestinationPolicyRequest instance.
 */
PutDestinationPolicyRequestPrivate::PutDestinationPolicyRequestPrivate(
    const CloudWatchLogsRequest::Action action, PutDestinationPolicyRequest * const q)
    : PutDestinationPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutDestinationPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutDestinationPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutDestinationPolicyRequest instance.
 */
PutDestinationPolicyRequestPrivate::PutDestinationPolicyRequestPrivate(
    const PutDestinationPolicyRequestPrivate &other, PutDestinationPolicyRequest * const q)
    : PutDestinationPolicyPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace AWS
