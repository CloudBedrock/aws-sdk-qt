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

#include "describespotdatafeedsubscriptionrequest.h"
#include "describespotdatafeedsubscriptionrequest_p.h"
#include "describespotdatafeedsubscriptionresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeSpotDatafeedSubscriptionRequest
 *
 * @brief  Implements EC2 DescribeSpotDatafeedSubscription requests.
 *
 * @see    EC2Client::describeSpotDatafeedSubscription
 */

/**
 * @brief  Constructs a new DescribeSpotDatafeedSubscriptionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeSpotDatafeedSubscriptionRequest::DescribeSpotDatafeedSubscriptionRequest(const DescribeSpotDatafeedSubscriptionRequest &other)
    : EC2Request(new DescribeSpotDatafeedSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeSpotDatafeedSubscriptionRequest object.
 */
DescribeSpotDatafeedSubscriptionRequest::DescribeSpotDatafeedSubscriptionRequest()
    : EC2Request(new DescribeSpotDatafeedSubscriptionRequestPrivate(EC2Request::DescribeSpotDatafeedSubscriptionAction, this))
{

}

bool DescribeSpotDatafeedSubscriptionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeSpotDatafeedSubscriptionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeSpotDatafeedSubscriptionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSpotDatafeedSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSpotDatafeedSubscriptionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeSpotDatafeedSubscriptionRequestPrivate
 *
 * @brief  Private implementation for DescribeSpotDatafeedSubscriptionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSpotDatafeedSubscriptionRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeSpotDatafeedSubscriptionRequest instance.
 */
DescribeSpotDatafeedSubscriptionRequestPrivate::DescribeSpotDatafeedSubscriptionRequestPrivate(
    const EC2Request::Action action, DescribeSpotDatafeedSubscriptionRequest * const q)
    : DescribeSpotDatafeedSubscriptionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSpotDatafeedSubscriptionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeSpotDatafeedSubscriptionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeSpotDatafeedSubscriptionRequest instance.
 */
DescribeSpotDatafeedSubscriptionRequestPrivate::DescribeSpotDatafeedSubscriptionRequestPrivate(
    const DescribeSpotDatafeedSubscriptionRequestPrivate &other, DescribeSpotDatafeedSubscriptionRequest * const q)
    : DescribeSpotDatafeedSubscriptionPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
