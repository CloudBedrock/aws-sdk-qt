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

#include "describestackresourcerequest.h"
#include "describestackresourcerequest_p.h"
#include "describestackresourceresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/**
 * @class  DescribeStackResourceRequest
 *
 * @brief  Implements CloudFormation DescribeStackResource requests.
 *
 * @see    CloudFormationClient::describeStackResource
 */

/**
 * @brief  Constructs a new DescribeStackResourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeStackResourceRequest::DescribeStackResourceRequest(const DescribeStackResourceRequest &other)
    : CloudFormationRequest(new DescribeStackResourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeStackResourceRequest object.
 */
DescribeStackResourceRequest::DescribeStackResourceRequest()
    : CloudFormationRequest(new DescribeStackResourceRequestPrivate(CloudFormationRequest::DescribeStackResourceAction, this))
{

}

bool DescribeStackResourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeStackResourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeStackResourceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeStackResourceRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStackResourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeStackResourceRequestPrivate
 *
 * @brief  Private implementation for DescribeStackResourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStackResourceRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public DescribeStackResourceRequest instance.
 */
DescribeStackResourceRequestPrivate::DescribeStackResourceRequestPrivate(
    const CloudFormationRequest::Action action, DescribeStackResourceRequest * const q)
    : DescribeStackResourcePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStackResourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeStackResourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeStackResourceRequest instance.
 */
DescribeStackResourceRequestPrivate::DescribeStackResourceRequestPrivate(
    const DescribeStackResourceRequestPrivate &other, DescribeStackResourceRequest * const q)
    : DescribeStackResourcePrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
