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

#include "batchstopjobrunrequest.h"
#include "batchstopjobrunrequest_p.h"
#include "batchstopjobrunresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  BatchStopJobRunRequest
 *
 * @brief  Implements Glue BatchStopJobRun requests.
 *
 * @see    GlueClient::batchStopJobRun
 */

/**
 * @brief  Constructs a new BatchStopJobRunResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchStopJobRunResponse::BatchStopJobRunResponse(

/**
 * @brief  Constructs a new BatchStopJobRunRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchStopJobRunRequest::BatchStopJobRunRequest(const BatchStopJobRunRequest &other)
    : GlueRequest(new BatchStopJobRunRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BatchStopJobRunRequest object.
 */
BatchStopJobRunRequest::BatchStopJobRunRequest()
    : GlueRequest(new BatchStopJobRunRequestPrivate(GlueRequest::BatchStopJobRunAction, this))
{

}

bool BatchStopJobRunRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BatchStopJobRunResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchStopJobRunResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * BatchStopJobRunRequest::response(QNetworkReply * const reply) const
{
    return new BatchStopJobRunResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BatchStopJobRunRequestPrivate
 *
 * @brief  Private implementation for BatchStopJobRunRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchStopJobRunRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public BatchStopJobRunRequest instance.
 */
BatchStopJobRunRequestPrivate::BatchStopJobRunRequestPrivate(
    const GlueRequest::Action action, BatchStopJobRunRequest * const q)
    : BatchStopJobRunPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BatchStopJobRunRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchStopJobRunRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchStopJobRunRequest instance.
 */
BatchStopJobRunRequestPrivate::BatchStopJobRunRequestPrivate(
    const BatchStopJobRunRequestPrivate &other, BatchStopJobRunRequest * const q)
    : BatchStopJobRunPrivate(other, q)
{

}
