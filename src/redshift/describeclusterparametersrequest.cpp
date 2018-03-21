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

#include "describeclusterparametersrequest.h"
#include "describeclusterparametersrequest_p.h"
#include "describeclusterparametersresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  DescribeClusterParametersRequest
 *
 * @brief  Implements Redshift DescribeClusterParameters requests.
 *
 * @see    RedshiftClient::describeClusterParameters
 */

/**
 * @brief  Constructs a new DescribeClusterParametersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeClusterParametersResponse::DescribeClusterParametersResponse(

/**
 * @brief  Constructs a new DescribeClusterParametersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeClusterParametersRequest::DescribeClusterParametersRequest(const DescribeClusterParametersRequest &other)
    : RedshiftRequest(new DescribeClusterParametersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeClusterParametersRequest object.
 */
DescribeClusterParametersRequest::DescribeClusterParametersRequest()
    : RedshiftRequest(new DescribeClusterParametersRequestPrivate(RedshiftRequest::DescribeClusterParametersAction, this))
{

}

bool DescribeClusterParametersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeClusterParametersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeClusterParametersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * DescribeClusterParametersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeClusterParametersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeClusterParametersRequestPrivate
 *
 * @brief  Private implementation for DescribeClusterParametersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeClusterParametersRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public DescribeClusterParametersRequest instance.
 */
DescribeClusterParametersRequestPrivate::DescribeClusterParametersRequestPrivate(
    const RedshiftRequest::Action action, DescribeClusterParametersRequest * const q)
    : DescribeClusterParametersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeClusterParametersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeClusterParametersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeClusterParametersRequest instance.
 */
DescribeClusterParametersRequestPrivate::DescribeClusterParametersRequestPrivate(
    const DescribeClusterParametersRequestPrivate &other, DescribeClusterParametersRequest * const q)
    : DescribeClusterParametersPrivate(other, q)
{

}
