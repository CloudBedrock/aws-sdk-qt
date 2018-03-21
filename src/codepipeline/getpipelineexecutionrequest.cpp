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

#include "getpipelineexecutionrequest.h"
#include "getpipelineexecutionrequest_p.h"
#include "getpipelineexecutionresponse.h"
#include "codepipelinerequest_p.h"

namespace AWS {
namespace CodePipeline {

/**
 * @class  GetPipelineExecutionRequest
 *
 * @brief  Implements CodePipeline GetPipelineExecution requests.
 *
 * @see    CodePipelineClient::getPipelineExecution
 */

/**
 * @brief  Constructs a new GetPipelineExecutionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetPipelineExecutionResponse::GetPipelineExecutionResponse(

/**
 * @brief  Constructs a new GetPipelineExecutionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetPipelineExecutionRequest::GetPipelineExecutionRequest(const GetPipelineExecutionRequest &other)
    : CodePipelineRequest(new GetPipelineExecutionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetPipelineExecutionRequest object.
 */
GetPipelineExecutionRequest::GetPipelineExecutionRequest()
    : CodePipelineRequest(new GetPipelineExecutionRequestPrivate(CodePipelineRequest::GetPipelineExecutionAction, this))
{

}

bool GetPipelineExecutionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetPipelineExecutionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetPipelineExecutionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodePipelineClient::send
 */
AwsAbstractResponse * GetPipelineExecutionRequest::response(QNetworkReply * const reply) const
{
    return new GetPipelineExecutionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetPipelineExecutionRequestPrivate
 *
 * @brief  Private implementation for GetPipelineExecutionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPipelineExecutionRequestPrivate object.
 *
 * @param  action  CodePipeline action being performed.
 * @param  q       Pointer to this object's public GetPipelineExecutionRequest instance.
 */
GetPipelineExecutionRequestPrivate::GetPipelineExecutionRequestPrivate(
    const CodePipelineRequest::Action action, GetPipelineExecutionRequest * const q)
    : GetPipelineExecutionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetPipelineExecutionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetPipelineExecutionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetPipelineExecutionRequest instance.
 */
GetPipelineExecutionRequestPrivate::GetPipelineExecutionRequestPrivate(
    const GetPipelineExecutionRequestPrivate &other, GetPipelineExecutionRequest * const q)
    : GetPipelineExecutionPrivate(other, q)
{

}

} // namespace CodePipeline
} // namespace AWS
