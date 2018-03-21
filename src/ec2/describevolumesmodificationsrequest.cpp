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

#include "describevolumesmodificationsrequest.h"
#include "describevolumesmodificationsrequest_p.h"
#include "describevolumesmodificationsresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeVolumesModificationsRequest
 *
 * @brief  Implements EC2 DescribeVolumesModifications requests.
 *
 * @see    EC2Client::describeVolumesModifications
 */

/**
 * @brief  Constructs a new DescribeVolumesModificationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeVolumesModificationsResponse::DescribeVolumesModificationsResponse(

/**
 * @brief  Constructs a new DescribeVolumesModificationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeVolumesModificationsRequest::DescribeVolumesModificationsRequest(const DescribeVolumesModificationsRequest &other)
    : EC2Request(new DescribeVolumesModificationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeVolumesModificationsRequest object.
 */
DescribeVolumesModificationsRequest::DescribeVolumesModificationsRequest()
    : EC2Request(new DescribeVolumesModificationsRequestPrivate(EC2Request::DescribeVolumesModificationsAction, this))
{

}

bool DescribeVolumesModificationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeVolumesModificationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeVolumesModificationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeVolumesModificationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeVolumesModificationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeVolumesModificationsRequestPrivate
 *
 * @brief  Private implementation for DescribeVolumesModificationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVolumesModificationsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeVolumesModificationsRequest instance.
 */
DescribeVolumesModificationsRequestPrivate::DescribeVolumesModificationsRequestPrivate(
    const EC2Request::Action action, DescribeVolumesModificationsRequest * const q)
    : DescribeVolumesModificationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVolumesModificationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeVolumesModificationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeVolumesModificationsRequest instance.
 */
DescribeVolumesModificationsRequestPrivate::DescribeVolumesModificationsRequestPrivate(
    const DescribeVolumesModificationsRequestPrivate &other, DescribeVolumesModificationsRequest * const q)
    : DescribeVolumesModificationsPrivate(other, q)
{

}
