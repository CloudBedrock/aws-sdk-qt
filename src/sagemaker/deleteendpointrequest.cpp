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

#include "deleteendpointrequest.h"
#include "deleteendpointrequest_p.h"
#include "deleteendpointresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/**
 * @class  DeleteEndpointRequest
 *
 * @brief  Implements SageMaker DeleteEndpoint requests.
 *
 * @see    SageMakerClient::deleteEndpoint
 */

/**
 * @brief  Constructs a new DeleteEndpointRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteEndpointRequest::DeleteEndpointRequest(const DeleteEndpointRequest &other)
    : SageMakerRequest(new DeleteEndpointRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteEndpointRequest object.
 */
DeleteEndpointRequest::DeleteEndpointRequest()
    : SageMakerRequest(new DeleteEndpointRequestPrivate(SageMakerRequest::DeleteEndpointAction, this))
{

}

bool DeleteEndpointRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteEndpointResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteEndpointResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEndpointRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEndpointResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteEndpointRequestPrivate
 *
 * @brief  Private implementation for DeleteEndpointRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEndpointRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public DeleteEndpointRequest instance.
 */
DeleteEndpointRequestPrivate::DeleteEndpointRequestPrivate(
    const SageMakerRequest::Action action, DeleteEndpointRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEndpointRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteEndpointRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteEndpointRequest instance.
 */
DeleteEndpointRequestPrivate::DeleteEndpointRequestPrivate(
    const DeleteEndpointRequestPrivate &other, DeleteEndpointRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
