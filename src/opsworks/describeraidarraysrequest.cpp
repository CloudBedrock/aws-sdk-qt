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

#include "describeraidarraysrequest.h"
#include "describeraidarraysrequest_p.h"
#include "describeraidarraysresponse.h"
#include "opsworksrequest_p.h"

namespace QtAws {
namespace OpsWorks {

/**
 * @class  DescribeRaidArraysRequest
 *
 * @brief  Implements OpsWorks DescribeRaidArrays requests.
 *
 * @see    OpsWorksClient::describeRaidArrays
 */

/**
 * @brief  Constructs a new DescribeRaidArraysRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeRaidArraysRequest::DescribeRaidArraysRequest(const DescribeRaidArraysRequest &other)
    : OpsWorksRequest(new DescribeRaidArraysRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeRaidArraysRequest object.
 */
DescribeRaidArraysRequest::DescribeRaidArraysRequest()
    : OpsWorksRequest(new DescribeRaidArraysRequestPrivate(OpsWorksRequest::DescribeRaidArraysAction, this))
{

}

bool DescribeRaidArraysRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeRaidArraysResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeRaidArraysResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRaidArraysRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRaidArraysResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeRaidArraysRequestPrivate
 *
 * @brief  Private implementation for DescribeRaidArraysRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRaidArraysRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public DescribeRaidArraysRequest instance.
 */
DescribeRaidArraysRequestPrivate::DescribeRaidArraysRequestPrivate(
    const OpsWorksRequest::Action action, DescribeRaidArraysRequest * const q)
    : OpsWorksRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRaidArraysRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeRaidArraysRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeRaidArraysRequest instance.
 */
DescribeRaidArraysRequestPrivate::DescribeRaidArraysRequestPrivate(
    const DescribeRaidArraysRequestPrivate &other, DescribeRaidArraysRequest * const q)
    : OpsWorksRequestPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace QtAws
