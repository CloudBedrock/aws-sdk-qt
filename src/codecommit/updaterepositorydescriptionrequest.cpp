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

#include "updaterepositorydescriptionrequest.h"
#include "updaterepositorydescriptionrequest_p.h"
#include "updaterepositorydescriptionresponse.h"
#include "codecommitrequest_p.h"

namespace QtAws {
namespace CodeCommit {

/**
 * @class  UpdateRepositoryDescriptionRequest
 *
 * @brief  Implements CodeCommit UpdateRepositoryDescription requests.
 *
 * @see    CodeCommitClient::updateRepositoryDescription
 */

/**
 * @brief  Constructs a new UpdateRepositoryDescriptionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateRepositoryDescriptionRequest::UpdateRepositoryDescriptionRequest(const UpdateRepositoryDescriptionRequest &other)
    : CodeCommitRequest(new UpdateRepositoryDescriptionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateRepositoryDescriptionRequest object.
 */
UpdateRepositoryDescriptionRequest::UpdateRepositoryDescriptionRequest()
    : CodeCommitRequest(new UpdateRepositoryDescriptionRequestPrivate(CodeCommitRequest::UpdateRepositoryDescriptionAction, this))
{

}

bool UpdateRepositoryDescriptionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateRepositoryDescriptionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateRepositoryDescriptionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRepositoryDescriptionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRepositoryDescriptionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateRepositoryDescriptionRequestPrivate
 *
 * @brief  Private implementation for UpdateRepositoryDescriptionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRepositoryDescriptionRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public UpdateRepositoryDescriptionRequest instance.
 */
UpdateRepositoryDescriptionRequestPrivate::UpdateRepositoryDescriptionRequestPrivate(
    const CodeCommitRequest::Action action, UpdateRepositoryDescriptionRequest * const q)
    : UpdateRepositoryDescriptionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRepositoryDescriptionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateRepositoryDescriptionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateRepositoryDescriptionRequest instance.
 */
UpdateRepositoryDescriptionRequestPrivate::UpdateRepositoryDescriptionRequestPrivate(
    const UpdateRepositoryDescriptionRequestPrivate &other, UpdateRepositoryDescriptionRequest * const q)
    : UpdateRepositoryDescriptionPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace QtAws
