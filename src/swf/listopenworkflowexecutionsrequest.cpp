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

#include "listopenworkflowexecutionsrequest.h"
#include "listopenworkflowexecutionsrequest_p.h"
#include "listopenworkflowexecutionsresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace SWF {

/**
 * @class  ListOpenWorkflowExecutionsRequest
 *
 * @brief  Implements SWF ListOpenWorkflowExecutions requests.
 *
 * @see    SWFClient::listOpenWorkflowExecutions
 */

/**
 * @brief  Constructs a new ListOpenWorkflowExecutionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListOpenWorkflowExecutionsRequest::ListOpenWorkflowExecutionsRequest(const ListOpenWorkflowExecutionsRequest &other)
    : SWFRequest(new ListOpenWorkflowExecutionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListOpenWorkflowExecutionsRequest object.
 */
ListOpenWorkflowExecutionsRequest::ListOpenWorkflowExecutionsRequest()
    : SWFRequest(new ListOpenWorkflowExecutionsRequestPrivate(SWFRequest::ListOpenWorkflowExecutionsAction, this))
{

}

bool ListOpenWorkflowExecutionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListOpenWorkflowExecutionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListOpenWorkflowExecutionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SWFClient::send
 */
QtAws::Core::AwsAbstractResponse * ListOpenWorkflowExecutionsRequest::response(QNetworkReply * const reply) const
{
    return new ListOpenWorkflowExecutionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListOpenWorkflowExecutionsRequestPrivate
 *
 * @brief  Private implementation for ListOpenWorkflowExecutionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListOpenWorkflowExecutionsRequestPrivate object.
 *
 * @param  action  SWF action being performed.
 * @param  q       Pointer to this object's public ListOpenWorkflowExecutionsRequest instance.
 */
ListOpenWorkflowExecutionsRequestPrivate::ListOpenWorkflowExecutionsRequestPrivate(
    const SWFRequest::Action action, ListOpenWorkflowExecutionsRequest * const q)
    : SWFRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListOpenWorkflowExecutionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListOpenWorkflowExecutionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListOpenWorkflowExecutionsRequest instance.
 */
ListOpenWorkflowExecutionsRequestPrivate::ListOpenWorkflowExecutionsRequestPrivate(
    const ListOpenWorkflowExecutionsRequestPrivate &other, ListOpenWorkflowExecutionsRequest * const q)
    : SWFRequestPrivate(other, q)
{

}

} // namespace SWF
} // namespace QtAws
