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

#include "bundleinstancerequest.h"
#include "bundleinstancerequest_p.h"
#include "bundleinstanceresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  BundleInstanceRequest
 *
 * @brief  Implements EC2 BundleInstance requests.
 *
 * @see    EC2Client::bundleInstance
 */

/**
 * @brief  Constructs a new BundleInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BundleInstanceRequest::BundleInstanceRequest(const BundleInstanceRequest &other)
    : EC2Request(new BundleInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BundleInstanceRequest object.
 */
BundleInstanceRequest::BundleInstanceRequest()
    : EC2Request(new BundleInstanceRequestPrivate(EC2Request::BundleInstanceAction, this))
{

}

bool BundleInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BundleInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BundleInstanceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * BundleInstanceRequest::response(QNetworkReply * const reply) const
{
    return new BundleInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BundleInstanceRequestPrivate
 *
 * @brief  Private implementation for BundleInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BundleInstanceRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public BundleInstanceRequest instance.
 */
BundleInstanceRequestPrivate::BundleInstanceRequestPrivate(
    const EC2Request::Action action, BundleInstanceRequest * const q)
    : BundleInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BundleInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BundleInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BundleInstanceRequest instance.
 */
BundleInstanceRequestPrivate::BundleInstanceRequestPrivate(
    const BundleInstanceRequestPrivate &other, BundleInstanceRequest * const q)
    : BundleInstancePrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
