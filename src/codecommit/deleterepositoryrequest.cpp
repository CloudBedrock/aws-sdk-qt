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

#include "deleterepositoryrequest.h"
#include "deleterepositoryrequest_p.h"
#include "deleterepositoryresponse.h"
#include "codecommitrequest_p.h"

namespace QtAws {
namespace CodeCommit {

/**
 * @class  DeleteRepositoryRequest
 *
 * @brief  Implements CodeCommit DeleteRepository requests.
 *
 * @see    CodeCommitClient::deleteRepository
 */

/**
 * @brief  Constructs a new DeleteRepositoryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteRepositoryRequest::DeleteRepositoryRequest(const DeleteRepositoryRequest &other)
    : CodeCommitRequest(new DeleteRepositoryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteRepositoryRequest object.
 */
DeleteRepositoryRequest::DeleteRepositoryRequest()
    : CodeCommitRequest(new DeleteRepositoryRequestPrivate(CodeCommitRequest::DeleteRepositoryAction, this))
{

}

bool DeleteRepositoryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteRepositoryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteRepositoryResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRepositoryRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRepositoryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteRepositoryRequestPrivate
 *
 * @brief  Private implementation for DeleteRepositoryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRepositoryRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public DeleteRepositoryRequest instance.
 */
DeleteRepositoryRequestPrivate::DeleteRepositoryRequestPrivate(
    const CodeCommitRequest::Action action, DeleteRepositoryRequest * const q)
    : DeleteRepositoryPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRepositoryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteRepositoryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteRepositoryRequest instance.
 */
DeleteRepositoryRequestPrivate::DeleteRepositoryRequestPrivate(
    const DeleteRepositoryRequestPrivate &other, DeleteRepositoryRequest * const q)
    : DeleteRepositoryPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace QtAws
