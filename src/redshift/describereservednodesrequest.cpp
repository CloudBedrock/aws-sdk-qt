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

#include "describereservednodesrequest.h"
#include "describereservednodesrequest_p.h"
#include "describereservednodesresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  DescribeReservedNodesRequest
 *
 * @brief  Implements Redshift DescribeReservedNodes requests.
 *
 * @see    RedshiftClient::describeReservedNodes
 */

/**
 * @brief  Constructs a new DescribeReservedNodesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeReservedNodesResponse::DescribeReservedNodesResponse(

/**
 * @brief  Constructs a new DescribeReservedNodesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeReservedNodesRequest::DescribeReservedNodesRequest(const DescribeReservedNodesRequest &other)
    : RedshiftRequest(new DescribeReservedNodesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeReservedNodesRequest object.
 */
DescribeReservedNodesRequest::DescribeReservedNodesRequest()
    : RedshiftRequest(new DescribeReservedNodesRequestPrivate(RedshiftRequest::DescribeReservedNodesAction, this))
{

}

bool DescribeReservedNodesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeReservedNodesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeReservedNodesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * DescribeReservedNodesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReservedNodesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeReservedNodesRequestPrivate
 *
 * @brief  Private implementation for DescribeReservedNodesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReservedNodesRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public DescribeReservedNodesRequest instance.
 */
DescribeReservedNodesRequestPrivate::DescribeReservedNodesRequestPrivate(
    const RedshiftRequest::Action action, DescribeReservedNodesRequest * const q)
    : DescribeReservedNodesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReservedNodesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeReservedNodesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeReservedNodesRequest instance.
 */
DescribeReservedNodesRequestPrivate::DescribeReservedNodesRequestPrivate(
    const DescribeReservedNodesRequestPrivate &other, DescribeReservedNodesRequest * const q)
    : DescribeReservedNodesPrivate(other, q)
{

}

} // namespace Redshift
} // namespace AWS
