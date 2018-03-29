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

#include "getpullrequestrequest.h"
#include "getpullrequestrequest_p.h"
#include "getpullrequestresponse.h"
#include "codecommitrequest_p.h"

namespace QtAws {
namespace CodeCommit {

/**
 * @class  GetPullRequestRequest
 *
 * @brief  Implements CodeCommit GetPullRequest requests.
 *
 * @see    CodeCommitClient::getPullRequest
 */

/**
 * @brief  Constructs a new GetPullRequestRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetPullRequestRequest::GetPullRequestRequest(const GetPullRequestRequest &other)
    : CodeCommitRequest(new GetPullRequestRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetPullRequestRequest object.
 */
GetPullRequestRequest::GetPullRequestRequest()
    : CodeCommitRequest(new GetPullRequestRequestPrivate(CodeCommitRequest::GetPullRequestAction, this))
{

}

bool GetPullRequestRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetPullRequestResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetPullRequestResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPullRequestRequest::response(QNetworkReply * const reply) const
{
    return new GetPullRequestResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetPullRequestRequestPrivate
 *
 * @brief  Private implementation for GetPullRequestRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPullRequestRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public GetPullRequestRequest instance.
 */
GetPullRequestRequestPrivate::GetPullRequestRequestPrivate(
    const CodeCommitRequest::Action action, GetPullRequestRequest * const q)
    : CodeCommitRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetPullRequestRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetPullRequestRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetPullRequestRequest instance.
 */
GetPullRequestRequestPrivate::GetPullRequestRequestPrivate(
    const GetPullRequestRequestPrivate &other, GetPullRequestRequest * const q)
    : CodeCommitRequestPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace QtAws
