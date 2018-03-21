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

#include "getjobsrequest.h"
#include "getjobsrequest_p.h"
#include "getjobsresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  GetJobsRequest
 *
 * @brief  Implements Glue GetJobs requests.
 *
 * @see    GlueClient::getJobs
 */

/**
 * @brief  Constructs a new GetJobsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetJobsResponse::GetJobsResponse(

/**
 * @brief  Constructs a new GetJobsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetJobsRequest::GetJobsRequest(const GetJobsRequest &other)
    : GlueRequest(new GetJobsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetJobsRequest object.
 */
GetJobsRequest::GetJobsRequest()
    : GlueRequest(new GetJobsRequestPrivate(GlueRequest::GetJobsAction, this))
{

}

bool GetJobsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetJobsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetJobsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * GetJobsRequest::response(QNetworkReply * const reply) const
{
    return new GetJobsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetJobsRequestPrivate
 *
 * @brief  Private implementation for GetJobsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetJobsRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetJobsRequest instance.
 */
GetJobsRequestPrivate::GetJobsRequestPrivate(
    const GlueRequest::Action action, GetJobsRequest * const q)
    : GetJobsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetJobsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetJobsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetJobsRequest instance.
 */
GetJobsRequestPrivate::GetJobsRequestPrivate(
    const GetJobsRequestPrivate &other, GetJobsRequest * const q)
    : GetJobsPrivate(other, q)
{

}

} // namespace Glue
} // namespace AWS
