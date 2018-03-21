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

#include "deletestackrequest.h"
#include "deletestackrequest_p.h"
#include "deletestackresponse.h"
#include "cloudformationrequest_p.h"

namespace AWS {
namespace CloudFormation {

/**
 * @class  DeleteStackRequest
 *
 * @brief  Implements CloudFormation DeleteStack requests.
 *
 * @see    CloudFormationClient::deleteStack
 */

/**
 * @brief  Constructs a new DeleteStackResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteStackResponse::DeleteStackResponse(

/**
 * @brief  Constructs a new DeleteStackRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteStackRequest::DeleteStackRequest(const DeleteStackRequest &other)
    : CloudFormationRequest(new DeleteStackRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteStackRequest object.
 */
DeleteStackRequest::DeleteStackRequest()
    : CloudFormationRequest(new DeleteStackRequestPrivate(CloudFormationRequest::DeleteStackAction, this))
{

}

bool DeleteStackRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteStackResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteStackResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
AwsAbstractResponse * DeleteStackRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStackResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteStackRequestPrivate
 *
 * @brief  Private implementation for DeleteStackRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteStackRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public DeleteStackRequest instance.
 */
DeleteStackRequestPrivate::DeleteStackRequestPrivate(
    const CloudFormationRequest::Action action, DeleteStackRequest * const q)
    : DeleteStackPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteStackRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteStackRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteStackRequest instance.
 */
DeleteStackRequestPrivate::DeleteStackRequestPrivate(
    const DeleteStackRequestPrivate &other, DeleteStackRequest * const q)
    : DeleteStackPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace AWS
