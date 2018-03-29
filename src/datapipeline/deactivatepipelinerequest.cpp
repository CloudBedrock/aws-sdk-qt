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

#include "deactivatepipelinerequest.h"
#include "deactivatepipelinerequest_p.h"
#include "deactivatepipelineresponse.h"
#include "datapipelinerequest_p.h"

namespace QtAws {
namespace DataPipeline {

/**
 * @class  DeactivatePipelineRequest
 *
 * @brief  Implements DataPipeline DeactivatePipeline requests.
 *
 * @see    DataPipelineClient::deactivatePipeline
 */

/**
 * @brief  Constructs a new DeactivatePipelineRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeactivatePipelineRequest::DeactivatePipelineRequest(const DeactivatePipelineRequest &other)
    : DataPipelineRequest(new DeactivatePipelineRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeactivatePipelineRequest object.
 */
DeactivatePipelineRequest::DeactivatePipelineRequest()
    : DataPipelineRequest(new DeactivatePipelineRequestPrivate(DataPipelineRequest::DeactivatePipelineAction, this))
{

}

bool DeactivatePipelineRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeactivatePipelineResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeactivatePipelineResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DataPipelineClient::send
 */
AwsAbstractResponse * DeactivatePipelineRequest::response(QNetworkReply * const reply) const
{
    return new DeactivatePipelineResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeactivatePipelineRequestPrivate
 *
 * @brief  Private implementation for DeactivatePipelineRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeactivatePipelineRequestPrivate object.
 *
 * @param  action  DataPipeline action being performed.
 * @param  q       Pointer to this object's public DeactivatePipelineRequest instance.
 */
DeactivatePipelineRequestPrivate::DeactivatePipelineRequestPrivate(
    const DataPipelineRequest::Action action, DeactivatePipelineRequest * const q)
    : DeactivatePipelinePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeactivatePipelineRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeactivatePipelineRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeactivatePipelineRequest instance.
 */
DeactivatePipelineRequestPrivate::DeactivatePipelineRequestPrivate(
    const DeactivatePipelineRequestPrivate &other, DeactivatePipelineRequest * const q)
    : DeactivatePipelinePrivate(other, q)
{

}

} // namespace DataPipeline
} // namespace QtAws
