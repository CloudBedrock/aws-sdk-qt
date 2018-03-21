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

#include "updaterepositorynamerequest.h"
#include "updaterepositorynamerequest_p.h"
#include "updaterepositorynameresponse.h"
#include "codecommitrequest_p.h"

namespace AWS {
namespace CodeCommit {

/**
 * @class  UpdateRepositoryNameRequest
 *
 * @brief  Implements CodeCommit UpdateRepositoryName requests.
 *
 * @see    CodeCommitClient::updateRepositoryName
 */

/**
 * @brief  Constructs a new UpdateRepositoryNameResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateRepositoryNameResponse::UpdateRepositoryNameResponse(

/**
 * @brief  Constructs a new UpdateRepositoryNameRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateRepositoryNameRequest::UpdateRepositoryNameRequest(const UpdateRepositoryNameRequest &other)
    : CodeCommitRequest(new UpdateRepositoryNameRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateRepositoryNameRequest object.
 */
UpdateRepositoryNameRequest::UpdateRepositoryNameRequest()
    : CodeCommitRequest(new UpdateRepositoryNameRequestPrivate(CodeCommitRequest::UpdateRepositoryNameAction, this))
{

}

bool UpdateRepositoryNameRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateRepositoryNameResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateRepositoryNameResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
AwsAbstractResponse * UpdateRepositoryNameRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRepositoryNameResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateRepositoryNameRequestPrivate
 *
 * @brief  Private implementation for UpdateRepositoryNameRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRepositoryNameRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public UpdateRepositoryNameRequest instance.
 */
UpdateRepositoryNameRequestPrivate::UpdateRepositoryNameRequestPrivate(
    const CodeCommitRequest::Action action, UpdateRepositoryNameRequest * const q)
    : UpdateRepositoryNamePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRepositoryNameRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateRepositoryNameRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateRepositoryNameRequest instance.
 */
UpdateRepositoryNameRequestPrivate::UpdateRepositoryNameRequestPrivate(
    const UpdateRepositoryNameRequestPrivate &other, UpdateRepositoryNameRequest * const q)
    : UpdateRepositoryNamePrivate(other, q)
{

}
