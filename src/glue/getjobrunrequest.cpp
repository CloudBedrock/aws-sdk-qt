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

#include "getjobrunrequest.h"
#include "getjobrunrequest_p.h"
#include "getjobrunresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  GetJobRunRequest
 *
 * @brief  Implements Glue GetJobRun requests.
 *
 * @see    GlueClient::getJobRun
 */

/**
 * @brief  Constructs a new GetJobRunResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetJobRunResponse::GetJobRunResponse(

/**
 * @brief  Constructs a new GetJobRunRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetJobRunRequest::GetJobRunRequest(const GetJobRunRequest &other)
    : GlueRequest(new GetJobRunRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetJobRunRequest object.
 */
GetJobRunRequest::GetJobRunRequest()
    : GlueRequest(new GetJobRunRequestPrivate(GlueRequest::GetJobRunAction, this))
{

}

bool GetJobRunRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetJobRunResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetJobRunResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * GetJobRunRequest::response(QNetworkReply * const reply) const
{
    return new GetJobRunResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetJobRunRequestPrivate
 *
 * @brief  Private implementation for GetJobRunRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetJobRunRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetJobRunRequest instance.
 */
GetJobRunRequestPrivate::GetJobRunRequestPrivate(
    const GlueRequest::Action action, GetJobRunRequest * const q)
    : GetJobRunPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetJobRunRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetJobRunRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetJobRunRequest instance.
 */
GetJobRunRequestPrivate::GetJobRunRequestPrivate(
    const GetJobRunRequestPrivate &other, GetJobRunRequest * const q)
    : GetJobRunPrivate(other, q)
{

}

} // namespace Glue
} // namespace AWS
