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

#include "deletenotebookinstancelifecycleconfigrequest.h"
#include "deletenotebookinstancelifecycleconfigrequest_p.h"
#include "deletenotebookinstancelifecycleconfigresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/**
 * @class  DeleteNotebookInstanceLifecycleConfigRequest
 *
 * @brief  Implements SageMaker DeleteNotebookInstanceLifecycleConfig requests.
 *
 * @see    SageMakerClient::deleteNotebookInstanceLifecycleConfig
 */

/**
 * @brief  Constructs a new DeleteNotebookInstanceLifecycleConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteNotebookInstanceLifecycleConfigRequest::DeleteNotebookInstanceLifecycleConfigRequest(const DeleteNotebookInstanceLifecycleConfigRequest &other)
    : SageMakerRequest(new DeleteNotebookInstanceLifecycleConfigRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteNotebookInstanceLifecycleConfigRequest object.
 */
DeleteNotebookInstanceLifecycleConfigRequest::DeleteNotebookInstanceLifecycleConfigRequest()
    : SageMakerRequest(new DeleteNotebookInstanceLifecycleConfigRequestPrivate(SageMakerRequest::DeleteNotebookInstanceLifecycleConfigAction, this))
{

}

bool DeleteNotebookInstanceLifecycleConfigRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteNotebookInstanceLifecycleConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteNotebookInstanceLifecycleConfigResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteNotebookInstanceLifecycleConfigRequest::response(QNetworkReply * const reply) const
{
    return new DeleteNotebookInstanceLifecycleConfigResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteNotebookInstanceLifecycleConfigRequestPrivate
 *
 * @brief  Private implementation for DeleteNotebookInstanceLifecycleConfigRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteNotebookInstanceLifecycleConfigRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public DeleteNotebookInstanceLifecycleConfigRequest instance.
 */
DeleteNotebookInstanceLifecycleConfigRequestPrivate::DeleteNotebookInstanceLifecycleConfigRequestPrivate(
    const SageMakerRequest::Action action, DeleteNotebookInstanceLifecycleConfigRequest * const q)
    : DeleteNotebookInstanceLifecycleConfigPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteNotebookInstanceLifecycleConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteNotebookInstanceLifecycleConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteNotebookInstanceLifecycleConfigRequest instance.
 */
DeleteNotebookInstanceLifecycleConfigRequestPrivate::DeleteNotebookInstanceLifecycleConfigRequestPrivate(
    const DeleteNotebookInstanceLifecycleConfigRequestPrivate &other, DeleteNotebookInstanceLifecycleConfigRequest * const q)
    : DeleteNotebookInstanceLifecycleConfigPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
