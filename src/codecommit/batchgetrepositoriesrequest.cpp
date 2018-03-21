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

#include "batchgetrepositoriesrequest.h"
#include "batchgetrepositoriesrequest_p.h"
#include "batchgetrepositoriesresponse.h"
#include "codecommitrequest_p.h"

namespace AWS {
namespace CodeCommit {

/**
 * @class  BatchGetRepositoriesRequest
 *
 * @brief  Implements CodeCommit BatchGetRepositories requests.
 *
 * @see    CodeCommitClient::batchGetRepositories
 */

/**
 * @brief  Constructs a new BatchGetRepositoriesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchGetRepositoriesRequest::BatchGetRepositoriesRequest(const BatchGetRepositoriesRequest &other)
    : CodeCommitRequest(new BatchGetRepositoriesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BatchGetRepositoriesRequest object.
 */
BatchGetRepositoriesRequest::BatchGetRepositoriesRequest()
    : CodeCommitRequest(new BatchGetRepositoriesRequestPrivate(CodeCommitRequest::BatchGetRepositoriesAction, this))
{

}

bool BatchGetRepositoriesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BatchGetRepositoriesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchGetRepositoriesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
AwsAbstractResponse * BatchGetRepositoriesRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetRepositoriesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BatchGetRepositoriesRequestPrivate
 *
 * @brief  Private implementation for BatchGetRepositoriesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetRepositoriesRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public BatchGetRepositoriesRequest instance.
 */
BatchGetRepositoriesRequestPrivate::BatchGetRepositoriesRequestPrivate(
    const CodeCommitRequest::Action action, BatchGetRepositoriesRequest * const q)
    : BatchGetRepositoriesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetRepositoriesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchGetRepositoriesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchGetRepositoriesRequest instance.
 */
BatchGetRepositoriesRequestPrivate::BatchGetRepositoriesRequestPrivate(
    const BatchGetRepositoriesRequestPrivate &other, BatchGetRepositoriesRequest * const q)
    : BatchGetRepositoriesPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace AWS
