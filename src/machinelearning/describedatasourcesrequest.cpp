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

#include "describedatasourcesrequest.h"
#include "describedatasourcesrequest_p.h"
#include "describedatasourcesresponse.h"
#include "machinelearningrequest_p.h"

namespace AWS {
namespace MachineLearning {

/**
 * @class  DescribeDataSourcesRequest
 *
 * @brief  Implements MachineLearning DescribeDataSources requests.
 *
 * @see    MachineLearningClient::describeDataSources
 */

/**
 * @brief  Constructs a new DescribeDataSourcesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDataSourcesRequest::DescribeDataSourcesRequest(const DescribeDataSourcesRequest &other)
    : MachineLearningRequest(new DescribeDataSourcesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDataSourcesRequest object.
 */
DescribeDataSourcesRequest::DescribeDataSourcesRequest()
    : MachineLearningRequest(new DescribeDataSourcesRequestPrivate(MachineLearningRequest::DescribeDataSourcesAction, this))
{

}

bool DescribeDataSourcesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDataSourcesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDataSourcesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MachineLearningClient::send
 */
AwsAbstractResponse * DescribeDataSourcesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDataSourcesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDataSourcesRequestPrivate
 *
 * @brief  Private implementation for DescribeDataSourcesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDataSourcesRequestPrivate object.
 *
 * @param  action  MachineLearning action being performed.
 * @param  q       Pointer to this object's public DescribeDataSourcesRequest instance.
 */
DescribeDataSourcesRequestPrivate::DescribeDataSourcesRequestPrivate(
    const MachineLearningRequest::Action action, DescribeDataSourcesRequest * const q)
    : DescribeDataSourcesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDataSourcesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDataSourcesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDataSourcesRequest instance.
 */
DescribeDataSourcesRequestPrivate::DescribeDataSourcesRequestPrivate(
    const DescribeDataSourcesRequestPrivate &other, DescribeDataSourcesRequest * const q)
    : DescribeDataSourcesPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace AWS
