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

#include "removetagsrequest.h"
#include "removetagsrequest_p.h"
#include "removetagsresponse.h"
#include "datapipelinerequest_p.h"

namespace QtAws {
namespace DataPipeline {

/**
 * @class  RemoveTagsRequest
 *
 * @brief  Implements DataPipeline RemoveTags requests.
 *
 * @see    DataPipelineClient::removeTags
 */

/**
 * @brief  Constructs a new RemoveTagsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RemoveTagsRequest::RemoveTagsRequest(const RemoveTagsRequest &other)
    : DataPipelineRequest(new RemoveTagsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RemoveTagsRequest object.
 */
RemoveTagsRequest::RemoveTagsRequest()
    : DataPipelineRequest(new RemoveTagsRequestPrivate(DataPipelineRequest::RemoveTagsAction, this))
{

}

bool RemoveTagsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RemoveTagsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RemoveTagsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DataPipelineClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveTagsRequest::response(QNetworkReply * const reply) const
{
    return new RemoveTagsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RemoveTagsRequestPrivate
 *
 * @brief  Private implementation for RemoveTagsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveTagsRequestPrivate object.
 *
 * @param  action  DataPipeline action being performed.
 * @param  q       Pointer to this object's public RemoveTagsRequest instance.
 */
RemoveTagsRequestPrivate::RemoveTagsRequestPrivate(
    const DataPipelineRequest::Action action, RemoveTagsRequest * const q)
    : DataPipelineRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RemoveTagsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RemoveTagsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RemoveTagsRequest instance.
 */
RemoveTagsRequestPrivate::RemoveTagsRequestPrivate(
    const RemoveTagsRequestPrivate &other, RemoveTagsRequest * const q)
    : DataPipelineRequestPrivate(other, q)
{

}

} // namespace DataPipeline
} // namespace QtAws
