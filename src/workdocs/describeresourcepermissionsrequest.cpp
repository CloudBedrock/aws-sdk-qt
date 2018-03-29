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

#include "describeresourcepermissionsrequest.h"
#include "describeresourcepermissionsrequest_p.h"
#include "describeresourcepermissionsresponse.h"
#include "workdocsrequest_p.h"

namespace QtAws {
namespace WorkDocs {

/**
 * @class  DescribeResourcePermissionsRequest
 *
 * @brief  Implements WorkDocs DescribeResourcePermissions requests.
 *
 * @see    WorkDocsClient::describeResourcePermissions
 */

/**
 * @brief  Constructs a new DescribeResourcePermissionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeResourcePermissionsRequest::DescribeResourcePermissionsRequest(const DescribeResourcePermissionsRequest &other)
    : WorkDocsRequest(new DescribeResourcePermissionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeResourcePermissionsRequest object.
 */
DescribeResourcePermissionsRequest::DescribeResourcePermissionsRequest()
    : WorkDocsRequest(new DescribeResourcePermissionsRequestPrivate(WorkDocsRequest::DescribeResourcePermissionsAction, this))
{

}

bool DescribeResourcePermissionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeResourcePermissionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeResourcePermissionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeResourcePermissionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeResourcePermissionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeResourcePermissionsRequestPrivate
 *
 * @brief  Private implementation for DescribeResourcePermissionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeResourcePermissionsRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public DescribeResourcePermissionsRequest instance.
 */
DescribeResourcePermissionsRequestPrivate::DescribeResourcePermissionsRequestPrivate(
    const WorkDocsRequest::Action action, DescribeResourcePermissionsRequest * const q)
    : WorkDocsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeResourcePermissionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeResourcePermissionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeResourcePermissionsRequest instance.
 */
DescribeResourcePermissionsRequestPrivate::DescribeResourcePermissionsRequestPrivate(
    const DescribeResourcePermissionsRequestPrivate &other, DescribeResourcePermissionsRequest * const q)
    : WorkDocsRequestPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace QtAws
