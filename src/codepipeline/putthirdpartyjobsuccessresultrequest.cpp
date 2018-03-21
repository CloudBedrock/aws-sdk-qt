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

#include "putthirdpartyjobsuccessresultrequest.h"
#include "putthirdpartyjobsuccessresultrequest_p.h"
#include "putthirdpartyjobsuccessresultresponse.h"
#include "codepipelinerequest_p.h"

namespace AWS {
namespace CodePipeline {

/**
 * @class  PutThirdPartyJobSuccessResultRequest
 *
 * @brief  Implements CodePipeline PutThirdPartyJobSuccessResult requests.
 *
 * @see    CodePipelineClient::putThirdPartyJobSuccessResult
 */

/**
 * @brief  Constructs a new PutThirdPartyJobSuccessResultResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutThirdPartyJobSuccessResultResponse::PutThirdPartyJobSuccessResultResponse(

/**
 * @brief  Constructs a new PutThirdPartyJobSuccessResultRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutThirdPartyJobSuccessResultRequest::PutThirdPartyJobSuccessResultRequest(const PutThirdPartyJobSuccessResultRequest &other)
    : CodePipelineRequest(new PutThirdPartyJobSuccessResultRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutThirdPartyJobSuccessResultRequest object.
 */
PutThirdPartyJobSuccessResultRequest::PutThirdPartyJobSuccessResultRequest()
    : CodePipelineRequest(new PutThirdPartyJobSuccessResultRequestPrivate(CodePipelineRequest::PutThirdPartyJobSuccessResultAction, this))
{

}

bool PutThirdPartyJobSuccessResultRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutThirdPartyJobSuccessResultResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutThirdPartyJobSuccessResultResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodePipelineClient::send
 */
AwsAbstractResponse * PutThirdPartyJobSuccessResultRequest::response(QNetworkReply * const reply) const
{
    return new PutThirdPartyJobSuccessResultResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutThirdPartyJobSuccessResultRequestPrivate
 *
 * @brief  Private implementation for PutThirdPartyJobSuccessResultRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutThirdPartyJobSuccessResultRequestPrivate object.
 *
 * @param  action  CodePipeline action being performed.
 * @param  q       Pointer to this object's public PutThirdPartyJobSuccessResultRequest instance.
 */
PutThirdPartyJobSuccessResultRequestPrivate::PutThirdPartyJobSuccessResultRequestPrivate(
    const CodePipelineRequest::Action action, PutThirdPartyJobSuccessResultRequest * const q)
    : PutThirdPartyJobSuccessResultPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutThirdPartyJobSuccessResultRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutThirdPartyJobSuccessResultRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutThirdPartyJobSuccessResultRequest instance.
 */
PutThirdPartyJobSuccessResultRequestPrivate::PutThirdPartyJobSuccessResultRequestPrivate(
    const PutThirdPartyJobSuccessResultRequestPrivate &other, PutThirdPartyJobSuccessResultRequest * const q)
    : PutThirdPartyJobSuccessResultPrivate(other, q)
{

}

} // namespace CodePipeline
} // namespace AWS
