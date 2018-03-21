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

#include "stopnotebookinstancerequest.h"
#include "stopnotebookinstancerequest_p.h"
#include "stopnotebookinstanceresponse.h"
#include "sagemakerrequest_p.h"

namespace AWS {
namespace SageMaker {

/**
 * @class  StopNotebookInstanceRequest
 *
 * @brief  Implements SageMaker StopNotebookInstance requests.
 *
 * @see    SageMakerClient::stopNotebookInstance
 */

/**
 * @brief  Constructs a new StopNotebookInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopNotebookInstanceResponse::StopNotebookInstanceResponse(

/**
 * @brief  Constructs a new StopNotebookInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopNotebookInstanceRequest::StopNotebookInstanceRequest(const StopNotebookInstanceRequest &other)
    : SageMakerRequest(new StopNotebookInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StopNotebookInstanceRequest object.
 */
StopNotebookInstanceRequest::StopNotebookInstanceRequest()
    : SageMakerRequest(new StopNotebookInstanceRequestPrivate(SageMakerRequest::StopNotebookInstanceAction, this))
{

}

bool StopNotebookInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StopNotebookInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopNotebookInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
AwsAbstractResponse * StopNotebookInstanceRequest::response(QNetworkReply * const reply) const
{
    return new StopNotebookInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StopNotebookInstanceRequestPrivate
 *
 * @brief  Private implementation for StopNotebookInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopNotebookInstanceRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public StopNotebookInstanceRequest instance.
 */
StopNotebookInstanceRequestPrivate::StopNotebookInstanceRequestPrivate(
    const SageMakerRequest::Action action, StopNotebookInstanceRequest * const q)
    : StopNotebookInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StopNotebookInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopNotebookInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopNotebookInstanceRequest instance.
 */
StopNotebookInstanceRequestPrivate::StopNotebookInstanceRequestPrivate(
    const StopNotebookInstanceRequestPrivate &other, StopNotebookInstanceRequest * const q)
    : StopNotebookInstancePrivate(other, q)
{

}
