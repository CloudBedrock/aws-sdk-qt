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

#include "batchgetpartitionrequest.h"
#include "batchgetpartitionrequest_p.h"
#include "batchgetpartitionresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  BatchGetPartitionRequest
 *
 * @brief  Implements Glue BatchGetPartition requests.
 *
 * @see    GlueClient::batchGetPartition
 */

/**
 * @brief  Constructs a new BatchGetPartitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchGetPartitionResponse::BatchGetPartitionResponse(

/**
 * @brief  Constructs a new BatchGetPartitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchGetPartitionRequest::BatchGetPartitionRequest(const BatchGetPartitionRequest &other)
    : GlueRequest(new BatchGetPartitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BatchGetPartitionRequest object.
 */
BatchGetPartitionRequest::BatchGetPartitionRequest()
    : GlueRequest(new BatchGetPartitionRequestPrivate(GlueRequest::BatchGetPartitionAction, this))
{

}

bool BatchGetPartitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BatchGetPartitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchGetPartitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * BatchGetPartitionRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetPartitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BatchGetPartitionRequestPrivate
 *
 * @brief  Private implementation for BatchGetPartitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetPartitionRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public BatchGetPartitionRequest instance.
 */
BatchGetPartitionRequestPrivate::BatchGetPartitionRequestPrivate(
    const GlueRequest::Action action, BatchGetPartitionRequest * const q)
    : BatchGetPartitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetPartitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchGetPartitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchGetPartitionRequest instance.
 */
BatchGetPartitionRequestPrivate::BatchGetPartitionRequestPrivate(
    const BatchGetPartitionRequestPrivate &other, BatchGetPartitionRequest * const q)
    : BatchGetPartitionPrivate(other, q)
{

}
