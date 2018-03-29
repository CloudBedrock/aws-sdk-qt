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

#include "deletechangesetrequest.h"
#include "deletechangesetrequest_p.h"
#include "deletechangesetresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/**
 * @class  DeleteChangeSetRequest
 *
 * @brief  Implements CloudFormation DeleteChangeSet requests.
 *
 * @see    CloudFormationClient::deleteChangeSet
 */

/**
 * @brief  Constructs a new DeleteChangeSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteChangeSetRequest::DeleteChangeSetRequest(const DeleteChangeSetRequest &other)
    : CloudFormationRequest(new DeleteChangeSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteChangeSetRequest object.
 */
DeleteChangeSetRequest::DeleteChangeSetRequest()
    : CloudFormationRequest(new DeleteChangeSetRequestPrivate(CloudFormationRequest::DeleteChangeSetAction, this))
{

}

bool DeleteChangeSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteChangeSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteChangeSetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteChangeSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteChangeSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteChangeSetRequestPrivate
 *
 * @brief  Private implementation for DeleteChangeSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteChangeSetRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public DeleteChangeSetRequest instance.
 */
DeleteChangeSetRequestPrivate::DeleteChangeSetRequestPrivate(
    const CloudFormationRequest::Action action, DeleteChangeSetRequest * const q)
    : CloudFormationRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteChangeSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteChangeSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteChangeSetRequest instance.
 */
DeleteChangeSetRequestPrivate::DeleteChangeSetRequestPrivate(
    const DeleteChangeSetRequestPrivate &other, DeleteChangeSetRequest * const q)
    : CloudFormationRequestPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
