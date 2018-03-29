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

#include "updatepullrequeststatusrequest.h"
#include "updatepullrequeststatusrequest_p.h"
#include "updatepullrequeststatusresponse.h"
#include "codecommitrequest_p.h"

namespace QtAws {
namespace CodeCommit {

/**
 * @class  UpdatePullRequestStatusRequest
 *
 * @brief  Implements CodeCommit UpdatePullRequestStatus requests.
 *
 * @see    CodeCommitClient::updatePullRequestStatus
 */

/**
 * @brief  Constructs a new UpdatePullRequestStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdatePullRequestStatusRequest::UpdatePullRequestStatusRequest(const UpdatePullRequestStatusRequest &other)
    : CodeCommitRequest(new UpdatePullRequestStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdatePullRequestStatusRequest object.
 */
UpdatePullRequestStatusRequest::UpdatePullRequestStatusRequest()
    : CodeCommitRequest(new UpdatePullRequestStatusRequestPrivate(CodeCommitRequest::UpdatePullRequestStatusAction, this))
{

}

bool UpdatePullRequestStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdatePullRequestStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdatePullRequestStatusResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePullRequestStatusRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePullRequestStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdatePullRequestStatusRequestPrivate
 *
 * @brief  Private implementation for UpdatePullRequestStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePullRequestStatusRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public UpdatePullRequestStatusRequest instance.
 */
UpdatePullRequestStatusRequestPrivate::UpdatePullRequestStatusRequestPrivate(
    const CodeCommitRequest::Action action, UpdatePullRequestStatusRequest * const q)
    : CodeCommitRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePullRequestStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdatePullRequestStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdatePullRequestStatusRequest instance.
 */
UpdatePullRequestStatusRequestPrivate::UpdatePullRequestStatusRequestPrivate(
    const UpdatePullRequestStatusRequestPrivate &other, UpdatePullRequestStatusRequest * const q)
    : CodeCommitRequestPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace QtAws
