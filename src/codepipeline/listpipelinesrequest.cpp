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

#include "listpipelinesrequest.h"
#include "listpipelinesrequest_p.h"
#include "listpipelinesresponse.h"
#include "codepipelinerequest_p.h"

namespace AWS {
namespace CodePipeline {

/**
 * @class  ListPipelinesRequest
 *
 * @brief  Implements CodePipeline ListPipelines requests.
 *
 * @see    CodePipelineClient::listPipelines
 */

/**
 * @brief  Constructs a new ListPipelinesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListPipelinesRequest::ListPipelinesRequest(const ListPipelinesRequest &other)
    : CodePipelineRequest(new ListPipelinesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListPipelinesRequest object.
 */
ListPipelinesRequest::ListPipelinesRequest()
    : CodePipelineRequest(new ListPipelinesRequestPrivate(CodePipelineRequest::ListPipelinesAction, this))
{

}

bool ListPipelinesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListPipelinesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListPipelinesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodePipelineClient::send
 */
AwsAbstractResponse * ListPipelinesRequest::response(QNetworkReply * const reply) const
{
    return new ListPipelinesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListPipelinesRequestPrivate
 *
 * @brief  Private implementation for ListPipelinesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPipelinesRequestPrivate object.
 *
 * @param  action  CodePipeline action being performed.
 * @param  q       Pointer to this object's public ListPipelinesRequest instance.
 */
ListPipelinesRequestPrivate::ListPipelinesRequestPrivate(
    const CodePipelineRequest::Action action, ListPipelinesRequest * const q)
    : ListPipelinesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListPipelinesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListPipelinesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListPipelinesRequest instance.
 */
ListPipelinesRequestPrivate::ListPipelinesRequestPrivate(
    const ListPipelinesRequestPrivate &other, ListPipelinesRequest * const q)
    : ListPipelinesPrivate(other, q)
{

}

} // namespace CodePipeline
} // namespace AWS
