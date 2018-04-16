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

#include "listnotebookinstancelifecycleconfigsrequest.h"
#include "listnotebookinstancelifecycleconfigsrequest_p.h"
#include "listnotebookinstancelifecycleconfigsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListNotebookInstanceLifecycleConfigsRequest
 *
 * \brief The ListNotebookInstanceLifecycleConfigsRequest class encapsulates SageMaker ListNotebookInstanceLifecycleConfigs requests.
 *
 * \ingroup SageMaker
 *
 *
 * \sa SageMakerClient::listNotebookInstanceLifecycleConfigs
 */

/*!
 * @brief  Constructs a new ListNotebookInstanceLifecycleConfigsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListNotebookInstanceLifecycleConfigsRequest::ListNotebookInstanceLifecycleConfigsRequest(const ListNotebookInstanceLifecycleConfigsRequest &other)
    : SageMakerRequest(new ListNotebookInstanceLifecycleConfigsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListNotebookInstanceLifecycleConfigsRequest object.
 */
ListNotebookInstanceLifecycleConfigsRequest::ListNotebookInstanceLifecycleConfigsRequest()
    : SageMakerRequest(new ListNotebookInstanceLifecycleConfigsRequestPrivate(SageMakerRequest::ListNotebookInstanceLifecycleConfigsAction, this))
{

}

/*!
 * \reimp
 */
bool ListNotebookInstanceLifecycleConfigsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListNotebookInstanceLifecycleConfigsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListNotebookInstanceLifecycleConfigsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
QtAws::Core::AwsAbstractResponse * ListNotebookInstanceLifecycleConfigsRequest::response(QNetworkReply * const reply) const
{
    return new ListNotebookInstanceLifecycleConfigsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListNotebookInstanceLifecycleConfigsRequestPrivate
 *
 * @brief  Private implementation for ListNotebookInstanceLifecycleConfigsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListNotebookInstanceLifecycleConfigsRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public ListNotebookInstanceLifecycleConfigsRequest instance.
 */
ListNotebookInstanceLifecycleConfigsRequestPrivate::ListNotebookInstanceLifecycleConfigsRequestPrivate(
    const SageMakerRequest::Action action, ListNotebookInstanceLifecycleConfigsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListNotebookInstanceLifecycleConfigsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListNotebookInstanceLifecycleConfigsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListNotebookInstanceLifecycleConfigsRequest instance.
 */
ListNotebookInstanceLifecycleConfigsRequestPrivate::ListNotebookInstanceLifecycleConfigsRequestPrivate(
    const ListNotebookInstanceLifecycleConfigsRequestPrivate &other, ListNotebookInstanceLifecycleConfigsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
