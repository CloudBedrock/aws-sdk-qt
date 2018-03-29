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

#include "describegroupsrequest.h"
#include "describegroupsrequest_p.h"
#include "describegroupsresponse.h"
#include "workdocsrequest_p.h"

namespace QtAws {
namespace WorkDocs {

/**
 * @class  DescribeGroupsRequest
 *
 * @brief  Implements WorkDocs DescribeGroups requests.
 *
 * @see    WorkDocsClient::describeGroups
 */

/**
 * @brief  Constructs a new DescribeGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeGroupsRequest::DescribeGroupsRequest(const DescribeGroupsRequest &other)
    : WorkDocsRequest(new DescribeGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeGroupsRequest object.
 */
DescribeGroupsRequest::DescribeGroupsRequest()
    : WorkDocsRequest(new DescribeGroupsRequestPrivate(WorkDocsRequest::DescribeGroupsAction, this))
{

}

bool DescribeGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeGroupsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeGroupsRequestPrivate
 *
 * @brief  Private implementation for DescribeGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeGroupsRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public DescribeGroupsRequest instance.
 */
DescribeGroupsRequestPrivate::DescribeGroupsRequestPrivate(
    const WorkDocsRequest::Action action, DescribeGroupsRequest * const q)
    : DescribeGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeGroupsRequest instance.
 */
DescribeGroupsRequestPrivate::DescribeGroupsRequestPrivate(
    const DescribeGroupsRequestPrivate &other, DescribeGroupsRequest * const q)
    : DescribeGroupsPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace QtAws
