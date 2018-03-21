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

#include "describeenvironmentsrequest.h"
#include "describeenvironmentsrequest_p.h"
#include "describeenvironmentsresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  DescribeEnvironmentsRequest
 *
 * @brief  Implements ElasticBeanstalk DescribeEnvironments requests.
 *
 * @see    ElasticBeanstalkClient::describeEnvironments
 */

/**
 * @brief  Constructs a new DescribeEnvironmentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEnvironmentsResponse::DescribeEnvironmentsResponse(

/**
 * @brief  Constructs a new DescribeEnvironmentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEnvironmentsRequest::DescribeEnvironmentsRequest(const DescribeEnvironmentsRequest &other)
    : ElasticBeanstalkRequest(new DescribeEnvironmentsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeEnvironmentsRequest object.
 */
DescribeEnvironmentsRequest::DescribeEnvironmentsRequest()
    : ElasticBeanstalkRequest(new DescribeEnvironmentsRequestPrivate(ElasticBeanstalkRequest::DescribeEnvironmentsAction, this))
{

}

bool DescribeEnvironmentsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeEnvironmentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEnvironmentsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
AwsAbstractResponse * DescribeEnvironmentsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEnvironmentsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeEnvironmentsRequestPrivate
 *
 * @brief  Private implementation for DescribeEnvironmentsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEnvironmentsRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public DescribeEnvironmentsRequest instance.
 */
DescribeEnvironmentsRequestPrivate::DescribeEnvironmentsRequestPrivate(
    const ElasticBeanstalkRequest::Action action, DescribeEnvironmentsRequest * const q)
    : DescribeEnvironmentsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEnvironmentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEnvironmentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEnvironmentsRequest instance.
 */
DescribeEnvironmentsRequestPrivate::DescribeEnvironmentsRequestPrivate(
    const DescribeEnvironmentsRequestPrivate &other, DescribeEnvironmentsRequest * const q)
    : DescribeEnvironmentsPrivate(other, q)
{

}
