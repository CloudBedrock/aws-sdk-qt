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

#include "describedbinstancesrequest.h"
#include "describedbinstancesrequest_p.h"
#include "describedbinstancesresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  DescribeDBInstancesRequest
 *
 * @brief  Implements RDS DescribeDBInstances requests.
 *
 * @see    RDSClient::describeDBInstances
 */

/**
 * @brief  Constructs a new DescribeDBInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDBInstancesResponse::DescribeDBInstancesResponse(

/**
 * @brief  Constructs a new DescribeDBInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDBInstancesRequest::DescribeDBInstancesRequest(const DescribeDBInstancesRequest &other)
    : RDSRequest(new DescribeDBInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDBInstancesRequest object.
 */
DescribeDBInstancesRequest::DescribeDBInstancesRequest()
    : RDSRequest(new DescribeDBInstancesRequestPrivate(RDSRequest::DescribeDBInstancesAction, this))
{

}

bool DescribeDBInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDBInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDBInstancesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * DescribeDBInstancesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDBInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDBInstancesRequestPrivate
 *
 * @brief  Private implementation for DescribeDBInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBInstancesRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DescribeDBInstancesRequest instance.
 */
DescribeDBInstancesRequestPrivate::DescribeDBInstancesRequestPrivate(
    const RDSRequest::Action action, DescribeDBInstancesRequest * const q)
    : DescribeDBInstancesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDBInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDBInstancesRequest instance.
 */
DescribeDBInstancesRequestPrivate::DescribeDBInstancesRequestPrivate(
    const DescribeDBInstancesRequestPrivate &other, DescribeDBInstancesRequest * const q)
    : DescribeDBInstancesPrivate(other, q)
{

}

} // namespace RDS
} // namespace AWS
