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

#include "describepermissionsrequest.h"
#include "describepermissionsrequest_p.h"
#include "describepermissionsresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  DescribePermissionsRequest
 *
 * @brief  Implements OpsWorks DescribePermissions requests.
 *
 * @see    OpsWorksClient::describePermissions
 */

/**
 * @brief  Constructs a new DescribePermissionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribePermissionsResponse::DescribePermissionsResponse(

/**
 * @brief  Constructs a new DescribePermissionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribePermissionsRequest::DescribePermissionsRequest(const DescribePermissionsRequest &other)
    : OpsWorksRequest(new DescribePermissionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribePermissionsRequest object.
 */
DescribePermissionsRequest::DescribePermissionsRequest()
    : OpsWorksRequest(new DescribePermissionsRequestPrivate(OpsWorksRequest::DescribePermissionsAction, this))
{

}

bool DescribePermissionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribePermissionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribePermissionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * DescribePermissionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribePermissionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribePermissionsRequestPrivate
 *
 * @brief  Private implementation for DescribePermissionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribePermissionsRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public DescribePermissionsRequest instance.
 */
DescribePermissionsRequestPrivate::DescribePermissionsRequestPrivate(
    const OpsWorksRequest::Action action, DescribePermissionsRequest * const q)
    : DescribePermissionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribePermissionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribePermissionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribePermissionsRequest instance.
 */
DescribePermissionsRequestPrivate::DescribePermissionsRequestPrivate(
    const DescribePermissionsRequestPrivate &other, DescribePermissionsRequest * const q)
    : DescribePermissionsPrivate(other, q)
{

}
