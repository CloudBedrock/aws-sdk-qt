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

#include "retrystageexecutionrequest.h"
#include "retrystageexecutionrequest_p.h"
#include "retrystageexecutionresponse.h"
#include "codepipelinerequest_p.h"

namespace AWS {
namespace CodePipeline {

/**
 * @class  RetryStageExecutionRequest
 *
 * @brief  Implements CodePipeline RetryStageExecution requests.
 *
 * @see    CodePipelineClient::retryStageExecution
 */

/**
 * @brief  Constructs a new RetryStageExecutionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RetryStageExecutionResponse::RetryStageExecutionResponse(

/**
 * @brief  Constructs a new RetryStageExecutionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RetryStageExecutionRequest::RetryStageExecutionRequest(const RetryStageExecutionRequest &other)
    : CodePipelineRequest(new RetryStageExecutionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RetryStageExecutionRequest object.
 */
RetryStageExecutionRequest::RetryStageExecutionRequest()
    : CodePipelineRequest(new RetryStageExecutionRequestPrivate(CodePipelineRequest::RetryStageExecutionAction, this))
{

}

bool RetryStageExecutionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RetryStageExecutionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RetryStageExecutionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodePipelineClient::send
 */
AwsAbstractResponse * RetryStageExecutionRequest::response(QNetworkReply * const reply) const
{
    return new RetryStageExecutionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RetryStageExecutionRequestPrivate
 *
 * @brief  Private implementation for RetryStageExecutionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RetryStageExecutionRequestPrivate object.
 *
 * @param  action  CodePipeline action being performed.
 * @param  q       Pointer to this object's public RetryStageExecutionRequest instance.
 */
RetryStageExecutionRequestPrivate::RetryStageExecutionRequestPrivate(
    const CodePipelineRequest::Action action, RetryStageExecutionRequest * const q)
    : RetryStageExecutionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RetryStageExecutionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RetryStageExecutionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RetryStageExecutionRequest instance.
 */
RetryStageExecutionRequestPrivate::RetryStageExecutionRequestPrivate(
    const RetryStageExecutionRequestPrivate &other, RetryStageExecutionRequest * const q)
    : RetryStageExecutionPrivate(other, q)
{

}
