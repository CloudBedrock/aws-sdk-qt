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

#include "putthirdpartyjobfailureresultrequest.h"
#include "putthirdpartyjobfailureresultrequest_p.h"
#include "putthirdpartyjobfailureresultresponse.h"
#include "codepipelinerequest_p.h"

namespace QtAws {
namespace CodePipeline {

/**
 * @class  PutThirdPartyJobFailureResultRequest
 *
 * @brief  Implements CodePipeline PutThirdPartyJobFailureResult requests.
 *
 * @see    CodePipelineClient::putThirdPartyJobFailureResult
 */

/**
 * @brief  Constructs a new PutThirdPartyJobFailureResultRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutThirdPartyJobFailureResultRequest::PutThirdPartyJobFailureResultRequest(const PutThirdPartyJobFailureResultRequest &other)
    : CodePipelineRequest(new PutThirdPartyJobFailureResultRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutThirdPartyJobFailureResultRequest object.
 */
PutThirdPartyJobFailureResultRequest::PutThirdPartyJobFailureResultRequest()
    : CodePipelineRequest(new PutThirdPartyJobFailureResultRequestPrivate(CodePipelineRequest::PutThirdPartyJobFailureResultAction, this))
{

}

bool PutThirdPartyJobFailureResultRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutThirdPartyJobFailureResultResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutThirdPartyJobFailureResultResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodePipelineClient::send
 */
QtAws::Core::AwsAbstractResponse * PutThirdPartyJobFailureResultRequest::response(QNetworkReply * const reply) const
{
    return new PutThirdPartyJobFailureResultResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutThirdPartyJobFailureResultRequestPrivate
 *
 * @brief  Private implementation for PutThirdPartyJobFailureResultRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutThirdPartyJobFailureResultRequestPrivate object.
 *
 * @param  action  CodePipeline action being performed.
 * @param  q       Pointer to this object's public PutThirdPartyJobFailureResultRequest instance.
 */
PutThirdPartyJobFailureResultRequestPrivate::PutThirdPartyJobFailureResultRequestPrivate(
    const CodePipelineRequest::Action action, PutThirdPartyJobFailureResultRequest * const q)
    : CodePipelineRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutThirdPartyJobFailureResultRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutThirdPartyJobFailureResultRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutThirdPartyJobFailureResultRequest instance.
 */
PutThirdPartyJobFailureResultRequestPrivate::PutThirdPartyJobFailureResultRequestPrivate(
    const PutThirdPartyJobFailureResultRequestPrivate &other, PutThirdPartyJobFailureResultRequest * const q)
    : CodePipelineRequestPrivate(other, q)
{

}

} // namespace CodePipeline
} // namespace QtAws
