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

#include "terminatejobrequest.h"
#include "terminatejobrequest_p.h"
#include "terminatejobresponse.h"
#include "batchrequest_p.h"

namespace QtAws {
namespace Batch {

/**
 * @class  TerminateJobRequest
 *
 * @brief  Implements Batch TerminateJob requests.
 *
 * @see    BatchClient::terminateJob
 */

/**
 * @brief  Constructs a new TerminateJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TerminateJobRequest::TerminateJobRequest(const TerminateJobRequest &other)
    : BatchRequest(new TerminateJobRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new TerminateJobRequest object.
 */
TerminateJobRequest::TerminateJobRequest()
    : BatchRequest(new TerminateJobRequestPrivate(BatchRequest::TerminateJobAction, this))
{

}

bool TerminateJobRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an TerminateJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An TerminateJobResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  BatchClient::send
 */
QtAws::Core::AwsAbstractResponse * TerminateJobRequest::response(QNetworkReply * const reply) const
{
    return new TerminateJobResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  TerminateJobRequestPrivate
 *
 * @brief  Private implementation for TerminateJobRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TerminateJobRequestPrivate object.
 *
 * @param  action  Batch action being performed.
 * @param  q       Pointer to this object's public TerminateJobRequest instance.
 */
TerminateJobRequestPrivate::TerminateJobRequestPrivate(
    const BatchRequest::Action action, TerminateJobRequest * const q)
    : BatchRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new TerminateJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the TerminateJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TerminateJobRequest instance.
 */
TerminateJobRequestPrivate::TerminateJobRequestPrivate(
    const TerminateJobRequestPrivate &other, TerminateJobRequest * const q)
    : BatchRequestPrivate(other, q)
{

}

} // namespace Batch
} // namespace QtAws
