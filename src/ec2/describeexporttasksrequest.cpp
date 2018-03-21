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

#include "describeexporttasksrequest.h"
#include "describeexporttasksrequest_p.h"
#include "describeexporttasksresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeExportTasksRequest
 *
 * @brief  Implements EC2 DescribeExportTasks requests.
 *
 * @see    EC2Client::describeExportTasks
 */

/**
 * @brief  Constructs a new DescribeExportTasksRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeExportTasksRequest::DescribeExportTasksRequest(const DescribeExportTasksRequest &other)
    : EC2Request(new DescribeExportTasksRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeExportTasksRequest object.
 */
DescribeExportTasksRequest::DescribeExportTasksRequest()
    : EC2Request(new DescribeExportTasksRequestPrivate(EC2Request::DescribeExportTasksAction, this))
{

}

bool DescribeExportTasksRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeExportTasksResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeExportTasksResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeExportTasksRequest::response(QNetworkReply * const reply) const
{
    return new DescribeExportTasksResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeExportTasksRequestPrivate
 *
 * @brief  Private implementation for DescribeExportTasksRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeExportTasksRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeExportTasksRequest instance.
 */
DescribeExportTasksRequestPrivate::DescribeExportTasksRequestPrivate(
    const EC2Request::Action action, DescribeExportTasksRequest * const q)
    : DescribeExportTasksPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeExportTasksRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeExportTasksRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeExportTasksRequest instance.
 */
DescribeExportTasksRequestPrivate::DescribeExportTasksRequestPrivate(
    const DescribeExportTasksRequestPrivate &other, DescribeExportTasksRequest * const q)
    : DescribeExportTasksPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
