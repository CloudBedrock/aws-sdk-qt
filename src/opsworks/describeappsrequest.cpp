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

#include "describeappsrequest.h"
#include "describeappsrequest_p.h"
#include "describeappsresponse.h"
#include "opsworksrequest_p.h"

namespace QtAws {
namespace OpsWorks {

/**
 * @class  DescribeAppsRequest
 *
 * @brief  Implements OpsWorks DescribeApps requests.
 *
 * @see    OpsWorksClient::describeApps
 */

/**
 * @brief  Constructs a new DescribeAppsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAppsRequest::DescribeAppsRequest(const DescribeAppsRequest &other)
    : OpsWorksRequest(new DescribeAppsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAppsRequest object.
 */
DescribeAppsRequest::DescribeAppsRequest()
    : OpsWorksRequest(new DescribeAppsRequestPrivate(OpsWorksRequest::DescribeAppsAction, this))
{

}

bool DescribeAppsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAppsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAppsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAppsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAppsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAppsRequestPrivate
 *
 * @brief  Private implementation for DescribeAppsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAppsRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public DescribeAppsRequest instance.
 */
DescribeAppsRequestPrivate::DescribeAppsRequestPrivate(
    const OpsWorksRequest::Action action, DescribeAppsRequest * const q)
    : OpsWorksRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAppsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAppsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAppsRequest instance.
 */
DescribeAppsRequestPrivate::DescribeAppsRequestPrivate(
    const DescribeAppsRequestPrivate &other, DescribeAppsRequest * const q)
    : OpsWorksRequestPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace QtAws
