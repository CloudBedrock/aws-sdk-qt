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

#include "deletepatchbaselinerequest.h"
#include "deletepatchbaselinerequest_p.h"
#include "deletepatchbaselineresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  DeletePatchBaselineRequest
 *
 * @brief  Implements SSM DeletePatchBaseline requests.
 *
 * @see    SSMClient::deletePatchBaseline
 */

/**
 * @brief  Constructs a new DeletePatchBaselineRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeletePatchBaselineRequest::DeletePatchBaselineRequest(const DeletePatchBaselineRequest &other)
    : SSMRequest(new DeletePatchBaselineRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeletePatchBaselineRequest object.
 */
DeletePatchBaselineRequest::DeletePatchBaselineRequest()
    : SSMRequest(new DeletePatchBaselineRequestPrivate(SSMRequest::DeletePatchBaselineAction, this))
{

}

bool DeletePatchBaselineRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeletePatchBaselineResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeletePatchBaselineResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePatchBaselineRequest::response(QNetworkReply * const reply) const
{
    return new DeletePatchBaselineResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeletePatchBaselineRequestPrivate
 *
 * @brief  Private implementation for DeletePatchBaselineRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeletePatchBaselineRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DeletePatchBaselineRequest instance.
 */
DeletePatchBaselineRequestPrivate::DeletePatchBaselineRequestPrivate(
    const SSMRequest::Action action, DeletePatchBaselineRequest * const q)
    : SSMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeletePatchBaselineRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeletePatchBaselineRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeletePatchBaselineRequest instance.
 */
DeletePatchBaselineRequestPrivate::DeletePatchBaselineRequestPrivate(
    const DeletePatchBaselineRequestPrivate &other, DeletePatchBaselineRequest * const q)
    : SSMRequestPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
